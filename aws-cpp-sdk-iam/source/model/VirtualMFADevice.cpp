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
#include <aws/iam/model/VirtualMFADevice.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

VirtualMFADevice::VirtualMFADevice() : 
    m_base32StringSeedHasBeenSet(false),
    m_qRCodePNGHasBeenSet(false),
    m_userHasBeenSet(false),
    m_enableDate(0.0),
    m_enableDateHasBeenSet(false)
{
}

VirtualMFADevice::VirtualMFADevice(const XmlNode& xmlNode) : 
    m_base32StringSeedHasBeenSet(false),
    m_qRCodePNGHasBeenSet(false),
    m_userHasBeenSet(false),
    m_enableDate(0.0),
    m_enableDateHasBeenSet(false)
{
  *this = xmlNode;
}

VirtualMFADevice& VirtualMFADevice::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serialNumberNode = resultNode.FirstChild("SerialNumber");
    m_serialNumber = StringUtils::Trim(serialNumberNode.GetText().c_str());
    XmlNode base32StringSeedNode = resultNode.FirstChild("Base32StringSeed");
    if(!base32StringSeedNode.IsNull())
    {
      m_base32StringSeed = HashingUtils::Base64Decode(StringUtils::Trim(base32StringSeedNode.GetText().c_str()));
      m_base32StringSeedHasBeenSet = true;
    }
    XmlNode qRCodePNGNode = resultNode.FirstChild("QRCodePNG");
    if(!qRCodePNGNode.IsNull())
    {
      m_qRCodePNG = HashingUtils::Base64Decode(StringUtils::Trim(qRCodePNGNode.GetText().c_str()));
      m_qRCodePNGHasBeenSet = true;
    }
    XmlNode userNode = resultNode.FirstChild("User");
    if(!userNode.IsNull())
    {
      m_user = userNode;
      m_userHasBeenSet = true;
    }
    XmlNode enableDateNode = resultNode.FirstChild("EnableDate");
    if(!enableDateNode.IsNull())
    {
      m_enableDate = StringUtils::ConvertToDouble(StringUtils::Trim(enableDateNode.GetText().c_str()).c_str());
      m_enableDateHasBeenSet = true;
    }
  }

  return *this;
}

void VirtualMFADevice::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  if(m_base32StringSeedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Base32StringSeed=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_base32StringSeed).c_str()) << "&";
  }
  if(m_qRCodePNGHasBeenSet)
  {
      oStream << location << index << locationValue << ".QRCodePNG=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_qRCodePNG).c_str()) << "&";
  }
  if(m_userHasBeenSet)
  {
      Aws::StringStream userLocationAndMemberSs;
      userLocationAndMemberSs << location << index << locationValue << ".User";
      m_user.OutputToStream(oStream, userLocationAndMemberSs.str().c_str());
  }
  if(m_enableDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnableDate=" << m_enableDate << "&";
  }
}

void VirtualMFADevice::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".SerialNumber=" << StringUtils::URLEncode(m_serialNumber.c_str()) << "&";
  if(m_base32StringSeedHasBeenSet)
  {
      oStream << location << ".Base32StringSeed=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_base32StringSeed).c_str()) << "&";
  }
  if(m_qRCodePNGHasBeenSet)
  {
      oStream << location << ".QRCodePNG=" << StringUtils::URLEncode(HashingUtils::Base64Encode(m_qRCodePNG).c_str()) << "&";
  }
  if(m_userHasBeenSet)
  {
      Aws::String userLocationAndMember(location);
      userLocationAndMember += ".User";
      m_user.OutputToStream(oStream, userLocationAndMember.c_str());
  }
  if(m_enableDateHasBeenSet)
  {
      oStream << location << ".EnableDate=" << m_enableDate << "&";
  }
}
