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
#include <aws/opsworks/model/VirtualizationType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int paravirtual_HASH = HashingUtils::HashString("paravirtual");
static const int hvm_HASH = HashingUtils::HashString("hvm");

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
namespace VirtualizationTypeMapper
{
VirtualizationType GetVirtualizationTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == paravirtual_HASH)
  {
    return VirtualizationType::paravirtual;
  }
  else if (hashCode == hvm_HASH)
  {
    return VirtualizationType::hvm;
  }

  return VirtualizationType::paravirtual;
}

Aws::String GetNameForVirtualizationType(VirtualizationType value)
{
  switch(value)
  {
  case VirtualizationType::paravirtual:
    return "paravirtual";
  case VirtualizationType::hvm:
    return "hvm";
  default:
    return "paravirtual";
  }
}

} // namespace VirtualizationTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
