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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    <p>Contains the response to a successful <a>ListUserPolicies</a> request. </p>
  */
  class AWS_IAM_API ListUserPoliciesResult
  {
  public:
    ListUserPoliciesResult();
    ListUserPoliciesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListUserPoliciesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>A list of policy names.</p>
    */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }
    /*
     <p>A list of policy names.</p>
    */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNames = value; }

    /*
     <p>A list of policy names.</p>
    */
    inline ListUserPoliciesResult&  WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /*
     <p>A list of policy names.</p>
    */
    inline ListUserPoliciesResult& AddPolicyNames(const Aws::String& value) { m_policyNames.push_back(value); return *this; }

    /*
     <p>A list of policy names.</p>
    */
    inline ListUserPoliciesResult& AddPolicyNames(const char* value) { m_policyNames.push_back(value); return *this; }

    /*
     <p> A flag that indicates whether there are more policy names to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more policy names in the list. </p>
    */
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    /*
     <p> A flag that indicates whether there are more policy names to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more policy names in the list. </p>
    */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /*
     <p> A flag that indicates whether there are more policy names to list. If your results were truncated, you can make a subsequent pagination request using the <code>Marker</code> request parameter to retrieve more policy names in the list. </p>
    */
    inline ListUserPoliciesResult&  WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /*
     <p> If <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p> If <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /*
     <p> If <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request. </p>
    */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /*
     <p> If <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request. </p>
    */
    inline ListUserPoliciesResult&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> If <code>IsTruncated</code> is <code>true</code>, this element is present and contains the value to use for the <code>Marker</code> parameter in a subsequent pagination request. </p>
    */
    inline ListUserPoliciesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListUserPoliciesResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_policyNames;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws