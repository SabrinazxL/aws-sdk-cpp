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
#include <aws/sdb/SimpleDB_EXPORTS.h>
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
namespace SimpleDB
{
namespace Model
{
  /*
    <p></p>
  */
  class AWS_SIMPLEDB_API Attribute
  {
  public:
    Attribute();
    Attribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    Attribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     The name of the attribute.
    */
    inline const Aws::String& GetName() const{ return m_name; }
    /*
     The name of the attribute.
    */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /*
     The name of the attribute.
    */
    inline void SetName(const char* value) { m_name.assign(value); }

    /*
     The name of the attribute.
    */
    inline Attribute&  WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     The name of the attribute.
    */
    inline Attribute& WithName(const char* value) { SetName(value); return *this;}

    /*
     <p></p>
    */
    inline const Aws::String& GetAlternateNameEncoding() const{ return m_alternateNameEncoding; }
    /*
     <p></p>
    */
    inline void SetAlternateNameEncoding(const Aws::String& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = value; }

    /*
     <p></p>
    */
    inline void SetAlternateNameEncoding(const char* value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding.assign(value); }

    /*
     <p></p>
    */
    inline Attribute&  WithAlternateNameEncoding(const Aws::String& value) { SetAlternateNameEncoding(value); return *this;}

    /*
     <p></p>
    */
    inline Attribute& WithAlternateNameEncoding(const char* value) { SetAlternateNameEncoding(value); return *this;}

    /*
     The value of the attribute.
    */
    inline const Aws::String& GetValue() const{ return m_value; }
    /*
     The value of the attribute.
    */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /*
     The value of the attribute.
    */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /*
     The value of the attribute.
    */
    inline Attribute&  WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /*
     The value of the attribute.
    */
    inline Attribute& WithValue(const char* value) { SetValue(value); return *this;}

    /*
     <p></p>
    */
    inline const Aws::String& GetAlternateValueEncoding() const{ return m_alternateValueEncoding; }
    /*
     <p></p>
    */
    inline void SetAlternateValueEncoding(const Aws::String& value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding = value; }

    /*
     <p></p>
    */
    inline void SetAlternateValueEncoding(const char* value) { m_alternateValueEncodingHasBeenSet = true; m_alternateValueEncoding.assign(value); }

    /*
     <p></p>
    */
    inline Attribute&  WithAlternateValueEncoding(const Aws::String& value) { SetAlternateValueEncoding(value); return *this;}

    /*
     <p></p>
    */
    inline Attribute& WithAlternateValueEncoding(const char* value) { SetAlternateValueEncoding(value); return *this;}

  private:
    Aws::String m_name;
    Aws::String m_alternateNameEncoding;
    bool m_alternateNameEncodingHasBeenSet;
    Aws::String m_value;
    Aws::String m_alternateValueEncoding;
    bool m_alternateValueEncodingHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
