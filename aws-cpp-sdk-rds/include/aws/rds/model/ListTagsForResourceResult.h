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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>

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
namespace RDS
{
namespace Model
{
  /*
    <p></p>
  */
  class AWS_RDS_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>List of tags returned by the ListTagsForResource operation.</p>
    */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    /*
     <p>List of tags returned by the ListTagsForResource operation.</p>
    */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /*
     <p>List of tags returned by the ListTagsForResource operation.</p>
    */
    inline ListTagsForResourceResult&  WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /*
     <p>List of tags returned by the ListTagsForResource operation.</p>
    */
    inline ListTagsForResourceResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline ListTagsForResourceResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Tag> m_tagList;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws