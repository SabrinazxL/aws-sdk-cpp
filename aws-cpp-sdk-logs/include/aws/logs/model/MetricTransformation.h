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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CLOUDWATCHLOGS_API MetricTransformation
  {
  public:
    MetricTransformation();
    MetricTransformation(const Aws::Utils::Json::JsonValue& jsonValue);
    MetricTransformation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    
    inline void SetMetricName(const Aws::String& value) { m_metricName = value; }

    
    inline void SetMetricName(const char* value) { m_metricName.assign(value); }

    
    inline MetricTransformation&  WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    
    inline MetricTransformation& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    
    inline const Aws::String& GetMetricNamespace() const{ return m_metricNamespace; }
    
    inline void SetMetricNamespace(const Aws::String& value) { m_metricNamespace = value; }

    
    inline void SetMetricNamespace(const char* value) { m_metricNamespace.assign(value); }

    
    inline MetricTransformation&  WithMetricNamespace(const Aws::String& value) { SetMetricNamespace(value); return *this;}

    
    inline MetricTransformation& WithMetricNamespace(const char* value) { SetMetricNamespace(value); return *this;}

    
    inline const Aws::String& GetMetricValue() const{ return m_metricValue; }
    
    inline void SetMetricValue(const Aws::String& value) { m_metricValue = value; }

    
    inline void SetMetricValue(const char* value) { m_metricValue.assign(value); }

    
    inline MetricTransformation&  WithMetricValue(const Aws::String& value) { SetMetricValue(value); return *this;}

    
    inline MetricTransformation& WithMetricValue(const char* value) { SetMetricValue(value); return *this;}

  private:
    Aws::String m_metricName;
    Aws::String m_metricNamespace;
    Aws::String m_metricValue;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
