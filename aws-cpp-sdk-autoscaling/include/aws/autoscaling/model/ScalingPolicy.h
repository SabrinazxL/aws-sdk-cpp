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
#include <aws/autoscaling/model/StepAdjustment.h>
#include <aws/autoscaling/model/Alarm.h>

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
    <p>Describes a scaling policy.</p>
  */
  class AWS_AUTOSCALING_API ScalingPolicy
  {
  public:
    ScalingPolicy();
    ScalingPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScalingPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The name of the Auto Scaling group associated with this scaling policy.</p>
    */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    /*
     <p>The name of the Auto Scaling group associated with this scaling policy.</p>
    */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /*
     <p>The name of the Auto Scaling group associated with this scaling policy.</p>
    */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /*
     <p>The name of the Auto Scaling group associated with this scaling policy.</p>
    */
    inline ScalingPolicy&  WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the Auto Scaling group associated with this scaling policy.</p>
    */
    inline ScalingPolicy& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /*
     <p>The name of the scaling policy.</p>
    */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    /*
     <p>The name of the scaling policy.</p>
    */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /*
     <p>The name of the scaling policy.</p>
    */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /*
     <p>The name of the scaling policy.</p>
    */
    inline ScalingPolicy&  WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /*
     <p>The name of the scaling policy.</p>
    */
    inline ScalingPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the policy.</p>
    */
    inline const Aws::String& GetPolicyARN() const{ return m_policyARN; }
    /*
     <p>The Amazon Resource Name (ARN) of the policy.</p>
    */
    inline void SetPolicyARN(const Aws::String& value) { m_policyARNHasBeenSet = true; m_policyARN = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the policy.</p>
    */
    inline void SetPolicyARN(const char* value) { m_policyARNHasBeenSet = true; m_policyARN.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the policy.</p>
    */
    inline ScalingPolicy&  WithPolicyARN(const Aws::String& value) { SetPolicyARN(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the policy.</p>
    */
    inline ScalingPolicy& WithPolicyARN(const char* value) { SetPolicyARN(value); return *this;}

    
    inline const Aws::String& GetPolicyType() const{ return m_policyType; }
    
    inline void SetPolicyType(const Aws::String& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    
    inline void SetPolicyType(const char* value) { m_policyTypeHasBeenSet = true; m_policyType.assign(value); }

    
    inline ScalingPolicy&  WithPolicyType(const Aws::String& value) { SetPolicyType(value); return *this;}

    
    inline ScalingPolicy& WithPolicyType(const char* value) { SetPolicyType(value); return *this;}

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
    */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }
    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
    */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
    */
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
    */
    inline ScalingPolicy&  WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /*
     <p>Specifies whether the <code>ScalingAdjustment</code> is an absolute number or a percentage of the current capacity. Valid values are <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and <code>PercentChangeInCapacity</code>.</p>
    */
    inline ScalingPolicy& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}

    /*
     <p>Changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the specified number of instances.</p>
    */
    inline long GetMinAdjustmentStep() const{ return m_minAdjustmentStep; }
    /*
     <p>Changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the specified number of instances.</p>
    */
    inline void SetMinAdjustmentStep(long value) { m_minAdjustmentStepHasBeenSet = true; m_minAdjustmentStep = value; }

    /*
     <p>Changes the <code>DesiredCapacity</code> of the Auto Scaling group by at least the specified number of instances.</p>
    */
    inline ScalingPolicy&  WithMinAdjustmentStep(long value) { SetMinAdjustmentStep(value); return *this;}

    
    inline long GetMinAdjustmentMagnitude() const{ return m_minAdjustmentMagnitude; }
    
    inline void SetMinAdjustmentMagnitude(long value) { m_minAdjustmentMagnitudeHasBeenSet = true; m_minAdjustmentMagnitude = value; }

    
    inline ScalingPolicy&  WithMinAdjustmentMagnitude(long value) { SetMinAdjustmentMagnitude(value); return *this;}

    /*
     <p>The number associated with the specified adjustment type. A positive value adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline long GetScalingAdjustment() const{ return m_scalingAdjustment; }
    /*
     <p>The number associated with the specified adjustment type. A positive value adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline void SetScalingAdjustment(long value) { m_scalingAdjustmentHasBeenSet = true; m_scalingAdjustment = value; }

    /*
     <p>The number associated with the specified adjustment type. A positive value adds to the current capacity and a negative value removes from the current capacity.</p>
    */
    inline ScalingPolicy&  WithScalingAdjustment(long value) { SetScalingAdjustment(value); return *this;}

    /*
     <p>The amount of time, in seconds, after a scaling activity completes before any further trigger-related scaling activities can start.</p>
    */
    inline long GetCooldown() const{ return m_cooldown; }
    /*
     <p>The amount of time, in seconds, after a scaling activity completes before any further trigger-related scaling activities can start.</p>
    */
    inline void SetCooldown(long value) { m_cooldownHasBeenSet = true; m_cooldown = value; }

    /*
     <p>The amount of time, in seconds, after a scaling activity completes before any further trigger-related scaling activities can start.</p>
    */
    inline ScalingPolicy&  WithCooldown(long value) { SetCooldown(value); return *this;}

    
    inline const Aws::Vector<StepAdjustment>& GetStepAdjustments() const{ return m_stepAdjustments; }
    
    inline void SetStepAdjustments(const Aws::Vector<StepAdjustment>& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments = value; }

    
    inline ScalingPolicy&  WithStepAdjustments(const Aws::Vector<StepAdjustment>& value) { SetStepAdjustments(value); return *this;}

    
    inline ScalingPolicy& AddStepAdjustments(const StepAdjustment& value) { m_stepAdjustmentsHasBeenSet = true; m_stepAdjustments.push_back(value); return *this; }

    
    inline const Aws::String& GetMetricAggregationType() const{ return m_metricAggregationType; }
    
    inline void SetMetricAggregationType(const Aws::String& value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType = value; }

    
    inline void SetMetricAggregationType(const char* value) { m_metricAggregationTypeHasBeenSet = true; m_metricAggregationType.assign(value); }

    
    inline ScalingPolicy&  WithMetricAggregationType(const Aws::String& value) { SetMetricAggregationType(value); return *this;}

    
    inline ScalingPolicy& WithMetricAggregationType(const char* value) { SetMetricAggregationType(value); return *this;}

    
    inline long GetEstimatedInstanceWarmup() const{ return m_estimatedInstanceWarmup; }
    
    inline void SetEstimatedInstanceWarmup(long value) { m_estimatedInstanceWarmupHasBeenSet = true; m_estimatedInstanceWarmup = value; }

    
    inline ScalingPolicy&  WithEstimatedInstanceWarmup(long value) { SetEstimatedInstanceWarmup(value); return *this;}

    /*
     <p>The CloudWatch Alarms related to the policy.</p>
    */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }
    /*
     <p>The CloudWatch Alarms related to the policy.</p>
    */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /*
     <p>The CloudWatch Alarms related to the policy.</p>
    */
    inline ScalingPolicy&  WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /*
     <p>The CloudWatch Alarms related to the policy.</p>
    */
    inline ScalingPolicy& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet;
    Aws::String m_policyType;
    bool m_policyTypeHasBeenSet;
    Aws::String m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet;
    long m_minAdjustmentStep;
    bool m_minAdjustmentStepHasBeenSet;
    long m_minAdjustmentMagnitude;
    bool m_minAdjustmentMagnitudeHasBeenSet;
    long m_scalingAdjustment;
    bool m_scalingAdjustmentHasBeenSet;
    long m_cooldown;
    bool m_cooldownHasBeenSet;
    Aws::Vector<StepAdjustment> m_stepAdjustments;
    bool m_stepAdjustmentsHasBeenSet;
    Aws::String m_metricAggregationType;
    bool m_metricAggregationTypeHasBeenSet;
    long m_estimatedInstanceWarmup;
    bool m_estimatedInstanceWarmupHasBeenSet;
    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
