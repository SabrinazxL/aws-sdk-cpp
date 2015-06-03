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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_REDSHIFT_API CreateClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    CreateClusterSnapshotRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> A unique identifier for the snapshot that you are requesting. This identifier must be unique for all snapshots within the AWS account. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-snapshot-id</code></p>
    */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }
    /*
     <p> A unique identifier for the snapshot that you are requesting. This identifier must be unique for all snapshots within the AWS account. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-snapshot-id</code></p>
    */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifier = value; }

    /*
     <p> A unique identifier for the snapshot that you are requesting. This identifier must be unique for all snapshots within the AWS account. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-snapshot-id</code></p>
    */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifier.assign(value); }

    /*
     <p> A unique identifier for the snapshot that you are requesting. This identifier must be unique for all snapshots within the AWS account. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-snapshot-id</code></p>
    */
    inline CreateClusterSnapshotRequest&  WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /*
     <p> A unique identifier for the snapshot that you are requesting. This identifier must be unique for all snapshots within the AWS account. </p> <p>Constraints:</p> <ul> <li>Cannot be null, empty, or blank</li> <li>Must contain from 1 to 255 alphanumeric characters or hyphens</li> <li>First character must be a letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li> </ul> <p>Example: <code>my-snapshot-id</code></p>
    */
    inline CreateClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}

    /*
     <p> The cluster identifier for which you want a snapshot. </p>
    */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    /*
     <p> The cluster identifier for which you want a snapshot. </p>
    */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }

    /*
     <p> The cluster identifier for which you want a snapshot. </p>
    */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }

    /*
     <p> The cluster identifier for which you want a snapshot. </p>
    */
    inline CreateClusterSnapshotRequest&  WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /*
     <p> The cluster identifier for which you want a snapshot. </p>
    */
    inline CreateClusterSnapshotRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}

    /*
     <p>A list of tag instances.</p>
    */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    /*
     <p>A list of tag instances.</p>
    */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /*
     <p>A list of tag instances.</p>
    */
    inline CreateClusterSnapshotRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /*
     <p>A list of tag instances.</p>
    */
    inline CreateClusterSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_snapshotIdentifier;
    Aws::String m_clusterIdentifier;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
