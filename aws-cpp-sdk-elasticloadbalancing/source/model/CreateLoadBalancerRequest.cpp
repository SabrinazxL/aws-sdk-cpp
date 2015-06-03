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
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils;

CreateLoadBalancerRequest::CreateLoadBalancerRequest() : 
    m_availabilityZonesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLoadBalancerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateLoadBalancer&";
  ss << "LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  unsigned listenersCount = 1;
  for(auto& item : m_listeners)
  {
    item.OutputToStream(ss, "Listeners.", listenersCount, "");
    listenersCount++;
  }
  if(m_availabilityZonesHasBeenSet)
  {
    unsigned availabilityZonesCount = 1;
    for(auto& item : m_availabilityZones)
    {
      ss << "AvailabilityZones." << availabilityZonesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      availabilityZonesCount++;
    }
  }
  if(m_subnetsHasBeenSet)
  {
    unsigned subnetsCount = 1;
    for(auto& item : m_subnets)
    {
      ss << "Subnets." << subnetsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetsCount++;
    }
  }
  if(m_securityGroupsHasBeenSet)
  {
    unsigned securityGroupsCount = 1;
    for(auto& item : m_securityGroups)
    {
      ss << "SecurityGroups." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }
  if(m_schemeHasBeenSet)
  {
    ss << "Scheme=" << StringUtils::URLEncode(m_scheme.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.", tagsCount, "");
      tagsCount++;
    }
  }
  ss << "Version=2012-06-01";
  return ss.str();
}

