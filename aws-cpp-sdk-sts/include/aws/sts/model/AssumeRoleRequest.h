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
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace STS
{
namespace Model
{

  /*
  */
  class AWS_STS_API AssumeRoleRequest : public STSRequest
  {
  public:
    AssumeRoleRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
    */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
    */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
    */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
    */
    inline AssumeRoleRequest&  WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the role that the caller is assuming.</p>
    */
    inline AssumeRoleRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /*
     <p>An identifier for the assumed role session. The session name is included as part of the <code>AssumedRoleUser</code>. </p>
    */
    inline const Aws::String& GetRoleSessionName() const{ return m_roleSessionName; }
    /*
     <p>An identifier for the assumed role session. The session name is included as part of the <code>AssumedRoleUser</code>. </p>
    */
    inline void SetRoleSessionName(const Aws::String& value) { m_roleSessionName = value; }

    /*
     <p>An identifier for the assumed role session. The session name is included as part of the <code>AssumedRoleUser</code>. </p>
    */
    inline void SetRoleSessionName(const char* value) { m_roleSessionName.assign(value); }

    /*
     <p>An identifier for the assumed role session. The session name is included as part of the <code>AssumedRoleUser</code>. </p>
    */
    inline AssumeRoleRequest&  WithRoleSessionName(const Aws::String& value) { SetRoleSessionName(value); return *this;}

    /*
     <p>An identifier for the assumed role session. The session name is included as part of the <code>AssumedRoleUser</code>. </p>
    */
    inline AssumeRoleRequest& WithRoleSessionName(const char* value) { SetRoleSessionName(value); return *this;}

    /*
     <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you pass a policy, the temporary security credentials that are returned by the operation have the permissions that are allowed by both the access policy of the role that is being assumed, <i><b>and</b></i> the policy that you pass. This gives you a way to further restrict the permissions for the resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those allowed by the access policy of the role that is being assumed. For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/permissions-assume-role.html">Permissions for AssumeRole</a> in <i>Using Temporary Security Credentials</i>. </p>
    */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    /*
     <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you pass a policy, the temporary security credentials that are returned by the operation have the permissions that are allowed by both the access policy of the role that is being assumed, <i><b>and</b></i> the policy that you pass. This gives you a way to further restrict the permissions for the resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those allowed by the access policy of the role that is being assumed. For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/permissions-assume-role.html">Permissions for AssumeRole</a> in <i>Using Temporary Security Credentials</i>. </p>
    */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /*
     <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you pass a policy, the temporary security credentials that are returned by the operation have the permissions that are allowed by both the access policy of the role that is being assumed, <i><b>and</b></i> the policy that you pass. This gives you a way to further restrict the permissions for the resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those allowed by the access policy of the role that is being assumed. For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/permissions-assume-role.html">Permissions for AssumeRole</a> in <i>Using Temporary Security Credentials</i>. </p>
    */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /*
     <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you pass a policy, the temporary security credentials that are returned by the operation have the permissions that are allowed by both the access policy of the role that is being assumed, <i><b>and</b></i> the policy that you pass. This gives you a way to further restrict the permissions for the resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those allowed by the access policy of the role that is being assumed. For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/permissions-assume-role.html">Permissions for AssumeRole</a> in <i>Using Temporary Security Credentials</i>. </p>
    */
    inline AssumeRoleRequest&  WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /*
     <p>An IAM policy in JSON format.</p> <p>The policy parameter is optional. If you pass a policy, the temporary security credentials that are returned by the operation have the permissions that are allowed by both the access policy of the role that is being assumed, <i><b>and</b></i> the policy that you pass. This gives you a way to further restrict the permissions for the resulting temporary security credentials. You cannot use the passed policy to grant permissions that are in excess of those allowed by the access policy of the role that is being assumed. For more information, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/permissions-assume-role.html">Permissions for AssumeRole</a> in <i>Using Temporary Security Credentials</i>. </p>
    */
    inline AssumeRoleRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

    /*
     <p>The duration, in seconds, of the role session. The value can range from 900 seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to 3600 seconds. </p>
    */
    inline long GetDurationSeconds() const{ return m_durationSeconds; }
    /*
     <p>The duration, in seconds, of the role session. The value can range from 900 seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to 3600 seconds. </p>
    */
    inline void SetDurationSeconds(long value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }

    /*
     <p>The duration, in seconds, of the role session. The value can range from 900 seconds (15 minutes) to 3600 seconds (1 hour). By default, the value is set to 3600 seconds. </p>
    */
    inline AssumeRoleRequest&  WithDurationSeconds(long value) { SetDurationSeconds(value); return *this;}

    /*
     <p>A unique identifier that is used by third parties to assume a role in their customers' accounts. For each role that the third party can assume, they should instruct their customers to create a role with the external ID that the third party generated. Each time the third party assumes the role, they must pass the customer's external ID. The external ID is useful in order to help third parties bind a role to the customer who created it. For more information about the external ID, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/sts-delegating-externalid.html" target="_blank">About the External ID</a> in <i>Using Temporary Security Credentials</i>.</p>
    */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    /*
     <p>A unique identifier that is used by third parties to assume a role in their customers' accounts. For each role that the third party can assume, they should instruct their customers to create a role with the external ID that the third party generated. Each time the third party assumes the role, they must pass the customer's external ID. The external ID is useful in order to help third parties bind a role to the customer who created it. For more information about the external ID, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/sts-delegating-externalid.html" target="_blank">About the External ID</a> in <i>Using Temporary Security Credentials</i>.</p>
    */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /*
     <p>A unique identifier that is used by third parties to assume a role in their customers' accounts. For each role that the third party can assume, they should instruct their customers to create a role with the external ID that the third party generated. Each time the third party assumes the role, they must pass the customer's external ID. The external ID is useful in order to help third parties bind a role to the customer who created it. For more information about the external ID, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/sts-delegating-externalid.html" target="_blank">About the External ID</a> in <i>Using Temporary Security Credentials</i>.</p>
    */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /*
     <p>A unique identifier that is used by third parties to assume a role in their customers' accounts. For each role that the third party can assume, they should instruct their customers to create a role with the external ID that the third party generated. Each time the third party assumes the role, they must pass the customer's external ID. The external ID is useful in order to help third parties bind a role to the customer who created it. For more information about the external ID, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/sts-delegating-externalid.html" target="_blank">About the External ID</a> in <i>Using Temporary Security Credentials</i>.</p>
    */
    inline AssumeRoleRequest&  WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /*
     <p>A unique identifier that is used by third parties to assume a role in their customers' accounts. For each role that the third party can assume, they should instruct their customers to create a role with the external ID that the third party generated. Each time the third party assumes the role, they must pass the customer's external ID. The external ID is useful in order to help third parties bind a role to the customer who created it. For more information about the external ID, see <a href="http://docs.aws.amazon.com/STS/latest/UsingSTS/sts-delegating-externalid.html" target="_blank">About the External ID</a> in <i>Using Temporary Security Credentials</i>.</p>
    */
    inline AssumeRoleRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}

    /*
     <p>The identification number of the MFA device that is associated with the user who is making the <code>AssumeRole</code> call. Specify this value if the trust policy of the role being assumed includes a condition that requires MFA authentication. The value is either the serial number for a hardware device (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
    */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    /*
     <p>The identification number of the MFA device that is associated with the user who is making the <code>AssumeRole</code> call. Specify this value if the trust policy of the role being assumed includes a condition that requires MFA authentication. The value is either the serial number for a hardware device (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
    */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /*
     <p>The identification number of the MFA device that is associated with the user who is making the <code>AssumeRole</code> call. Specify this value if the trust policy of the role being assumed includes a condition that requires MFA authentication. The value is either the serial number for a hardware device (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
    */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /*
     <p>The identification number of the MFA device that is associated with the user who is making the <code>AssumeRole</code> call. Specify this value if the trust policy of the role being assumed includes a condition that requires MFA authentication. The value is either the serial number for a hardware device (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
    */
    inline AssumeRoleRequest&  WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /*
     <p>The identification number of the MFA device that is associated with the user who is making the <code>AssumeRole</code> call. Specify this value if the trust policy of the role being assumed includes a condition that requires MFA authentication. The value is either the serial number for a hardware device (such as <code>GAHT12345678</code>) or an Amazon Resource Name (ARN) for a virtual device (such as <code>arn:aws:iam::123456789012:mfa/user</code>).</p>
    */
    inline AssumeRoleRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}

    /*
     <p>The value provided by the MFA device, if the trust policy of the role being assumed requires MFA (that is, if the policy includes a condition that tests for MFA). If the role being assumed requires MFA and if the <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code> call returns an "access denied" error.</p>
    */
    inline const Aws::String& GetTokenCode() const{ return m_tokenCode; }
    /*
     <p>The value provided by the MFA device, if the trust policy of the role being assumed requires MFA (that is, if the policy includes a condition that tests for MFA). If the role being assumed requires MFA and if the <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code> call returns an "access denied" error.</p>
    */
    inline void SetTokenCode(const Aws::String& value) { m_tokenCodeHasBeenSet = true; m_tokenCode = value; }

    /*
     <p>The value provided by the MFA device, if the trust policy of the role being assumed requires MFA (that is, if the policy includes a condition that tests for MFA). If the role being assumed requires MFA and if the <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code> call returns an "access denied" error.</p>
    */
    inline void SetTokenCode(const char* value) { m_tokenCodeHasBeenSet = true; m_tokenCode.assign(value); }

    /*
     <p>The value provided by the MFA device, if the trust policy of the role being assumed requires MFA (that is, if the policy includes a condition that tests for MFA). If the role being assumed requires MFA and if the <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code> call returns an "access denied" error.</p>
    */
    inline AssumeRoleRequest&  WithTokenCode(const Aws::String& value) { SetTokenCode(value); return *this;}

    /*
     <p>The value provided by the MFA device, if the trust policy of the role being assumed requires MFA (that is, if the policy includes a condition that tests for MFA). If the role being assumed requires MFA and if the <code>TokenCode</code> value is missing or expired, the <code>AssumeRole</code> call returns an "access denied" error.</p>
    */
    inline AssumeRoleRequest& WithTokenCode(const char* value) { SetTokenCode(value); return *this;}

  private:
    Aws::String m_roleArn;
    Aws::String m_roleSessionName;
    Aws::String m_policy;
    bool m_policyHasBeenSet;
    long m_durationSeconds;
    bool m_durationSecondsHasBeenSet;
    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet;
    Aws::String m_tokenCode;
    bool m_tokenCodeHasBeenSet;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
