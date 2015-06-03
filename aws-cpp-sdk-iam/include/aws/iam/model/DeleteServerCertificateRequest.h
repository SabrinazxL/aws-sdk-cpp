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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API DeleteServerCertificateRequest : public IAMRequest
  {
  public:
    DeleteServerCertificateRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the server certificate you want to delete.</p>
    */
    inline const Aws::String& GetServerCertificateName() const{ return m_serverCertificateName; }
    /*
     <p>The name of the server certificate you want to delete.</p>
    */
    inline void SetServerCertificateName(const Aws::String& value) { m_serverCertificateName = value; }

    /*
     <p>The name of the server certificate you want to delete.</p>
    */
    inline void SetServerCertificateName(const char* value) { m_serverCertificateName.assign(value); }

    /*
     <p>The name of the server certificate you want to delete.</p>
    */
    inline DeleteServerCertificateRequest&  WithServerCertificateName(const Aws::String& value) { SetServerCertificateName(value); return *this;}

    /*
     <p>The name of the server certificate you want to delete.</p>
    */
    inline DeleteServerCertificateRequest& WithServerCertificateName(const char* value) { SetServerCertificateName(value); return *this;}

  private:
    Aws::String m_serverCertificateName;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
