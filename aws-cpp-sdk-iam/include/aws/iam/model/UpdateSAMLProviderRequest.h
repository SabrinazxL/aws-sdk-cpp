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
  class AWS_IAM_API UpdateSAMLProviderRequest : public IAMRequest
  {
  public:
    UpdateSAMLProviderRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> An XML document generated by an identity provider (IdP) that supports SAML 2.0. The document includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p>
    */
    inline const Aws::String& GetSAMLMetadataDocument() const{ return m_sAMLMetadataDocument; }
    /*
     <p> An XML document generated by an identity provider (IdP) that supports SAML 2.0. The document includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p>
    */
    inline void SetSAMLMetadataDocument(const Aws::String& value) { m_sAMLMetadataDocument = value; }

    /*
     <p> An XML document generated by an identity provider (IdP) that supports SAML 2.0. The document includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p>
    */
    inline void SetSAMLMetadataDocument(const char* value) { m_sAMLMetadataDocument.assign(value); }

    /*
     <p> An XML document generated by an identity provider (IdP) that supports SAML 2.0. The document includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p>
    */
    inline UpdateSAMLProviderRequest&  WithSAMLMetadataDocument(const Aws::String& value) { SetSAMLMetadataDocument(value); return *this;}

    /*
     <p> An XML document generated by an identity provider (IdP) that supports SAML 2.0. The document includes the issuer's name, expiration information, and keys that can be used to validate the SAML authentication response (assertions) that are received from the IdP. You must generate the metadata document using the identity management software that is used as your organization's IdP. </p>
    */
    inline UpdateSAMLProviderRequest& WithSAMLMetadataDocument(const char* value) { SetSAMLMetadataDocument(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p>
    */
    inline const Aws::String& GetSAMLProviderArn() const{ return m_sAMLProviderArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p>
    */
    inline void SetSAMLProviderArn(const Aws::String& value) { m_sAMLProviderArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p>
    */
    inline void SetSAMLProviderArn(const char* value) { m_sAMLProviderArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p>
    */
    inline UpdateSAMLProviderRequest&  WithSAMLProviderArn(const Aws::String& value) { SetSAMLProviderArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the SAML provider to update.</p>
    */
    inline UpdateSAMLProviderRequest& WithSAMLProviderArn(const char* value) { SetSAMLProviderArn(value); return *this;}

  private:
    Aws::String m_sAMLMetadataDocument;
    Aws::String m_sAMLProviderArn;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
