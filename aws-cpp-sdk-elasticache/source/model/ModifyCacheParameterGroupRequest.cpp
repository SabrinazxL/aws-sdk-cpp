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
#include <aws/elasticache/model/ModifyCacheParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest()
{
}

Aws::String ModifyCacheParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCacheParameterGroup&";
  ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  unsigned parameterNameValuesCount = 1;
  for(auto& item : m_parameterNameValues)
  {
    item.OutputToStream(ss, "ParameterNameValue.", parameterNameValuesCount, "");
    parameterNameValuesCount++;
  }
  ss << "Version=2015-02-02";
  return ss.str();
}

