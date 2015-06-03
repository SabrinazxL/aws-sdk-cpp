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
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

CreatePlatformApplicationRequest::CreatePlatformApplicationRequest()
{
}

Aws::String CreatePlatformApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreatePlatformApplication&";
  ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  ss << "Platform=" << StringUtils::URLEncode(m_platform.c_str()) << "&";
  unsigned attributesCount = 1;
  for(auto& item : m_attributes)
  {
    ss << "${member.value.locationName}." << attributesCount << ".${member.value.shape.mapKey.locationName}="
        << StringUtils::URLEncode(item.first.c_str()) << "&";
    ss << "${member.value.locationName}." << attributesCount << ".${member.value.shape.mapValue.locationName}="
        << StringUtils::URLEncode(item.second.c_str()) << "&";
    attributesCount++;
  }
  ss << "Version=2010-03-31";
  return ss.str();
}

