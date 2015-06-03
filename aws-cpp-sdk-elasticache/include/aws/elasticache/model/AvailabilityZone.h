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
#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  /*
    <p>Describes an Availability Zone in which the cache cluster is launched.</p>
  */
  class AWS_ELASTICACHE_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The name of the Availability Zone.</p>
    */
    inline const Aws::String& GetName() const{ return m_name; }
    /*
     <p>The name of the Availability Zone.</p>
    */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /*
     <p>The name of the Availability Zone.</p>
    */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /*
     <p>The name of the Availability Zone.</p>
    */
    inline AvailabilityZone&  WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     <p>The name of the Availability Zone.</p>
    */
    inline AvailabilityZone& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
