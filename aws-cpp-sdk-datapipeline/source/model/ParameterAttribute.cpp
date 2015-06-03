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
#include <aws/datapipeline/model/ParameterAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ParameterAttribute::ParameterAttribute()
{
}

ParameterAttribute::ParameterAttribute(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

ParameterAttribute& ParameterAttribute::operator =(const JsonValue& jsonValue)
{
  m_key = jsonValue.GetString("key");

  m_stringValue = jsonValue.GetString("stringValue");

  return *this;
}

JsonValue ParameterAttribute::Jsonize() const
{
  JsonValue payload;

  payload.WithString("key", m_key);

  payload.WithString("stringValue", m_stringValue);

  return std::move(payload);
}