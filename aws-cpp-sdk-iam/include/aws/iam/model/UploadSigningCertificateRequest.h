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
  class AWS_IAM_API UploadSigningCertificateRequest : public IAMRequest
  {
  public:
    UploadSigningCertificateRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the user the signing certificate is for.</p>
    */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    /*
     <p>The name of the user the signing certificate is for.</p>
    */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /*
     <p>The name of the user the signing certificate is for.</p>
    */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /*
     <p>The name of the user the signing certificate is for.</p>
    */
    inline UploadSigningCertificateRequest&  WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /*
     <p>The name of the user the signing certificate is for.</p>
    */
    inline UploadSigningCertificateRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /*
     <p>The contents of the signing certificate.</p>
    */
    inline const Aws::String& GetCertificateBody() const{ return m_certificateBody; }
    /*
     <p>The contents of the signing certificate.</p>
    */
    inline void SetCertificateBody(const Aws::String& value) { m_certificateBody = value; }

    /*
     <p>The contents of the signing certificate.</p>
    */
    inline void SetCertificateBody(const char* value) { m_certificateBody.assign(value); }

    /*
     <p>The contents of the signing certificate.</p>
    */
    inline UploadSigningCertificateRequest&  WithCertificateBody(const Aws::String& value) { SetCertificateBody(value); return *this;}

    /*
     <p>The contents of the signing certificate.</p>
    */
    inline UploadSigningCertificateRequest& WithCertificateBody(const char* value) { SetCertificateBody(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_certificateBody;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
