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
#include <aws/autoscaling/model/CreateAutoScalingGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest() : 
    m_launchConfigurationNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_minSize(0),
    m_maxSize(0),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_defaultCooldown(0),
    m_defaultCooldownHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAutoScalingGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateAutoScalingGroup&";
  ss << "AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  if(m_launchConfigurationNameHasBeenSet)
  {
    ss << "LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  ss << "MinSize=" << m_minSize << "&";
  ss << "MaxSize=" << m_maxSize << "&";
  if(m_desiredCapacityHasBeenSet)
  {
    ss << "DesiredCapacity=" << m_desiredCapacity << "&";
  }
  if(m_defaultCooldownHasBeenSet)
  {
    ss << "DefaultCooldown=" << m_defaultCooldown << "&";
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
  if(m_loadBalancerNamesHasBeenSet)
  {
    unsigned loadBalancerNamesCount = 1;
    for(auto& item : m_loadBalancerNames)
    {
      ss << "LoadBalancerNames." << loadBalancerNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      loadBalancerNamesCount++;
    }
  }
  if(m_healthCheckTypeHasBeenSet)
  {
    ss << "HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  }
  if(m_healthCheckGracePeriodHasBeenSet)
  {
    ss << "HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }
  if(m_placementGroupHasBeenSet)
  {
    ss << "PlacementGroup=" << StringUtils::URLEncode(m_placementGroup.c_str()) << "&";
  }
  if(m_vPCZoneIdentifierHasBeenSet)
  {
    ss << "VPCZoneIdentifier=" << StringUtils::URLEncode(m_vPCZoneIdentifier.c_str()) << "&";
  }
  if(m_terminationPoliciesHasBeenSet)
  {
    unsigned terminationPoliciesCount = 1;
    for(auto& item : m_terminationPolicies)
    {
      ss << "TerminationPolicies." << terminationPoliciesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      terminationPoliciesCount++;
    }
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
  ss << "Version=2011-01-01";
  return ss.str();
}

