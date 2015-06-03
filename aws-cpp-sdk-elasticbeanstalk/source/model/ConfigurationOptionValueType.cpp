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
#include <aws/elasticbeanstalk/model/ConfigurationOptionValueType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Scalar_HASH = HashingUtils::HashString("Scalar");
static const int List_HASH = HashingUtils::HashString("List");

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
namespace ConfigurationOptionValueTypeMapper
{
ConfigurationOptionValueType GetConfigurationOptionValueTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Scalar_HASH)
  {
    return ConfigurationOptionValueType::Scalar;
  }
  else if (hashCode == List_HASH)
  {
    return ConfigurationOptionValueType::List;
  }

  return ConfigurationOptionValueType::Scalar;
}

Aws::String GetNameForConfigurationOptionValueType(ConfigurationOptionValueType value)
{
  switch(value)
  {
  case ConfigurationOptionValueType::Scalar:
    return "Scalar";
  case ConfigurationOptionValueType::List:
    return "List";
  default:
    return "Scalar";
  }
}

} // namespace ConfigurationOptionValueTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
