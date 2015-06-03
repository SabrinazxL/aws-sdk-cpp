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
#include <aws/monitoring/model/Dimension.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Dimension::Dimension()
{
}

Dimension::Dimension(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Dimension& Dimension::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    m_name = StringUtils::Trim(nameNode.GetText().c_str());
    XmlNode valueNode = resultNode.FirstChild("Value");
    m_value = StringUtils::Trim(valueNode.GetText().c_str());
  }

  return *this;
}

void Dimension::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
}

void Dimension::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
}
