﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ds/model/ListSchemaExtensionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSchemaExtensionsResult::ListSchemaExtensionsResult()
{
}

ListSchemaExtensionsResult::ListSchemaExtensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSchemaExtensionsResult& ListSchemaExtensionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("SchemaExtensionsInfo"))
  {
    Array<JsonValue> schemaExtensionsInfoJsonList = jsonValue.GetArray("SchemaExtensionsInfo");
    for(unsigned schemaExtensionsInfoIndex = 0; schemaExtensionsInfoIndex < schemaExtensionsInfoJsonList.GetLength(); ++schemaExtensionsInfoIndex)
    {
      m_schemaExtensionsInfo.push_back(schemaExtensionsInfoJsonList[schemaExtensionsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
