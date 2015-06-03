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
#include <aws/core/client/AWSError.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/GlacierErrors.h>

using namespace Aws::Client;
using namespace Aws::Glacier;

AWSError<CoreErrors> GlacierErrorMarshaller::FindErrorByName(const char* errorName) const
{
  AWSError<CoreErrors> error = GlacierErrorMapper::GetErrorForName(errorName);
  if(error.GetErrorType() != CoreErrors::UNKNOWN)
  {
    return error;
  }

  return AWSRestfulJsonErrorMarshaller::FindErrorByName(errorName);
}