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
#include <aws/opsworks/model/DeleteInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInstanceRequest::DeleteInstanceRequest() : 
    m_deleteElasticIp(false),
    m_deleteElasticIpHasBeenSet(false),
    m_deleteVolumes(false),
    m_deleteVolumesHasBeenSet(false)
{
}

Aws::String DeleteInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  payload.WithString("InstanceId", m_instanceId);

  if(m_deleteElasticIpHasBeenSet)
  {
   payload.WithBool("DeleteElasticIp", m_deleteElasticIp);

  }

  if(m_deleteVolumesHasBeenSet)
  {
   payload.WithBool("DeleteVolumes", m_deleteVolumes);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DeleteInstance"));
  return std::move(headers);

}



