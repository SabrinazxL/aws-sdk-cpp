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
#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/cognito-identity/model/CreateIdentityPoolResult.h>
#include <aws/cognito-identity/model/DescribeIdentityResult.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolResult.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityResult.h>
#include <aws/cognito-identity/model/GetIdResult.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesResult.h>
#include <aws/cognito-identity/model/GetOpenIdTokenResult.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityResult.h>
#include <aws/cognito-identity/model/ListIdentitiesResult.h>
#include <aws/cognito-identity/model/ListIdentityPoolsResult.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityResult.h>
#include <aws/cognito-identity/model/MergeDeveloperIdentitiesResult.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolResult.h>
#include <aws/core/NoResult.h>
#include <future>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace CognitoIdentity
{

namespace Model
{
    class CreateIdentityPoolRequest;
    class DeleteIdentityPoolRequest;
    class DescribeIdentityRequest;
    class DescribeIdentityPoolRequest;
    class GetCredentialsForIdentityRequest;
    class GetIdRequest;
    class GetIdentityPoolRolesRequest;
    class GetOpenIdTokenRequest;
    class GetOpenIdTokenForDeveloperIdentityRequest;
    class ListIdentitiesRequest;
    class ListIdentityPoolsRequest;
    class LookupDeveloperIdentityRequest;
    class MergeDeveloperIdentitiesRequest;
    class SetIdentityPoolRolesRequest;
    class UnlinkDeveloperIdentityRequest;
    class UnlinkIdentityRequest;
    class UpdateIdentityPoolRequest;

  typedef Utils::Outcome<CreateIdentityPoolResult, Client::AWSError<CognitoIdentityErrors>> CreateIdentityPoolOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CognitoIdentityErrors>> DeleteIdentityPoolOutcome;
  typedef Utils::Outcome<DescribeIdentityResult, Client::AWSError<CognitoIdentityErrors>> DescribeIdentityOutcome;
  typedef Utils::Outcome<DescribeIdentityPoolResult, Client::AWSError<CognitoIdentityErrors>> DescribeIdentityPoolOutcome;
  typedef Utils::Outcome<GetCredentialsForIdentityResult, Client::AWSError<CognitoIdentityErrors>> GetCredentialsForIdentityOutcome;
  typedef Utils::Outcome<GetIdResult, Client::AWSError<CognitoIdentityErrors>> GetIdOutcome;
  typedef Utils::Outcome<GetIdentityPoolRolesResult, Client::AWSError<CognitoIdentityErrors>> GetIdentityPoolRolesOutcome;
  typedef Utils::Outcome<GetOpenIdTokenResult, Client::AWSError<CognitoIdentityErrors>> GetOpenIdTokenOutcome;
  typedef Utils::Outcome<GetOpenIdTokenForDeveloperIdentityResult, Client::AWSError<CognitoIdentityErrors>> GetOpenIdTokenForDeveloperIdentityOutcome;
  typedef Utils::Outcome<ListIdentitiesResult, Client::AWSError<CognitoIdentityErrors>> ListIdentitiesOutcome;
  typedef Utils::Outcome<ListIdentityPoolsResult, Client::AWSError<CognitoIdentityErrors>> ListIdentityPoolsOutcome;
  typedef Utils::Outcome<LookupDeveloperIdentityResult, Client::AWSError<CognitoIdentityErrors>> LookupDeveloperIdentityOutcome;
  typedef Utils::Outcome<MergeDeveloperIdentitiesResult, Client::AWSError<CognitoIdentityErrors>> MergeDeveloperIdentitiesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CognitoIdentityErrors>> SetIdentityPoolRolesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CognitoIdentityErrors>> UnlinkDeveloperIdentityOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<CognitoIdentityErrors>> UnlinkIdentityOutcome;
  typedef Utils::Outcome<UpdateIdentityPoolResult, Client::AWSError<CognitoIdentityErrors>> UpdateIdentityPoolOutcome;

  typedef std::future<CreateIdentityPoolOutcome> CreateIdentityPoolOutcomeCallable;
  typedef std::future<DeleteIdentityPoolOutcome> DeleteIdentityPoolOutcomeCallable;
  typedef std::future<DescribeIdentityOutcome> DescribeIdentityOutcomeCallable;
  typedef std::future<DescribeIdentityPoolOutcome> DescribeIdentityPoolOutcomeCallable;
  typedef std::future<GetCredentialsForIdentityOutcome> GetCredentialsForIdentityOutcomeCallable;
  typedef std::future<GetIdOutcome> GetIdOutcomeCallable;
  typedef std::future<GetIdentityPoolRolesOutcome> GetIdentityPoolRolesOutcomeCallable;
  typedef std::future<GetOpenIdTokenOutcome> GetOpenIdTokenOutcomeCallable;
  typedef std::future<GetOpenIdTokenForDeveloperIdentityOutcome> GetOpenIdTokenForDeveloperIdentityOutcomeCallable;
  typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
  typedef std::future<ListIdentityPoolsOutcome> ListIdentityPoolsOutcomeCallable;
  typedef std::future<LookupDeveloperIdentityOutcome> LookupDeveloperIdentityOutcomeCallable;
  typedef std::future<MergeDeveloperIdentitiesOutcome> MergeDeveloperIdentitiesOutcomeCallable;
  typedef std::future<SetIdentityPoolRolesOutcome> SetIdentityPoolRolesOutcomeCallable;
  typedef std::future<UnlinkDeveloperIdentityOutcome> UnlinkDeveloperIdentityOutcomeCallable;
  typedef std::future<UnlinkIdentityOutcome> UnlinkIdentityOutcomeCallable;
  typedef std::future<UpdateIdentityPoolOutcome> UpdateIdentityPoolOutcomeCallable;
} // namespace Model

    class CognitoIdentityClient;

  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::CreateIdentityPoolRequest&, const Model::CreateIdentityPoolOutcome&> CreateIdentityPoolOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::DeleteIdentityPoolRequest&, const Model::DeleteIdentityPoolOutcome&> DeleteIdentityPoolOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::DescribeIdentityRequest&, const Model::DescribeIdentityOutcome&> DescribeIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::DescribeIdentityPoolRequest&, const Model::DescribeIdentityPoolOutcome&> DescribeIdentityPoolOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::GetCredentialsForIdentityRequest&, const Model::GetCredentialsForIdentityOutcome&> GetCredentialsForIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::GetIdRequest&, const Model::GetIdOutcome&> GetIdOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::GetIdentityPoolRolesRequest&, const Model::GetIdentityPoolRolesOutcome&> GetIdentityPoolRolesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::GetOpenIdTokenRequest&, const Model::GetOpenIdTokenOutcome&> GetOpenIdTokenOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::GetOpenIdTokenForDeveloperIdentityRequest&, const Model::GetOpenIdTokenForDeveloperIdentityOutcome&> GetOpenIdTokenForDeveloperIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&> ListIdentitiesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::ListIdentityPoolsRequest&, const Model::ListIdentityPoolsOutcome&> ListIdentityPoolsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::LookupDeveloperIdentityRequest&, const Model::LookupDeveloperIdentityOutcome&> LookupDeveloperIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::MergeDeveloperIdentitiesRequest&, const Model::MergeDeveloperIdentitiesOutcome&> MergeDeveloperIdentitiesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::SetIdentityPoolRolesRequest&, const Model::SetIdentityPoolRolesOutcome&> SetIdentityPoolRolesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::UnlinkDeveloperIdentityRequest&, const Model::UnlinkDeveloperIdentityOutcome&> UnlinkDeveloperIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::UnlinkIdentityRequest&, const Model::UnlinkIdentityOutcome&> UnlinkIdentityOutcomeReceivedEvent;
  typedef Aws::Utils::Event<CognitoIdentityClient, const Model::UpdateIdentityPoolRequest&, const Model::UpdateIdentityPoolOutcome&> UpdateIdentityPoolOutcomeReceivedEvent;

  /*
    <fullname>Amazon Cognito</fullname> <p>Amazon Cognito is a web service that delivers scoped temporary credentials to mobile devices and other untrusted environments. Amazon Cognito uniquely identifies a device and supplies the user with a consistent identity over the lifetime of an application.</p> <p>Using Amazon Cognito, you can enable authentication with one or more third-party identity providers (Facebook, Google, or Login with Amazon), and you can also choose to support unauthenticated access from your app. Cognito delivers a unique identifier for each user and acts as an OpenID token provider trusted by AWS Security Token Service (STS) to access temporary, limited-privilege AWS credentials.</p> <p>To provide end-user credentials, first make an unsigned call to <a>GetId</a>. If the end user is authenticated with one of the supported identity providers, set the <code>Logins</code> map with the identity provider token. <code>GetId</code> returns a unique identifier for the user.</p> <p>Next, make an unsigned call to <a>GetCredentialsForIdentity</a>. This call expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. Assuming your identity pool has been configured via the <a>SetIdentityPoolRoles</a> operation, <code>GetCredentialsForIdentity</code> will return AWS credentials for your use. If your pool has not been configured with <code>SetIdentityPoolRoles</code>, or if you want to follow legacy flow, make an unsigned call to <a>GetOpenIdToken</a>, which returns the OpenID token necessary to call STS and retrieve AWS credentials. This call expects the same <code>Logins</code> map as the <code>GetId</code> call, as well as the <code>IdentityID</code> originally returned by <code>GetId</code>. The token returned by <code>GetOpenIdToken</code> can be passed to the STS operation <a href="http://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRoleWithWebIdentity.html">AssumeRoleWithWebIdentity</a> to retrieve AWS credentials.</p> <p>If you want to use Amazon Cognito in an Android, iOS, or Unity application, you will probably want to make API calls via the AWS Mobile SDK. To learn more, see the <a href="http://docs.aws.amazon.com/mobile/index.html">AWS Mobile SDK Developer Guide</a>.</p>
  */
  class AWS_COGNITOIDENTITY_API CognitoIdentityClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CognitoIdentityClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      CognitoIdentityClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      CognitoIdentityClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~CognitoIdentityClient();

     /*
       <p>Creates a new identity pool. The identity pool is a store of user identity information that is specific to your AWS account. The limit on identity pools is 60 per account. You must use AWS Developer credentials to call this API.</p>
     */
     Model::CreateIdentityPoolOutcome CreateIdentityPool(const Model::CreateIdentityPoolRequest& request) const;

     /*
       <p>Creates a new identity pool. The identity pool is a store of user identity information that is specific to your AWS account. The limit on identity pools is 60 per account. You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateIdentityPoolOutcomeCallable CreateIdentityPoolCallable(const Model::CreateIdentityPoolRequest& request) const;

     /*
       <p>Creates a new identity pool. The identity pool is a store of user identity information that is specific to your AWS account. The limit on identity pools is 60 per account. You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateIdentityPoolAsync(const Model::CreateIdentityPoolRequest& request) const;

     /*
       <p>Deletes a user pool. Once a pool is deleted, users will not be able to authenticate with the pool.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::DeleteIdentityPoolOutcome DeleteIdentityPool(const Model::DeleteIdentityPoolRequest& request) const;

     /*
       <p>Deletes a user pool. Once a pool is deleted, users will not be able to authenticate with the pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteIdentityPoolOutcomeCallable DeleteIdentityPoolCallable(const Model::DeleteIdentityPoolRequest& request) const;

     /*
       <p>Deletes a user pool. Once a pool is deleted, users will not be able to authenticate with the pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteIdentityPoolAsync(const Model::DeleteIdentityPoolRequest& request) const;

     /*
       <p>Returns metadata related to the given identity, including when the identity was created and any associated linked logins.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::DescribeIdentityOutcome DescribeIdentity(const Model::DescribeIdentityRequest& request) const;

     /*
       <p>Returns metadata related to the given identity, including when the identity was created and any associated linked logins.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeIdentityOutcomeCallable DescribeIdentityCallable(const Model::DescribeIdentityRequest& request) const;

     /*
       <p>Returns metadata related to the given identity, including when the identity was created and any associated linked logins.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeIdentityAsync(const Model::DescribeIdentityRequest& request) const;

     /*
       <p>Gets details about a particular identity pool, including the pool name, ID description, creation date, and current number of users.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::DescribeIdentityPoolOutcome DescribeIdentityPool(const Model::DescribeIdentityPoolRequest& request) const;

     /*
       <p>Gets details about a particular identity pool, including the pool name, ID description, creation date, and current number of users.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeIdentityPoolOutcomeCallable DescribeIdentityPoolCallable(const Model::DescribeIdentityPoolRequest& request) const;

     /*
       <p>Gets details about a particular identity pool, including the pool name, ID description, creation date, and current number of users.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeIdentityPoolAsync(const Model::DescribeIdentityPoolRequest& request) const;

     /*
       <p>Returns credentials for the the provided identity ID. Any provided logins will be validated against supported login providers. If the token is for cognito-identity.amazonaws.com, it will be passed through to AWS Security Token Service with the appropriate role for the token.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::GetCredentialsForIdentityOutcome GetCredentialsForIdentity(const Model::GetCredentialsForIdentityRequest& request) const;

     /*
       <p>Returns credentials for the the provided identity ID. Any provided logins will be validated against supported login providers. If the token is for cognito-identity.amazonaws.com, it will be passed through to AWS Security Token Service with the appropriate role for the token.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetCredentialsForIdentityOutcomeCallable GetCredentialsForIdentityCallable(const Model::GetCredentialsForIdentityRequest& request) const;

     /*
       <p>Returns credentials for the the provided identity ID. Any provided logins will be validated against supported login providers. If the token is for cognito-identity.amazonaws.com, it will be passed through to AWS Security Token Service with the appropriate role for the token.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetCredentialsForIdentityAsync(const Model::GetCredentialsForIdentityRequest& request) const;

     /*
       <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create an implicit linked account.</p> <p>token+";"+tokenSecret.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::GetIdOutcome GetId(const Model::GetIdRequest& request) const;

     /*
       <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create an implicit linked account.</p> <p>token+";"+tokenSecret.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdOutcomeCallable GetIdCallable(const Model::GetIdRequest& request) const;

     /*
       <p>Generates (or retrieves) a Cognito ID. Supplying multiple logins will create an implicit linked account.</p> <p>token+";"+tokenSecret.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdAsync(const Model::GetIdRequest& request) const;

     /*
       <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::GetIdentityPoolRolesOutcome GetIdentityPoolRoles(const Model::GetIdentityPoolRolesRequest& request) const;

     /*
       <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetIdentityPoolRolesOutcomeCallable GetIdentityPoolRolesCallable(const Model::GetIdentityPoolRolesRequest& request) const;

     /*
       <p>Gets the roles for an identity pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetIdentityPoolRolesAsync(const Model::GetIdentityPoolRolesRequest& request) const;

     /*
       <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is returned by <a>GetId</a>. You can optionally add additional logins for the identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId token is valid for 15 minutes.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::GetOpenIdTokenOutcome GetOpenIdToken(const Model::GetOpenIdTokenRequest& request) const;

     /*
       <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is returned by <a>GetId</a>. You can optionally add additional logins for the identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId token is valid for 15 minutes.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetOpenIdTokenOutcomeCallable GetOpenIdTokenCallable(const Model::GetOpenIdTokenRequest& request) const;

     /*
       <p>Gets an OpenID token, using a known Cognito ID. This known Cognito ID is returned by <a>GetId</a>. You can optionally add additional logins for the identity. Supplying multiple logins creates an implicit link.</p> <p>The OpenId token is valid for 15 minutes.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetOpenIdTokenAsync(const Model::GetOpenIdTokenRequest& request) const;

     /*
       <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID Connect token for a user authenticated by your backend authentication process. Supplying multiple logins will create an implicit linked account. You can only specify one developer provider as part of the <code>Logins</code> map, which is linked to the identity pool. The developer provider is the "domain" by which Cognito will refer to your users.</p> <p>You can use <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to link new logins (that is, user credentials issued by a public provider or developer provider) to an existing identity. When you want to create a new identity, the <code>IdentityId</code> should be null. When you want to associate a new login with an existing authenticated/unauthenticated identity, you can do so by providing the existing <code>IdentityId</code>. This API will create the identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::GetOpenIdTokenForDeveloperIdentityOutcome GetOpenIdTokenForDeveloperIdentity(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

     /*
       <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID Connect token for a user authenticated by your backend authentication process. Supplying multiple logins will create an implicit linked account. You can only specify one developer provider as part of the <code>Logins</code> map, which is linked to the identity pool. The developer provider is the "domain" by which Cognito will refer to your users.</p> <p>You can use <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to link new logins (that is, user credentials issued by a public provider or developer provider) to an existing identity. When you want to create a new identity, the <code>IdentityId</code> should be null. When you want to associate a new login with an existing authenticated/unauthenticated identity, you can do so by providing the existing <code>IdentityId</code>. This API will create the identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetOpenIdTokenForDeveloperIdentityOutcomeCallable GetOpenIdTokenForDeveloperIdentityCallable(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

     /*
       <p>Registers (or retrieves) a Cognito <code>IdentityId</code> and an OpenID Connect token for a user authenticated by your backend authentication process. Supplying multiple logins will create an implicit linked account. You can only specify one developer provider as part of the <code>Logins</code> map, which is linked to the identity pool. The developer provider is the "domain" by which Cognito will refer to your users.</p> <p>You can use <code>GetOpenIdTokenForDeveloperIdentity</code> to create a new identity and to link new logins (that is, user credentials issued by a public provider or developer provider) to an existing identity. When you want to create a new identity, the <code>IdentityId</code> should be null. When you want to associate a new login with an existing authenticated/unauthenticated identity, you can do so by providing the existing <code>IdentityId</code>. This API will create the identity in the specified <code>IdentityPoolId</code>.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetOpenIdTokenForDeveloperIdentityAsync(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;

     /*
       <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

     /*
       <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

     /*
       <p>Lists the identities in a pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request) const;

     /*
       <p>Lists all of the Cognito identity pools registered for your account.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::ListIdentityPoolsOutcome ListIdentityPools(const Model::ListIdentityPoolsRequest& request) const;

     /*
       <p>Lists all of the Cognito identity pools registered for your account.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::ListIdentityPoolsOutcomeCallable ListIdentityPoolsCallable(const Model::ListIdentityPoolsRequest& request) const;

     /*
       <p>Lists all of the Cognito identity pools registered for your account.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void ListIdentityPoolsAsync(const Model::ListIdentityPoolsRequest& request) const;

     /*
       <p>Retrieves the <code>IdentityID</code> associated with a <code>DeveloperUserIdentifier</code> or the list of <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code> for an existing identity. Either <code>IdentityID</code> or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of these values, the other value will be searched in the database and returned as a part of the response. If you supply both, <code>DeveloperUserIdentifier</code> will be matched against <code>IdentityID</code>. If the values are verified against the database, the response returns both values and is the same as the request. Otherwise a <code>ResourceConflictException</code> is thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::LookupDeveloperIdentityOutcome LookupDeveloperIdentity(const Model::LookupDeveloperIdentityRequest& request) const;

     /*
       <p>Retrieves the <code>IdentityID</code> associated with a <code>DeveloperUserIdentifier</code> or the list of <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code> for an existing identity. Either <code>IdentityID</code> or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of these values, the other value will be searched in the database and returned as a part of the response. If you supply both, <code>DeveloperUserIdentifier</code> will be matched against <code>IdentityID</code>. If the values are verified against the database, the response returns both values and is the same as the request. Otherwise a <code>ResourceConflictException</code> is thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::LookupDeveloperIdentityOutcomeCallable LookupDeveloperIdentityCallable(const Model::LookupDeveloperIdentityRequest& request) const;

     /*
       <p>Retrieves the <code>IdentityID</code> associated with a <code>DeveloperUserIdentifier</code> or the list of <code>DeveloperUserIdentifier</code>s associated with an <code>IdentityId</code> for an existing identity. Either <code>IdentityID</code> or <code>DeveloperUserIdentifier</code> must not be null. If you supply only one of these values, the other value will be searched in the database and returned as a part of the response. If you supply both, <code>DeveloperUserIdentifier</code> will be matched against <code>IdentityID</code>. If the values are verified against the database, the response returns both values and is the same as the request. Otherwise a <code>ResourceConflictException</code> is thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void LookupDeveloperIdentityAsync(const Model::LookupDeveloperIdentityRequest& request) const;

     /*
       <p>Merges two users having different <code>IdentityId</code>s, existing in the same identity pool, and identified by the same developer provider. You can use this action to request that discrete users be merged and identified as a single user in the Cognito environment. Cognito associates the given source user (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the <code>DestinationUserIdentifier</code>. Only developer-authenticated users can be merged. If the users to be merged are associated with the same public provider, but as two different users, an exception will be thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::MergeDeveloperIdentitiesOutcome MergeDeveloperIdentities(const Model::MergeDeveloperIdentitiesRequest& request) const;

     /*
       <p>Merges two users having different <code>IdentityId</code>s, existing in the same identity pool, and identified by the same developer provider. You can use this action to request that discrete users be merged and identified as a single user in the Cognito environment. Cognito associates the given source user (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the <code>DestinationUserIdentifier</code>. Only developer-authenticated users can be merged. If the users to be merged are associated with the same public provider, but as two different users, an exception will be thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::MergeDeveloperIdentitiesOutcomeCallable MergeDeveloperIdentitiesCallable(const Model::MergeDeveloperIdentitiesRequest& request) const;

     /*
       <p>Merges two users having different <code>IdentityId</code>s, existing in the same identity pool, and identified by the same developer provider. You can use this action to request that discrete users be merged and identified as a single user in the Cognito environment. Cognito associates the given source user (<code>SourceUserIdentifier</code>) with the <code>IdentityId</code> of the <code>DestinationUserIdentifier</code>. Only developer-authenticated users can be merged. If the users to be merged are associated with the same public provider, but as two different users, an exception will be thrown.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void MergeDeveloperIdentitiesAsync(const Model::MergeDeveloperIdentitiesRequest& request) const;

     /*
       <p>Sets the roles for an identity pool. These roles are used when making calls to <code>GetCredentialsForIdentity</code> action.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::SetIdentityPoolRolesOutcome SetIdentityPoolRoles(const Model::SetIdentityPoolRolesRequest& request) const;

     /*
       <p>Sets the roles for an identity pool. These roles are used when making calls to <code>GetCredentialsForIdentity</code> action.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetIdentityPoolRolesOutcomeCallable SetIdentityPoolRolesCallable(const Model::SetIdentityPoolRolesRequest& request) const;

     /*
       <p>Sets the roles for an identity pool. These roles are used when making calls to <code>GetCredentialsForIdentity</code> action.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetIdentityPoolRolesAsync(const Model::SetIdentityPoolRolesRequest& request) const;

     /*
       <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity. Unlinked developer users will be considered new identities next time they are seen. If, for a given Cognito identity, you remove all federated identities as well as the developer user identifier, the Cognito identity becomes inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::UnlinkDeveloperIdentityOutcome UnlinkDeveloperIdentity(const Model::UnlinkDeveloperIdentityRequest& request) const;

     /*
       <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity. Unlinked developer users will be considered new identities next time they are seen. If, for a given Cognito identity, you remove all federated identities as well as the developer user identifier, the Cognito identity becomes inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnlinkDeveloperIdentityOutcomeCallable UnlinkDeveloperIdentityCallable(const Model::UnlinkDeveloperIdentityRequest& request) const;

     /*
       <p>Unlinks a <code>DeveloperUserIdentifier</code> from an existing identity. Unlinked developer users will be considered new identities next time they are seen. If, for a given Cognito identity, you remove all federated identities as well as the developer user identifier, the Cognito identity becomes inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnlinkDeveloperIdentityAsync(const Model::UnlinkDeveloperIdentityRequest& request) const;

     /*
       <p>Unlinks a federated identity from an existing account. Unlinked logins will be considered new identities next time they are seen. Removing the last linked login will make this identity inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>
     */
     Model::UnlinkIdentityOutcome UnlinkIdentity(const Model::UnlinkIdentityRequest& request) const;

     /*
       <p>Unlinks a federated identity from an existing account. Unlinked logins will be considered new identities next time they are seen. Removing the last linked login will make this identity inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnlinkIdentityOutcomeCallable UnlinkIdentityCallable(const Model::UnlinkIdentityRequest& request) const;

     /*
       <p>Unlinks a federated identity from an existing account. Unlinked logins will be considered new identities next time they are seen. Removing the last linked login will make this identity inaccessible.</p> <p>This is a public API. You do not need any credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnlinkIdentityAsync(const Model::UnlinkIdentityRequest& request) const;

     /*
       <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call this API.</p>
     */
     Model::UpdateIdentityPoolOutcome UpdateIdentityPool(const Model::UpdateIdentityPoolRequest& request) const;

     /*
       <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateIdentityPoolOutcomeCallable UpdateIdentityPoolCallable(const Model::UpdateIdentityPoolRequest& request) const;

     /*
       <p>Updates a user pool.</p> <p>You must use AWS Developer credentials to call this API.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateIdentityPoolAsync(const Model::UpdateIdentityPoolRequest& request) const;

   /**
    * Adds an event handler for CreateIdentityPoolAsync to call upon completion to the handler chain. You need to call this to
    * use CreateIdentityPoolAsync.
    */
    inline void RegisterCreateIdentityPoolOutcomeReceivedHandler(const CreateIdentityPoolOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateIdentityPoolOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateIdentityPool.
    */
    inline void ClearAllCreateIdentityPoolOutcomeReceivedHandlers()
    {
      m_onCreateIdentityPoolOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteIdentityPoolAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteIdentityPoolAsync.
    */
    inline void RegisterDeleteIdentityPoolOutcomeReceivedHandler(const DeleteIdentityPoolOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteIdentityPoolOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteIdentityPool.
    */
    inline void ClearAllDeleteIdentityPoolOutcomeReceivedHandlers()
    {
      m_onDeleteIdentityPoolOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeIdentityAsync.
    */
    inline void RegisterDescribeIdentityOutcomeReceivedHandler(const DescribeIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeIdentity.
    */
    inline void ClearAllDescribeIdentityOutcomeReceivedHandlers()
    {
      m_onDescribeIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeIdentityPoolAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeIdentityPoolAsync.
    */
    inline void RegisterDescribeIdentityPoolOutcomeReceivedHandler(const DescribeIdentityPoolOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeIdentityPoolOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeIdentityPool.
    */
    inline void ClearAllDescribeIdentityPoolOutcomeReceivedHandlers()
    {
      m_onDescribeIdentityPoolOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetCredentialsForIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use GetCredentialsForIdentityAsync.
    */
    inline void RegisterGetCredentialsForIdentityOutcomeReceivedHandler(const GetCredentialsForIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetCredentialsForIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetCredentialsForIdentity.
    */
    inline void ClearAllGetCredentialsForIdentityOutcomeReceivedHandlers()
    {
      m_onGetCredentialsForIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdAsync.
    */
    inline void RegisterGetIdOutcomeReceivedHandler(const GetIdOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetId.
    */
    inline void ClearAllGetIdOutcomeReceivedHandlers()
    {
      m_onGetIdOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetIdentityPoolRolesAsync to call upon completion to the handler chain. You need to call this to
    * use GetIdentityPoolRolesAsync.
    */
    inline void RegisterGetIdentityPoolRolesOutcomeReceivedHandler(const GetIdentityPoolRolesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetIdentityPoolRolesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetIdentityPoolRoles.
    */
    inline void ClearAllGetIdentityPoolRolesOutcomeReceivedHandlers()
    {
      m_onGetIdentityPoolRolesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetOpenIdTokenAsync to call upon completion to the handler chain. You need to call this to
    * use GetOpenIdTokenAsync.
    */
    inline void RegisterGetOpenIdTokenOutcomeReceivedHandler(const GetOpenIdTokenOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetOpenIdTokenOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetOpenIdToken.
    */
    inline void ClearAllGetOpenIdTokenOutcomeReceivedHandlers()
    {
      m_onGetOpenIdTokenOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetOpenIdTokenForDeveloperIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use GetOpenIdTokenForDeveloperIdentityAsync.
    */
    inline void RegisterGetOpenIdTokenForDeveloperIdentityOutcomeReceivedHandler(const GetOpenIdTokenForDeveloperIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetOpenIdTokenForDeveloperIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetOpenIdTokenForDeveloperIdentity.
    */
    inline void ClearAllGetOpenIdTokenForDeveloperIdentityOutcomeReceivedHandlers()
    {
      m_onGetOpenIdTokenForDeveloperIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListIdentitiesAsync to call upon completion to the handler chain. You need to call this to
    * use ListIdentitiesAsync.
    */
    inline void RegisterListIdentitiesOutcomeReceivedHandler(const ListIdentitiesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListIdentitiesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListIdentities.
    */
    inline void ClearAllListIdentitiesOutcomeReceivedHandlers()
    {
      m_onListIdentitiesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for ListIdentityPoolsAsync to call upon completion to the handler chain. You need to call this to
    * use ListIdentityPoolsAsync.
    */
    inline void RegisterListIdentityPoolsOutcomeReceivedHandler(const ListIdentityPoolsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onListIdentityPoolsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for ListIdentityPools.
    */
    inline void ClearAllListIdentityPoolsOutcomeReceivedHandlers()
    {
      m_onListIdentityPoolsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for LookupDeveloperIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use LookupDeveloperIdentityAsync.
    */
    inline void RegisterLookupDeveloperIdentityOutcomeReceivedHandler(const LookupDeveloperIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onLookupDeveloperIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for LookupDeveloperIdentity.
    */
    inline void ClearAllLookupDeveloperIdentityOutcomeReceivedHandlers()
    {
      m_onLookupDeveloperIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for MergeDeveloperIdentitiesAsync to call upon completion to the handler chain. You need to call this to
    * use MergeDeveloperIdentitiesAsync.
    */
    inline void RegisterMergeDeveloperIdentitiesOutcomeReceivedHandler(const MergeDeveloperIdentitiesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onMergeDeveloperIdentitiesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for MergeDeveloperIdentities.
    */
    inline void ClearAllMergeDeveloperIdentitiesOutcomeReceivedHandlers()
    {
      m_onMergeDeveloperIdentitiesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetIdentityPoolRolesAsync to call upon completion to the handler chain. You need to call this to
    * use SetIdentityPoolRolesAsync.
    */
    inline void RegisterSetIdentityPoolRolesOutcomeReceivedHandler(const SetIdentityPoolRolesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetIdentityPoolRolesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetIdentityPoolRoles.
    */
    inline void ClearAllSetIdentityPoolRolesOutcomeReceivedHandlers()
    {
      m_onSetIdentityPoolRolesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnlinkDeveloperIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use UnlinkDeveloperIdentityAsync.
    */
    inline void RegisterUnlinkDeveloperIdentityOutcomeReceivedHandler(const UnlinkDeveloperIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnlinkDeveloperIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UnlinkDeveloperIdentity.
    */
    inline void ClearAllUnlinkDeveloperIdentityOutcomeReceivedHandlers()
    {
      m_onUnlinkDeveloperIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnlinkIdentityAsync to call upon completion to the handler chain. You need to call this to
    * use UnlinkIdentityAsync.
    */
    inline void RegisterUnlinkIdentityOutcomeReceivedHandler(const UnlinkIdentityOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnlinkIdentityOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UnlinkIdentity.
    */
    inline void ClearAllUnlinkIdentityOutcomeReceivedHandlers()
    {
      m_onUnlinkIdentityOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateIdentityPoolAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateIdentityPoolAsync.
    */
    inline void RegisterUpdateIdentityPoolOutcomeReceivedHandler(const UpdateIdentityPoolOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateIdentityPoolOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateIdentityPool.
    */
    inline void ClearAllUpdateIdentityPoolOutcomeReceivedHandlers()
    {
      m_onUpdateIdentityPoolOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void CreateIdentityPoolAsyncHelper(const Model::CreateIdentityPoolRequest& request) const;
    void DeleteIdentityPoolAsyncHelper(const Model::DeleteIdentityPoolRequest& request) const;
    void DescribeIdentityAsyncHelper(const Model::DescribeIdentityRequest& request) const;
    void DescribeIdentityPoolAsyncHelper(const Model::DescribeIdentityPoolRequest& request) const;
    void GetCredentialsForIdentityAsyncHelper(const Model::GetCredentialsForIdentityRequest& request) const;
    void GetIdAsyncHelper(const Model::GetIdRequest& request) const;
    void GetIdentityPoolRolesAsyncHelper(const Model::GetIdentityPoolRolesRequest& request) const;
    void GetOpenIdTokenAsyncHelper(const Model::GetOpenIdTokenRequest& request) const;
    void GetOpenIdTokenForDeveloperIdentityAsyncHelper(const Model::GetOpenIdTokenForDeveloperIdentityRequest& request) const;
    void ListIdentitiesAsyncHelper(const Model::ListIdentitiesRequest& request) const;
    void ListIdentityPoolsAsyncHelper(const Model::ListIdentityPoolsRequest& request) const;
    void LookupDeveloperIdentityAsyncHelper(const Model::LookupDeveloperIdentityRequest& request) const;
    void MergeDeveloperIdentitiesAsyncHelper(const Model::MergeDeveloperIdentitiesRequest& request) const;
    void SetIdentityPoolRolesAsyncHelper(const Model::SetIdentityPoolRolesRequest& request) const;
    void UnlinkDeveloperIdentityAsyncHelper(const Model::UnlinkDeveloperIdentityRequest& request) const;
    void UnlinkIdentityAsyncHelper(const Model::UnlinkIdentityRequest& request) const;
    void UpdateIdentityPoolAsyncHelper(const Model::UpdateIdentityPoolRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    CreateIdentityPoolOutcomeReceivedEvent m_onCreateIdentityPoolOutcomeReceived;
    DeleteIdentityPoolOutcomeReceivedEvent m_onDeleteIdentityPoolOutcomeReceived;
    DescribeIdentityOutcomeReceivedEvent m_onDescribeIdentityOutcomeReceived;
    DescribeIdentityPoolOutcomeReceivedEvent m_onDescribeIdentityPoolOutcomeReceived;
    GetCredentialsForIdentityOutcomeReceivedEvent m_onGetCredentialsForIdentityOutcomeReceived;
    GetIdOutcomeReceivedEvent m_onGetIdOutcomeReceived;
    GetIdentityPoolRolesOutcomeReceivedEvent m_onGetIdentityPoolRolesOutcomeReceived;
    GetOpenIdTokenOutcomeReceivedEvent m_onGetOpenIdTokenOutcomeReceived;
    GetOpenIdTokenForDeveloperIdentityOutcomeReceivedEvent m_onGetOpenIdTokenForDeveloperIdentityOutcomeReceived;
    ListIdentitiesOutcomeReceivedEvent m_onListIdentitiesOutcomeReceived;
    ListIdentityPoolsOutcomeReceivedEvent m_onListIdentityPoolsOutcomeReceived;
    LookupDeveloperIdentityOutcomeReceivedEvent m_onLookupDeveloperIdentityOutcomeReceived;
    MergeDeveloperIdentitiesOutcomeReceivedEvent m_onMergeDeveloperIdentitiesOutcomeReceived;
    SetIdentityPoolRolesOutcomeReceivedEvent m_onSetIdentityPoolRolesOutcomeReceived;
    UnlinkDeveloperIdentityOutcomeReceivedEvent m_onUnlinkDeveloperIdentityOutcomeReceived;
    UnlinkIdentityOutcomeReceivedEvent m_onUnlinkIdentityOutcomeReceived;
    UpdateIdentityPoolOutcomeReceivedEvent m_onUpdateIdentityPoolOutcomeReceived;
  };

} // namespace CognitoIdentity
} // namespace Aws
