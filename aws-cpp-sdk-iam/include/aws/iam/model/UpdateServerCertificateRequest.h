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
  class AWS_IAM_API UpdateServerCertificateRequest : public IAMRequest
  {
  public:
    UpdateServerCertificateRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the server certificate that you want to update.</p>
    */
    inline const Aws::String& GetServerCertificateName() const{ return m_serverCertificateName; }
    /*
     <p>The name of the server certificate that you want to update.</p>
    */
    inline void SetServerCertificateName(const Aws::String& value) { m_serverCertificateName = value; }

    /*
     <p>The name of the server certificate that you want to update.</p>
    */
    inline void SetServerCertificateName(const char* value) { m_serverCertificateName.assign(value); }

    /*
     <p>The name of the server certificate that you want to update.</p>
    */
    inline UpdateServerCertificateRequest&  WithServerCertificateName(const Aws::String& value) { SetServerCertificateName(value); return *this;}

    /*
     <p>The name of the server certificate that you want to update.</p>
    */
    inline UpdateServerCertificateRequest& WithServerCertificateName(const char* value) { SetServerCertificateName(value); return *this;}

    /*
     <p> The new path for the server certificate. Include this only if you are updating the server certificate's path. </p>
    */
    inline const Aws::String& GetNewPath() const{ return m_newPath; }
    /*
     <p> The new path for the server certificate. Include this only if you are updating the server certificate's path. </p>
    */
    inline void SetNewPath(const Aws::String& value) { m_newPathHasBeenSet = true; m_newPath = value; }

    /*
     <p> The new path for the server certificate. Include this only if you are updating the server certificate's path. </p>
    */
    inline void SetNewPath(const char* value) { m_newPathHasBeenSet = true; m_newPath.assign(value); }

    /*
     <p> The new path for the server certificate. Include this only if you are updating the server certificate's path. </p>
    */
    inline UpdateServerCertificateRequest&  WithNewPath(const Aws::String& value) { SetNewPath(value); return *this;}

    /*
     <p> The new path for the server certificate. Include this only if you are updating the server certificate's path. </p>
    */
    inline UpdateServerCertificateRequest& WithNewPath(const char* value) { SetNewPath(value); return *this;}

    /*
     <p> The new name for the server certificate. Include this only if you are updating the server certificate's name. </p>
    */
    inline const Aws::String& GetNewServerCertificateName() const{ return m_newServerCertificateName; }
    /*
     <p> The new name for the server certificate. Include this only if you are updating the server certificate's name. </p>
    */
    inline void SetNewServerCertificateName(const Aws::String& value) { m_newServerCertificateNameHasBeenSet = true; m_newServerCertificateName = value; }

    /*
     <p> The new name for the server certificate. Include this only if you are updating the server certificate's name. </p>
    */
    inline void SetNewServerCertificateName(const char* value) { m_newServerCertificateNameHasBeenSet = true; m_newServerCertificateName.assign(value); }

    /*
     <p> The new name for the server certificate. Include this only if you are updating the server certificate's name. </p>
    */
    inline UpdateServerCertificateRequest&  WithNewServerCertificateName(const Aws::String& value) { SetNewServerCertificateName(value); return *this;}

    /*
     <p> The new name for the server certificate. Include this only if you are updating the server certificate's name. </p>
    */
    inline UpdateServerCertificateRequest& WithNewServerCertificateName(const char* value) { SetNewServerCertificateName(value); return *this;}

  private:
    Aws::String m_serverCertificateName;
    Aws::String m_newPath;
    bool m_newPathHasBeenSet;
    Aws::String m_newServerCertificateName;
    bool m_newServerCertificateNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
