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
#include <aws/elasticache/model/CacheSecurityGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CacheSecurityGroup::CacheSecurityGroup() : 
    m_ownerIdHasBeenSet(false),
    m_cacheSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false)
{
}

CacheSecurityGroup::CacheSecurityGroup(const XmlNode& xmlNode) : 
    m_ownerIdHasBeenSet(false),
    m_cacheSecurityGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eC2SecurityGroupsHasBeenSet(false)
{
  *this = xmlNode;
}

CacheSecurityGroup& CacheSecurityGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ownerIdNode = resultNode.FirstChild("OwnerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = StringUtils::Trim(ownerIdNode.GetText().c_str());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode cacheSecurityGroupNameNode = resultNode.FirstChild("CacheSecurityGroupName");
    if(!cacheSecurityGroupNameNode.IsNull())
    {
      m_cacheSecurityGroupName = StringUtils::Trim(cacheSecurityGroupNameNode.GetText().c_str());
      m_cacheSecurityGroupNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode eC2SecurityGroupNode = resultNode.FirstChild("EC2SecurityGroup");
    if(!eC2SecurityGroupNode.IsNull())
    {
      while(!eC2SecurityGroupNode.IsNull())
      {
        m_eC2SecurityGroups.push_back(eC2SecurityGroupNode);
        eC2SecurityGroupNode = eC2SecurityGroupNode.NextNode("EC2SecurityGroup");
      }

      m_eC2SecurityGroupsHasBeenSet = true;
    }
  }

  return *this;
}

void CacheSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_cacheSecurityGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CacheSecurityGroupName=" << StringUtils::URLEncode(m_cacheSecurityGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_eC2SecurityGroupsHasBeenSet)
  {
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::StringStream eC2SecurityGroupsSs;
        eC2SecurityGroupsSs << location << index << locationValue << ".EC2SecurityGroup";
        item.OutputToStream(oStream, eC2SecurityGroupsSs.str().c_str());
      }
  }
}

void CacheSecurityGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_cacheSecurityGroupNameHasBeenSet)
  {
      oStream << location << ".CacheSecurityGroupName=" << StringUtils::URLEncode(m_cacheSecurityGroupName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_eC2SecurityGroupsHasBeenSet)
  {
      for(auto& item : m_eC2SecurityGroups)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".EC2SecurityGroup";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
