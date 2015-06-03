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
#include <aws/autoscaling/model/LifecycleState.h>

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
    <p>Describes an EC2 instance.</p>
  */
  class AWS_AUTOSCALING_API Instance
  {
  public:
    Instance();
    Instance(const Aws::Utils::Xml::XmlNode& xmlNode);
    Instance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The ID of the instance.</p>
    */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    /*
     <p>The ID of the instance.</p>
    */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /*
     <p>The ID of the instance.</p>
    */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /*
     <p>The ID of the instance.</p>
    */
    inline Instance&  WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /*
     <p>The ID of the instance.</p>
    */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /*
     <p>The Availability Zone associated with this instance.</p>
    */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    /*
     <p>The Availability Zone associated with this instance.</p>
    */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZone = value; }

    /*
     <p>The Availability Zone associated with this instance.</p>
    */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZone.assign(value); }

    /*
     <p>The Availability Zone associated with this instance.</p>
    */
    inline Instance&  WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p>The Availability Zone associated with this instance.</p>
    */
    inline Instance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /*
     <p>A description of the current lifecycle state.</p> <note> <p>The <code>Quarantined</code> lifecycle state is not used.</p> </note>
    */
    inline const LifecycleState& GetLifecycleState() const{ return m_lifecycleState; }
    /*
     <p>A description of the current lifecycle state.</p> <note> <p>The <code>Quarantined</code> lifecycle state is not used.</p> </note>
    */
    inline void SetLifecycleState(const LifecycleState& value) { m_lifecycleState = value; }

    /*
     <p>A description of the current lifecycle state.</p> <note> <p>The <code>Quarantined</code> lifecycle state is not used.</p> </note>
    */
    inline Instance&  WithLifecycleState(const LifecycleState& value) { SetLifecycleState(value); return *this;}

    /*
     <p>The health status of the instance.</p>
    */
    inline const Aws::String& GetHealthStatus() const{ return m_healthStatus; }
    /*
     <p>The health status of the instance.</p>
    */
    inline void SetHealthStatus(const Aws::String& value) { m_healthStatus = value; }

    /*
     <p>The health status of the instance.</p>
    */
    inline void SetHealthStatus(const char* value) { m_healthStatus.assign(value); }

    /*
     <p>The health status of the instance.</p>
    */
    inline Instance&  WithHealthStatus(const Aws::String& value) { SetHealthStatus(value); return *this;}

    /*
     <p>The health status of the instance.</p>
    */
    inline Instance& WithHealthStatus(const char* value) { SetHealthStatus(value); return *this;}

    /*
     <p>The launch configuration associated with the instance.</p>
    */
    inline const Aws::String& GetLaunchConfigurationName() const{ return m_launchConfigurationName; }
    /*
     <p>The launch configuration associated with the instance.</p>
    */
    inline void SetLaunchConfigurationName(const Aws::String& value) { m_launchConfigurationName = value; }

    /*
     <p>The launch configuration associated with the instance.</p>
    */
    inline void SetLaunchConfigurationName(const char* value) { m_launchConfigurationName.assign(value); }

    /*
     <p>The launch configuration associated with the instance.</p>
    */
    inline Instance&  WithLaunchConfigurationName(const Aws::String& value) { SetLaunchConfigurationName(value); return *this;}

    /*
     <p>The launch configuration associated with the instance.</p>
    */
    inline Instance& WithLaunchConfigurationName(const char* value) { SetLaunchConfigurationName(value); return *this;}

  private:
    Aws::String m_instanceId;
    Aws::String m_availabilityZone;
    LifecycleState m_lifecycleState;
    Aws::String m_healthStatus;
    Aws::String m_launchConfigurationName;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
