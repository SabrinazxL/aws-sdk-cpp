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
#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateOptionGroupRequest::CreateOptionGroupRequest() : 
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateOptionGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateOptionGroup&";
  ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  ss << "EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  ss << "MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  ss << "OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tag.", tagsCount, "");
      tagsCount++;
    }
  }
  ss << "Version=2014-10-31";
  return ss.str();
}

