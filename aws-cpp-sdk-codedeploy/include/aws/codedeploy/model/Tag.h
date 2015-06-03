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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    <p>Information about a tag.</p>
  */
  class AWS_CODEDEPLOY_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Json::JsonValue& jsonValue);
    Tag& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The tag's key.</p>
    */
    inline const Aws::String& GetKey() const{ return m_key; }
    /*
     <p>The tag's key.</p>
    */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /*
     <p>The tag's key.</p>
    */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /*
     <p>The tag's key.</p>
    */
    inline Tag&  WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /*
     <p>The tag's key.</p>
    */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}

    /*
     <p>The tag's value.</p>
    */
    inline const Aws::String& GetValue() const{ return m_value; }
    /*
     <p>The tag's value.</p>
    */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /*
     <p>The tag's value.</p>
    */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /*
     <p>The tag's value.</p>
    */
    inline Tag&  WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /*
     <p>The tag's value.</p>
    */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    Aws::String m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
