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
#include <aws/elasticache/model/AZMode.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int single_az_HASH = HashingUtils::HashString("single-az");
static const int cross_az_HASH = HashingUtils::HashString("cross-az");

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
namespace AZModeMapper
{
AZMode GetAZModeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == single_az_HASH)
  {
    return AZMode::single_az;
  }
  else if (hashCode == cross_az_HASH)
  {
    return AZMode::cross_az;
  }

  return AZMode::single_az;
}

Aws::String GetNameForAZMode(AZMode value)
{
  switch(value)
  {
  case AZMode::single_az:
    return "single-az";
  case AZMode::cross_az:
    return "cross-az";
  default:
    return "single_az";
  }
}

} // namespace AZModeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
