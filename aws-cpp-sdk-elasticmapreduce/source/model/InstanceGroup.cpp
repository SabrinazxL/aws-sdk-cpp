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
#include <aws/elasticmapreduce/model/InstanceGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InstanceGroup::InstanceGroup() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_instanceGroupTypeHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_requestedInstanceCount(0),
    m_requestedInstanceCountHasBeenSet(false),
    m_runningInstanceCount(0),
    m_runningInstanceCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

InstanceGroup::InstanceGroup(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_instanceGroupTypeHasBeenSet(false),
    m_bidPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_requestedInstanceCount(0),
    m_requestedInstanceCountHasBeenSet(false),
    m_runningInstanceCount(0),
    m_runningInstanceCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceGroup& InstanceGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Market"))
  {
    m_market = MarketTypeMapper::GetMarketTypeForName(jsonValue.GetString("Market"));

    m_marketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGroupType"))
  {
    m_instanceGroupType = InstanceGroupTypeMapper::GetInstanceGroupTypeForName(jsonValue.GetString("InstanceGroupType"));

    m_instanceGroupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BidPrice"))
  {
    m_bidPrice = jsonValue.GetString("BidPrice");

    m_bidPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedInstanceCount"))
  {
    m_requestedInstanceCount = jsonValue.GetInteger("RequestedInstanceCount");

    m_requestedInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningInstanceCount"))
  {
    m_runningInstanceCount = jsonValue.GetInteger("RunningInstanceCount");

    m_runningInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceGroup::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_marketHasBeenSet)
  {
   payload.WithString("Market", MarketTypeMapper::GetNameForMarketType(m_market));
  }

  if(m_instanceGroupTypeHasBeenSet)
  {
   payload.WithString("InstanceGroupType", InstanceGroupTypeMapper::GetNameForInstanceGroupType(m_instanceGroupType));
  }

  if(m_bidPriceHasBeenSet)
  {
   payload.WithString("BidPrice", m_bidPrice);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_requestedInstanceCountHasBeenSet)
  {
   payload.WithInteger("RequestedInstanceCount", m_requestedInstanceCount);

  }

  if(m_runningInstanceCountHasBeenSet)
  {
   payload.WithInteger("RunningInstanceCount", m_runningInstanceCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  return std::move(payload);
}