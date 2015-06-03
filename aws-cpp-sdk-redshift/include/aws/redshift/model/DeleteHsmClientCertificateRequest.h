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
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /*
    <p></p>
  */
  class AWS_REDSHIFT_API DeleteHsmClientCertificateRequest : public RedshiftRequest
  {
  public:
    DeleteHsmClientCertificateRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The identifier of the HSM client certificate to be deleted.</p>
    */
    inline const Aws::String& GetHsmClientCertificateIdentifier() const{ return m_hsmClientCertificateIdentifier; }
    /*
     <p>The identifier of the HSM client certificate to be deleted.</p>
    */
    inline void SetHsmClientCertificateIdentifier(const Aws::String& value) { m_hsmClientCertificateIdentifier = value; }

    /*
     <p>The identifier of the HSM client certificate to be deleted.</p>
    */
    inline void SetHsmClientCertificateIdentifier(const char* value) { m_hsmClientCertificateIdentifier.assign(value); }

    /*
     <p>The identifier of the HSM client certificate to be deleted.</p>
    */
    inline DeleteHsmClientCertificateRequest&  WithHsmClientCertificateIdentifier(const Aws::String& value) { SetHsmClientCertificateIdentifier(value); return *this;}

    /*
     <p>The identifier of the HSM client certificate to be deleted.</p>
    */
    inline DeleteHsmClientCertificateRequest& WithHsmClientCertificateIdentifier(const char* value) { SetHsmClientCertificateIdentifier(value); return *this;}

  private:
    Aws::String m_hsmClientCertificateIdentifier;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
