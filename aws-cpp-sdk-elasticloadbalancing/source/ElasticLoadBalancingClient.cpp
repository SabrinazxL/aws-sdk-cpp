/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpoint.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/model/AddTagsRequest.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;
using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticloadbalancing";
static const char* ALLOCATION_TAG = "ElasticLoadBalancingClient";

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::~ElasticLoadBalancingClient()
{
}

void ElasticLoadBalancingClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ElasticLoadBalancingEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AddTagsOutcome ElasticLoadBalancingClient::AddTags(const AddTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable ElasticLoadBalancingClient::AddTagsCallable(const AddTagsRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::AddTags, this, request);
}

void ElasticLoadBalancingClient::AddTagsAsync(const AddTagsRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::AddTagsAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::AddTagsAsyncHelper(const AddTagsRequest& request) const
{
  m_onAddTagsOutcomeReceived(this, request, AddTags(request));
}

ApplySecurityGroupsToLoadBalancerOutcome ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ApplySecurityGroupsToLoadBalancerOutcome(ApplySecurityGroupsToLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return ApplySecurityGroupsToLoadBalancerOutcome(outcome.GetError());
  }
}

ApplySecurityGroupsToLoadBalancerOutcomeCallable ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerCallable(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsync(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsyncHelper(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  m_onApplySecurityGroupsToLoadBalancerOutcomeReceived(this, request, ApplySecurityGroupsToLoadBalancer(request));
}

AttachLoadBalancerToSubnetsOutcome ElasticLoadBalancingClient::AttachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachLoadBalancerToSubnetsOutcome(AttachLoadBalancerToSubnetsResult(outcome.GetResult()));
  }
  else
  {
    return AttachLoadBalancerToSubnetsOutcome(outcome.GetError());
  }
}

AttachLoadBalancerToSubnetsOutcomeCallable ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsCallable(const AttachLoadBalancerToSubnetsRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::AttachLoadBalancerToSubnets, this, request);
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsync(const AttachLoadBalancerToSubnetsRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsyncHelper(const AttachLoadBalancerToSubnetsRequest& request) const
{
  m_onAttachLoadBalancerToSubnetsOutcomeReceived(this, request, AttachLoadBalancerToSubnets(request));
}

ConfigureHealthCheckOutcome ElasticLoadBalancingClient::ConfigureHealthCheck(const ConfigureHealthCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfigureHealthCheckOutcome(ConfigureHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return ConfigureHealthCheckOutcome(outcome.GetError());
  }
}

ConfigureHealthCheckOutcomeCallable ElasticLoadBalancingClient::ConfigureHealthCheckCallable(const ConfigureHealthCheckRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::ConfigureHealthCheck, this, request);
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsync(const ConfigureHealthCheckRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::ConfigureHealthCheckAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsyncHelper(const ConfigureHealthCheckRequest& request) const
{
  m_onConfigureHealthCheckOutcomeReceived(this, request, ConfigureHealthCheck(request));
}

CreateAppCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAppCookieStickinessPolicyOutcome(CreateAppCookieStickinessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppCookieStickinessPolicyOutcome(outcome.GetError());
  }
}

CreateAppCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyCallable(const CreateAppCookieStickinessPolicyRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy, this, request);
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsync(const CreateAppCookieStickinessPolicyRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsyncHelper(const CreateAppCookieStickinessPolicyRequest& request) const
{
  m_onCreateAppCookieStickinessPolicyOutcomeReceived(this, request, CreateAppCookieStickinessPolicy(request));
}

CreateLBCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLBCookieStickinessPolicyOutcome(CreateLBCookieStickinessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateLBCookieStickinessPolicyOutcome(outcome.GetError());
  }
}

CreateLBCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyCallable(const CreateLBCookieStickinessPolicyRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy, this, request);
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsync(const CreateLBCookieStickinessPolicyRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsyncHelper(const CreateLBCookieStickinessPolicyRequest& request) const
{
  m_onCreateLBCookieStickinessPolicyOutcomeReceived(this, request, CreateLBCookieStickinessPolicy(request));
}

CreateLoadBalancerOutcome ElasticLoadBalancingClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerOutcome(outcome.GetError());
  }
}

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::CreateLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::CreateLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsyncHelper(const CreateLoadBalancerRequest& request) const
{
  m_onCreateLoadBalancerOutcomeReceived(this, request, CreateLoadBalancer(request));
}

CreateLoadBalancerListenersOutcome ElasticLoadBalancingClient::CreateLoadBalancerListeners(const CreateLoadBalancerListenersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerListenersOutcome(CreateLoadBalancerListenersResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerListenersOutcome(outcome.GetError());
  }
}

CreateLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerListenersCallable(const CreateLoadBalancerListenersRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::CreateLoadBalancerListeners, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsync(const CreateLoadBalancerListenersRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::CreateLoadBalancerListenersAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsyncHelper(const CreateLoadBalancerListenersRequest& request) const
{
  m_onCreateLoadBalancerListenersOutcomeReceived(this, request, CreateLoadBalancerListeners(request));
}

CreateLoadBalancerPolicyOutcome ElasticLoadBalancingClient::CreateLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerPolicyOutcome(CreateLoadBalancerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerPolicyOutcome(outcome.GetError());
  }
}

CreateLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerPolicyCallable(const CreateLoadBalancerPolicyRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::CreateLoadBalancerPolicy, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsync(const CreateLoadBalancerPolicyRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsyncHelper(const CreateLoadBalancerPolicyRequest& request) const
{
  m_onCreateLoadBalancerPolicyOutcomeReceived(this, request, CreateLoadBalancerPolicy(request));
}

DeleteLoadBalancerOutcome ElasticLoadBalancingClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DeleteLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DeleteLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsyncHelper(const DeleteLoadBalancerRequest& request) const
{
  m_onDeleteLoadBalancerOutcomeReceived(this, request, DeleteLoadBalancer(request));
}

DeleteLoadBalancerListenersOutcome ElasticLoadBalancingClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerListenersOutcome(DeleteLoadBalancerListenersResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerListenersOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DeleteLoadBalancerListeners, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsyncHelper(const DeleteLoadBalancerListenersRequest& request) const
{
  m_onDeleteLoadBalancerListenersOutcomeReceived(this, request, DeleteLoadBalancerListeners(request));
}

DeleteLoadBalancerPolicyOutcome ElasticLoadBalancingClient::DeleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerPolicyOutcome(DeleteLoadBalancerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerPolicyOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerPolicyCallable(const DeleteLoadBalancerPolicyRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DeleteLoadBalancerPolicy, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsync(const DeleteLoadBalancerPolicyRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsyncHelper(const DeleteLoadBalancerPolicyRequest& request) const
{
  m_onDeleteLoadBalancerPolicyOutcomeReceived(this, request, DeleteLoadBalancerPolicy(request));
}

DeregisterInstancesFromLoadBalancerOutcome ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterInstancesFromLoadBalancerOutcome(DeregisterInstancesFromLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterInstancesFromLoadBalancerOutcome(outcome.GetError());
  }
}

DeregisterInstancesFromLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerCallable(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsync(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsyncHelper(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  m_onDeregisterInstancesFromLoadBalancerOutcomeReceived(this, request, DeregisterInstancesFromLoadBalancer(request));
}

DescribeInstanceHealthOutcome ElasticLoadBalancingClient::DescribeInstanceHealth(const DescribeInstanceHealthRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceHealthOutcome(DescribeInstanceHealthResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceHealthOutcome(outcome.GetError());
  }
}

DescribeInstanceHealthOutcomeCallable ElasticLoadBalancingClient::DescribeInstanceHealthCallable(const DescribeInstanceHealthRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeInstanceHealth, this, request);
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsync(const DescribeInstanceHealthRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeInstanceHealthAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsyncHelper(const DescribeInstanceHealthRequest& request) const
{
  m_onDescribeInstanceHealthOutcomeReceived(this, request, DescribeInstanceHealth(request));
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerAttributesOutcome(DescribeLoadBalancerAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerAttributesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeLoadBalancerAttributes, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsyncHelper(const DescribeLoadBalancerAttributesRequest& request) const
{
  m_onDescribeLoadBalancerAttributesOutcomeReceived(this, request, DescribeLoadBalancerAttributes(request));
}

DescribeLoadBalancerPoliciesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerPoliciesOutcome(DescribeLoadBalancerPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerPoliciesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerPoliciesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesCallable(const DescribeLoadBalancerPoliciesRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeLoadBalancerPolicies, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsync(const DescribeLoadBalancerPoliciesRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsyncHelper(const DescribeLoadBalancerPoliciesRequest& request) const
{
  m_onDescribeLoadBalancerPoliciesOutcomeReceived(this, request, DescribeLoadBalancerPolicies(request));
}

DescribeLoadBalancerPolicyTypesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerPolicyTypesOutcome(DescribeLoadBalancerPolicyTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerPolicyTypesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerPolicyTypesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesCallable(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsync(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsyncHelper(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  m_onDescribeLoadBalancerPolicyTypesOutcomeReceived(this, request, DescribeLoadBalancerPolicyTypes(request));
}

DescribeLoadBalancersOutcome ElasticLoadBalancingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancersOutcome(outcome.GetError());
  }
}

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeLoadBalancers, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeLoadBalancersAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsyncHelper(const DescribeLoadBalancersRequest& request) const
{
  m_onDescribeLoadBalancersOutcomeReceived(this, request, DescribeLoadBalancers(request));
}

DescribeTagsOutcome ElasticLoadBalancingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable ElasticLoadBalancingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DescribeTags, this, request);
}

void ElasticLoadBalancingClient::DescribeTagsAsync(const DescribeTagsRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DescribeTagsAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request) const
{
  m_onDescribeTagsOutcomeReceived(this, request, DescribeTags(request));
}

DetachLoadBalancerFromSubnetsOutcome ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachLoadBalancerFromSubnetsOutcome(DetachLoadBalancerFromSubnetsResult(outcome.GetResult()));
  }
  else
  {
    return DetachLoadBalancerFromSubnetsOutcome(outcome.GetError());
  }
}

DetachLoadBalancerFromSubnetsOutcomeCallable ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsCallable(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets, this, request);
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsync(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsyncHelper(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  m_onDetachLoadBalancerFromSubnetsOutcomeReceived(this, request, DetachLoadBalancerFromSubnets(request));
}

DisableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableAvailabilityZonesForLoadBalancerOutcome(DisableAvailabilityZonesForLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DisableAvailabilityZonesForLoadBalancerOutcome(outcome.GetError());
  }
}

DisableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerCallable(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsync(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsyncHelper(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  m_onDisableAvailabilityZonesForLoadBalancerOutcomeReceived(this, request, DisableAvailabilityZonesForLoadBalancer(request));
}

EnableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableAvailabilityZonesForLoadBalancerOutcome(EnableAvailabilityZonesForLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return EnableAvailabilityZonesForLoadBalancerOutcome(outcome.GetError());
  }
}

EnableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerCallable(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsync(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsyncHelper(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  m_onEnableAvailabilityZonesForLoadBalancerOutcomeReceived(this, request, EnableAvailabilityZonesForLoadBalancer(request));
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyLoadBalancerAttributesOutcome(ModifyLoadBalancerAttributesResult(outcome.GetResult()));
  }
  else
  {
    return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
  }
}

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::ModifyLoadBalancerAttributes, this, request);
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsyncHelper(const ModifyLoadBalancerAttributesRequest& request) const
{
  m_onModifyLoadBalancerAttributesOutcomeReceived(this, request, ModifyLoadBalancerAttributes(request));
}

RegisterInstancesWithLoadBalancerOutcome ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterInstancesWithLoadBalancerOutcome(RegisterInstancesWithLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return RegisterInstancesWithLoadBalancerOutcome(outcome.GetError());
  }
}

RegisterInstancesWithLoadBalancerOutcomeCallable ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerCallable(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer, this, request);
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsync(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsyncHelper(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  m_onRegisterInstancesWithLoadBalancerOutcomeReceived(this, request, RegisterInstancesWithLoadBalancer(request));
}

RemoveTagsOutcome ElasticLoadBalancingClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable ElasticLoadBalancingClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::RemoveTags, this, request);
}

void ElasticLoadBalancingClient::RemoveTagsAsync(const RemoveTagsRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::RemoveTagsAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request) const
{
  m_onRemoveTagsOutcomeReceived(this, request, RemoveTags(request));
}

SetLoadBalancerListenerSSLCertificateOutcome ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerListenerSSLCertificateOutcome(SetLoadBalancerListenerSSLCertificateResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerListenerSSLCertificateOutcome(outcome.GetError());
  }
}

SetLoadBalancerListenerSSLCertificateOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateCallable(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsync(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsyncHelper(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  m_onSetLoadBalancerListenerSSLCertificateOutcomeReceived(this, request, SetLoadBalancerListenerSSLCertificate(request));
}

SetLoadBalancerPoliciesForBackendServerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerPoliciesForBackendServerOutcome(SetLoadBalancerPoliciesForBackendServerResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerPoliciesForBackendServerOutcome(outcome.GetError());
  }
}

SetLoadBalancerPoliciesForBackendServerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerCallable(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsync(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsyncHelper(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  m_onSetLoadBalancerPoliciesForBackendServerOutcomeReceived(this, request, SetLoadBalancerPoliciesForBackendServer(request));
}

SetLoadBalancerPoliciesOfListenerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerPoliciesOfListenerOutcome(SetLoadBalancerPoliciesOfListenerResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerPoliciesOfListenerOutcome(outcome.GetError());
  }
}

SetLoadBalancerPoliciesOfListenerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerCallable(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  return std::async(std::launch::async, &ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsync(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  m_executor->Submit(&ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsyncHelper, this, request);
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsyncHelper(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  m_onSetLoadBalancerPoliciesOfListenerOutcomeReceived(this, request, SetLoadBalancerPoliciesOfListener(request));
}

