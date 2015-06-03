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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class SourceType
  {
    cluster,
    cluster_parameter_group,
    cluster_security_group,
    cluster_snapshot
  };

namespace SourceTypeMapper
{
AWS_REDSHIFT_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
