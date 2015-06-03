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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/Instance.h>
#include <aws/autoscaling/model/SuspendedProcess.h>
#include <aws/autoscaling/model/EnabledMetric.h>
#include <aws/autoscaling/model/TagDescription.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  /*
    <p>Describes an Auto Scaling group.</p>
  */
  class AWS_AUTOSCALING_API AutoScalingGroup
  {
  public:
    AutoScalingGroup();
    AutoScalingGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AutoScalingGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The name of the group.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name of the group.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupName = value; }

    /*
     <p>The name of the group.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the group.</p>
    */
    inline AutoScalingGroup&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the group.</p>
    */
    inline AutoScalingGroup& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the group.</p>
    */
    inline const Aws::String& GetAutoScalingGroupARN() const{ return m_autoScalingGroupARN; }
    /*
     <p>The Amazon Resource Name (ARN) of the group.</p>
    */
    inline void SetAutoScalingGroupARN(const Aws::String& value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the group.</p>
    */
    inline void SetAutoScalingGroupARN(const char* value) { m_autoScalingGroupARNHasBeenSet = true; m_autoScalingGroupARN.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the group.</p>
    */
    inline AutoScalingGroup&  WithAutoScalingGroupARN(const Aws::String& value) { SetAutoScalingGroupARN(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the group.</p>
    */
    inline AutoScalingGroup& WithAutoScalingGroupARN(const char* value) { SetAutoScalingGroupARN(value); return *this;}

    /*
     <p>The name of the associated launch configuration.</p>
    */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    /*
     <p>The name of the associated launch configuration.</p>
    */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationName = value; }

    /*
     <p>The name of the associated launch configuration.</p>
    */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationName.assign(value); }

    /*
     <p>The name of the associated launch configuration.</p>
    */
    inline AutoScalingGroup&  WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The name of the associated launch configuration.</p>
    */
    inline AutoScalingGroup& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The minimum size of the group.</p>
    */
    inline long GetMinSize() const{ return m_minSize; }
    /*
     <p>The minimum size of the group.</p>
    */
    inline void SetMinSize(long value) { m_minSize = value; }

    /*
     <p>The minimum size of the group.</p>
    */
    inline AutoScalingGroup&  WithMinSize(long value) { SetMinSize(value); return *this;}

    /*
     <p>The maximum size of the group.</p>
    */
    inline long GetMaxSize() const{ return m_maxSize; }
    /*
     <p>The maximum size of the group.</p>
    */
    inline void SetMaxSize(long value) { m_maxSize = value; }

    /*
     <p>The maximum size of the group.</p>
    */
    inline AutoScalingGroup&  WithMaxSize(long value) { SetMaxSize(value); return *this;}

    /*
     <p>The size of the group.</p>
    */
    inline long GetDesiredCapacity() const{ return m_desiredCapacity; }
    /*
     <p>The size of the group.</p>
    */
    inline void SetDesiredCapacity(long value) { m_desiredCapacity = value; }

    /*
     <p>The size of the group.</p>
    */
    inline AutoScalingGroup&  WithDesiredCapacity(long value) { SetDesiredCapacity(value); return *this;}

    /*
     <p>The number of seconds after a scaling activity completes before any further scaling activities can start.</p>
    */
    inline long GetDefaultCooldown() const{ return m_defaultCooldown; }
    /*
     <p>The number of seconds after a scaling activity completes before any further scaling activities can start.</p>
    */
    inline void SetDefaultCooldown(long value) { m_defaultCooldown = value; }

    /*
     <p>The number of seconds after a scaling activity completes before any further scaling activities can start.</p>
    */
    inline AutoScalingGroup&  WithDefaultCooldown(long value) { SetDefaultCooldown(value); return *this;}

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZones = value; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline AutoScalingGroup&  WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline AutoScalingGroup& AddAvailabilityZones(const Aws::String& value) { m_availabilityZones.push_back(value); return *this; }

    /*
     <p>One or more Availability Zones for the group.</p>
    */
    inline AutoScalingGroup& AddAvailabilityZones(const char* value) { m_availabilityZones.push_back(value); return *this; }

    /*
     <p>One or more load balancers associated with the group.</p>
    */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerNames() const{ return m_loadBalancerNames; }
    /*
     <p>One or more load balancers associated with the group.</p>
    */
    inline void SetLoadBalancerNames(const Aws::Vector<Aws::String>& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames = value; }

    /*
     <p>One or more load balancers associated with the group.</p>
    */
    inline AutoScalingGroup&  WithLoadBalancerNames(const Aws::Vector<Aws::String>& value) { SetLoadBalancerNames(value); return *this;}

    /*
     <p>One or more load balancers associated with the group.</p>
    */
    inline AutoScalingGroup& AddLoadBalancerNames(const Aws::String& value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /*
     <p>One or more load balancers associated with the group.</p>
    */
    inline AutoScalingGroup& AddLoadBalancerNames(const char* value) { m_loadBalancerNamesHasBeenSet = true; m_loadBalancerNames.push_back(value); return *this; }

    /*
     <p>The service of interest for the health status check, which can be either <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing.</p>
    */
    inline const Aws::String& GetHealthCheckType() const{ return m_healthCheckType; }
    /*
     <p>The service of interest for the health status check, which can be either <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing.</p>
    */
    inline void SetHealthCheckType(const Aws::String& value) { m_healthCheckType = value; }

    /*
     <p>The service of interest for the health status check, which can be either <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing.</p>
    */
    inline void SetHealthCheckType(const char* value) { m_healthCheckType.assign(value); }

    /*
     <p>The service of interest for the health status check, which can be either <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing.</p>
    */
    inline AutoScalingGroup&  WithHealthCheckType(const Aws::String& value) { SetHealthCheckType(value); return *this;}

    /*
     <p>The service of interest for the health status check, which can be either <code>EC2</code> for Amazon EC2 or <code>ELB</code> for Elastic Load Balancing.</p>
    */
    inline AutoScalingGroup& WithHealthCheckType(const char* value) { SetHealthCheckType(value); return *this;}

    /*
     <p>The amount of time that Auto Scaling waits before checking an instance's health status. The grace period begins when an instance comes into service.</p>
    */
    inline long GetHealthCheckGracePeriod() const{ return m_healthCheckGracePeriod; }
    /*
     <p>The amount of time that Auto Scaling waits before checking an instance's health status. The grace period begins when an instance comes into service.</p>
    */
    inline void SetHealthCheckGracePeriod(long value) { m_healthCheckGracePeriodHasBeenSet = true; m_healthCheckGracePeriod = value; }

    /*
     <p>The amount of time that Auto Scaling waits before checking an instance's health status. The grace period begins when an instance comes into service.</p>
    */
    inline AutoScalingGroup&  WithHealthCheckGracePeriod(long value) { SetHealthCheckGracePeriod(value); return *this;}

    /*
     <p>The EC2 instances associated with the group.</p>
    */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    /*
     <p>The EC2 instances associated with the group.</p>
    */
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /*
     <p>The EC2 instances associated with the group.</p>
    */
    inline AutoScalingGroup&  WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}

    /*
     <p>The EC2 instances associated with the group.</p>
    */
    inline AutoScalingGroup& AddInstances(const Instance& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }

    /*
     <p>The date and time the group was created.</p>
    */
    inline double GetCreatedTime() const{ return m_createdTime; }
    /*
     <p>The date and time the group was created.</p>
    */
    inline void SetCreatedTime(double value) { m_createdTime = value; }

    /*
     <p>The date and time the group was created.</p>
    */
    inline AutoScalingGroup&  WithCreatedTime(double value) { SetCreatedTime(value); return *this;}

    /*
     <p>The suspended processes associated with the group.</p>
    */
    inline const Aws::Vector<SuspendedProcess>& GetSuspendedProcesses() const{ return m_suspendedProcesses; }
    /*
     <p>The suspended processes associated with the group.</p>
    */
    inline void SetSuspendedProcesses(const Aws::Vector<SuspendedProcess>& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses = value; }

    /*
     <p>The suspended processes associated with the group.</p>
    */
    inline AutoScalingGroup&  WithSuspendedProcesses(const Aws::Vector<SuspendedProcess>& value) { SetSuspendedProcesses(value); return *this;}

    /*
     <p>The suspended processes associated with the group.</p>
    */
    inline AutoScalingGroup& AddSuspendedProcesses(const SuspendedProcess& value) { m_suspendedProcessesHasBeenSet = true; m_suspendedProcesses.push_back(value); return *this; }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }
    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline AutoScalingGroup&  WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /*
     <p>The name of the placement group into which you'll launch your instances, if any. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement Groups</a>.</p>
    */
    inline AutoScalingGroup& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}

    /*
     <p>One or more subnet IDs, if applicable, separated by commas.</p> <p>If you specify <code>VPCZoneIdentifier</code> and <code>AvailabilityZones</code>, ensure that the Availability Zones of the subnets match the values for <code>AvailabilityZones</code>.</p>
    */
    inline const Aws::String& GetVPCZoneIdentifier() const{ return m_vPCZoneIdentifier; }
    /*
     <p>One or more subnet IDs, if applicable, separated by commas.</p> <p>If you specify <code>VPCZoneIdentifier</code> and <code>AvailabilityZones</code>, ensure that the Availability Zones of the subnets match the values for <code>AvailabilityZones</code>.</p>
    */
    inline void SetVPCZoneIdentifier(const Aws::String& value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier = value; }

    /*
     <p>One or more subnet IDs, if applicable, separated by commas.</p> <p>If you specify <code>VPCZoneIdentifier</code> and <code>AvailabilityZones</code>, ensure that the Availability Zones of the subnets match the values for <code>AvailabilityZones</code>.</p>
    */
    inline void SetVPCZoneIdentifier(const char* value) { m_vPCZoneIdentifierHasBeenSet = true; m_vPCZoneIdentifier.assign(value); }

    /*
     <p>One or more subnet IDs, if applicable, separated by commas.</p> <p>If you specify <code>VPCZoneIdentifier</code> and <code>AvailabilityZones</code>, ensure that the Availability Zones of the subnets match the values for <code>AvailabilityZones</code>.</p>
    */
    inline AutoScalingGroup&  WithVPCZoneIdentifier(const Aws::String& value) { SetVPCZoneIdentifier(value); return *this;}

    /*
     <p>One or more subnet IDs, if applicable, separated by commas.</p> <p>If you specify <code>VPCZoneIdentifier</code> and <code>AvailabilityZones</code>, ensure that the Availability Zones of the subnets match the values for <code>AvailabilityZones</code>.</p>
    */
    inline AutoScalingGroup& WithVPCZoneIdentifier(const char* value) { SetVPCZoneIdentifier(value); return *this;}

    /*
     <p>The metrics enabled for this Auto Scaling group.</p>
    */
    inline const Aws::Vector<EnabledMetric>& GetEnabledMetrics() const{ return m_enabledMetrics; }
    /*
     <p>The metrics enabled for this Auto Scaling group.</p>
    */
    inline void SetEnabledMetrics(const Aws::Vector<EnabledMetric>& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics = value; }

    /*
     <p>The metrics enabled for this Auto Scaling group.</p>
    */
    inline AutoScalingGroup&  WithEnabledMetrics(const Aws::Vector<EnabledMetric>& value) { SetEnabledMetrics(value); return *this;}

    /*
     <p>The metrics enabled for this Auto Scaling group.</p>
    */
    inline AutoScalingGroup& AddEnabledMetrics(const EnabledMetric& value) { m_enabledMetricsHasBeenSet = true; m_enabledMetrics.push_back(value); return *this; }

    /*
     <p>The current state of the Auto Scaling group when a <a>DeleteAutoScalingGroup</a> action is in progress.</p>
    */
    inline const Aws::String& GetStatus() const{ return m_status; }
    /*
     <p>The current state of the Auto Scaling group when a <a>DeleteAutoScalingGroup</a> action is in progress.</p>
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p>The current state of the Auto Scaling group when a <a>DeleteAutoScalingGroup</a> action is in progress.</p>
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     <p>The current state of the Auto Scaling group when a <a>DeleteAutoScalingGroup</a> action is in progress.</p>
    */
    inline AutoScalingGroup&  WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     <p>The current state of the Auto Scaling group when a <a>DeleteAutoScalingGroup</a> action is in progress.</p>
    */
    inline AutoScalingGroup& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     <p>The tags for the Auto Scaling group.</p>
    */
    inline const Aws::Vector<TagDescription>& GetTags() const{ return m_tags; }
    /*
     <p>The tags for the Auto Scaling group.</p>
    */
    inline void SetTags(const Aws::Vector<TagDescription>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>The tags for the Auto Scaling group.</p>
    */
    inline AutoScalingGroup&  WithTags(const Aws::Vector<TagDescription>& value) { SetTags(value); return *this;}

    /*
     <p>The tags for the Auto Scaling group.</p>
    */
    inline AutoScalingGroup& AddTags(const TagDescription& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /*
     <p>The termination policies for this Auto Scaling group.</p>
    */
    inline const Aws::Vector<Aws::String>& GetTerminationPolicies() const{ return m_terminationPolicies; }
    /*
     <p>The termination policies for this Auto Scaling group.</p>
    */
    inline void SetTerminationPolicies(const Aws::Vector<Aws::String>& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies = value; }

    /*
     <p>The termination policies for this Auto Scaling group.</p>
    */
    inline AutoScalingGroup&  WithTerminationPolicies(const Aws::Vector<Aws::String>& value) { SetTerminationPolicies(value); return *this;}

    /*
     <p>The termination policies for this Auto Scaling group.</p>
    */
    inline AutoScalingGroup& AddTerminationPolicies(const Aws::String& value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

    /*
     <p>The termination policies for this Auto Scaling group.</p>
    */
    inline AutoScalingGroup& AddTerminationPolicies(const char* value) { m_terminationPoliciesHasBeenSet = true; m_terminationPolicies.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    Aws::String m_autoScalingGroupARN;
    bool m_autoScalingGroupARNHasBeenSet;
    Aws::String m_launchConfigurationName;
    long m_minSize;
    long m_maxSize;
    long m_desiredCapacity;
    long m_defaultCooldown;
    Aws::Vector<Aws::String> m_availabilityZones;
    Aws::Vector<Aws::String> m_loadBalancerNames;
    bool m_loadBalancerNamesHasBeenSet;
    Aws::String m_healthCheckType;
    long m_healthCheckGracePeriod;
    bool m_healthCheckGracePeriodHasBeenSet;
    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet;
    double m_createdTime;
    Aws::Vector<SuspendedProcess> m_suspendedProcesses;
    bool m_suspendedProcessesHasBeenSet;
    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet;
    Aws::String m_vPCZoneIdentifier;
    bool m_vPCZoneIdentifierHasBeenSet;
    Aws::Vector<EnabledMetric> m_enabledMetrics;
    bool m_enabledMetricsHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<TagDescription> m_tags;
    bool m_tagsHasBeenSet;
    Aws::Vector<Aws::String> m_terminationPolicies;
    bool m_terminationPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
