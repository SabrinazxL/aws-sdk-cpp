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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{
  enum class EC2TagFilterType
  {
    KEY_ONLY,
    VALUE_ONLY,
    KEY_AND_VALUE
  };

namespace EC2TagFilterTypeMapper
{
AWS_CODEDEPLOY_API EC2TagFilterType GetEC2TagFilterTypeForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForEC2TagFilterType(EC2TagFilterType value);
} // namespace EC2TagFilterTypeMapper
} // namespace Model
} // namespace codedeploy
} // namespace Aws
