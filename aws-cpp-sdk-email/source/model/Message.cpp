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
#include <aws/email/model/Message.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Message::Message()
{
}

Message::Message(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Message& Message::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    m_subject = subjectNode;
    XmlNode bodyNode = resultNode.FirstChild("Body");
    m_body = bodyNode;
  }

  return *this;
}

void Message::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  Aws::StringStream subjectLocationAndMemberSs;
  subjectLocationAndMemberSs << location << index << locationValue << ".Subject";
  m_subject.OutputToStream(oStream, subjectLocationAndMemberSs.str().c_str());
  Aws::StringStream bodyLocationAndMemberSs;
  bodyLocationAndMemberSs << location << index << locationValue << ".Body";
  m_body.OutputToStream(oStream, bodyLocationAndMemberSs.str().c_str());
}

void Message::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  Aws::String subjectLocationAndMember(location);
  subjectLocationAndMember += ".Subject";
  m_subject.OutputToStream(oStream, subjectLocationAndMember.c_str());
  Aws::String bodyLocationAndMember(location);
  bodyLocationAndMember += ".Body";
  m_body.OutputToStream(oStream, bodyLocationAndMember.c_str());
}
