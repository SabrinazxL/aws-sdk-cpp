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
#include <aws/codedeploy/model/GetDeploymentInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::codedeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentInstanceRequest::GetDeploymentInstanceRequest()
{
}

Aws::String GetDeploymentInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("deploymentId", m_deploymentId);

  payload.WithString("instanceId", m_instanceId);

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetDeploymentInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.GetDeploymentInstance"));
  return std::move(headers);

}



