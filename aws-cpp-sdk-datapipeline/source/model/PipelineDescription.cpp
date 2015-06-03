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
#include <aws/datapipeline/model/PipelineDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PipelineDescription::PipelineDescription() : 
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

PipelineDescription::PipelineDescription(const JsonValue& jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineDescription& PipelineDescription::operator =(const JsonValue& jsonValue)
{
  m_pipelineId = jsonValue.GetString("pipelineId");

  m_name = jsonValue.GetString("name");

  Array<JsonValue> fieldsJsonList = jsonValue.GetArray("fields");
  for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
  {
    m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineDescription::Jsonize() const
{
  JsonValue payload;

  payload.WithString("pipelineId", m_pipelineId);

  payload.WithString("name", m_name);

  Array<JsonValue> fieldsJsonList(m_fields.size());
  for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
  {
    fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
  }
  payload.WithArray("fields", std::move(fieldsJsonList));

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return std::move(payload);
}