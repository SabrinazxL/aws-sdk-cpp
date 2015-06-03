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
#include <aws/rds/model/CreateDBSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBSubnetGroupRequest::CreateDBSubnetGroupRequest() : 
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBSubnetGroup&";
  ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  ss << "DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  unsigned subnetIdsCount = 1;
  for(auto& item : m_subnetIds)
  {
    ss << "SubnetIdentifier." << subnetIdsCount << "="
        << StringUtils::URLEncode(item.c_str()) << "&";
    subnetIdsCount++;
  }
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

