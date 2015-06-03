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
#include <aws/rds/model/EngineDefaults.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

EngineDefaults::EngineDefaults() : 
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

EngineDefaults::EngineDefaults(const XmlNode& xmlNode) : 
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = xmlNode;
}

EngineDefaults& EngineDefaults::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = StringUtils::Trim(dBParameterGroupFamilyNode.GetText().c_str());
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
      m_markerHasBeenSet = true;
    }
    XmlNode parameterNode = resultNode.FirstChild("Parameter");
    if(!parameterNode.IsNull())
    {
      while(!parameterNode.IsNull())
      {
        m_parameters.push_back(parameterNode);
        parameterNode = parameterNode.NextNode("Parameter");
      }

      m_parametersHasBeenSet = true;
    }
  }

  return *this;
}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_markerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameter";
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
}

void EngineDefaults::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_markerHasBeenSet)
  {
      oStream << location << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      for(auto& item : m_parameters)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Parameter";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
