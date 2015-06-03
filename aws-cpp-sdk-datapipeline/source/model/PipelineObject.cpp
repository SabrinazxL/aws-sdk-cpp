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
#include <aws/datapipeline/model/PipelineObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PipelineObject::PipelineObject()
{
}

PipelineObject::PipelineObject(const JsonValue& jsonValue)
{
  *this = jsonValue;
}

PipelineObject& PipelineObject::operator =(const JsonValue& jsonValue)
{
  m_id = jsonValue.GetString("id");

  m_name = jsonValue.GetString("name");

  Array<JsonValue> fieldsJsonList = jsonValue.GetArray("fields");
  for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
  {
    m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
  }
  return *this;
}

JsonValue PipelineObject::Jsonize() const
{
  JsonValue payload;

  payload.WithString("id", m_id);

  payload.WithString("name", m_name);

  Array<JsonValue> fieldsJsonList(m_fields.size());
  for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
  {
    fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
  }
  payload.WithArray("fields", std::move(fieldsJsonList));

  return std::move(payload);
}