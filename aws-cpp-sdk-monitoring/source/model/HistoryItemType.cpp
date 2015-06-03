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
#include <aws/monitoring/model/HistoryItemType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ConfigurationUpdate_HASH = HashingUtils::HashString("ConfigurationUpdate");
static const int StateUpdate_HASH = HashingUtils::HashString("StateUpdate");
static const int Action_HASH = HashingUtils::HashString("Action");

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
namespace HistoryItemTypeMapper
{
HistoryItemType GetHistoryItemTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ConfigurationUpdate_HASH)
  {
    return HistoryItemType::ConfigurationUpdate;
  }
  else if (hashCode == StateUpdate_HASH)
  {
    return HistoryItemType::StateUpdate;
  }
  else if (hashCode == Action_HASH)
  {
    return HistoryItemType::Action;
  }

  return HistoryItemType::ConfigurationUpdate;
}

Aws::String GetNameForHistoryItemType(HistoryItemType value)
{
  switch(value)
  {
  case HistoryItemType::ConfigurationUpdate:
    return "ConfigurationUpdate";
  case HistoryItemType::StateUpdate:
    return "StateUpdate";
  case HistoryItemType::Action:
    return "Action";
  default:
    return "ConfigurationUpdate";
  }
}

} // namespace HistoryItemTypeMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
