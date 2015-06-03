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
#include <aws/opsworks/model/LayerType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int java_app_HASH = HashingUtils::HashString("java-app");
static const int lb_HASH = HashingUtils::HashString("lb");
static const int web_HASH = HashingUtils::HashString("web");
static const int php_app_HASH = HashingUtils::HashString("php-app");
static const int rails_app_HASH = HashingUtils::HashString("rails-app");
static const int nodejs_app_HASH = HashingUtils::HashString("nodejs-app");
static const int memcached_HASH = HashingUtils::HashString("memcached");
static const int db_master_HASH = HashingUtils::HashString("db-master");
static const int monitoring_master_HASH = HashingUtils::HashString("monitoring-master");
static const int custom_HASH = HashingUtils::HashString("custom");

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
namespace LayerTypeMapper
{
LayerType GetLayerTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == java_app_HASH)
  {
    return LayerType::java_app;
  }
  else if (hashCode == lb_HASH)
  {
    return LayerType::lb;
  }
  else if (hashCode == web_HASH)
  {
    return LayerType::web;
  }
  else if (hashCode == php_app_HASH)
  {
    return LayerType::php_app;
  }
  else if (hashCode == rails_app_HASH)
  {
    return LayerType::rails_app;
  }
  else if (hashCode == nodejs_app_HASH)
  {
    return LayerType::nodejs_app;
  }
  else if (hashCode == memcached_HASH)
  {
    return LayerType::memcached;
  }
  else if (hashCode == db_master_HASH)
  {
    return LayerType::db_master;
  }
  else if (hashCode == monitoring_master_HASH)
  {
    return LayerType::monitoring_master;
  }
  else if (hashCode == custom_HASH)
  {
    return LayerType::custom;
  }

  return LayerType::java_app;
}

Aws::String GetNameForLayerType(LayerType value)
{
  switch(value)
  {
  case LayerType::java_app:
    return "java-app";
  case LayerType::lb:
    return "lb";
  case LayerType::web:
    return "web";
  case LayerType::php_app:
    return "php-app";
  case LayerType::rails_app:
    return "rails-app";
  case LayerType::nodejs_app:
    return "nodejs-app";
  case LayerType::memcached:
    return "memcached";
  case LayerType::db_master:
    return "db-master";
  case LayerType::monitoring_master:
    return "monitoring-master";
  case LayerType::custom:
    return "custom";
  default:
    return "java_app";
  }
}

} // namespace LayerTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
