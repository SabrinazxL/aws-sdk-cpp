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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ClusterStateChangeReasonCode
  {
    INTERNAL_ERROR,
    VALIDATION_ERROR,
    INSTANCE_FAILURE,
    BOOTSTRAP_FAILURE,
    USER_REQUEST,
    STEP_FAILURE,
    ALL_STEPS_COMPLETED
  };

namespace ClusterStateChangeReasonCodeMapper
{
AWS_EMR_API ClusterStateChangeReasonCode GetClusterStateChangeReasonCodeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForClusterStateChangeReasonCode(ClusterStateChangeReasonCode value);
} // namespace ClusterStateChangeReasonCodeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
