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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/ReplicationGroupPendingModifiedValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/AutomaticFailoverStatus.h>
#include <aws/elasticache/model/NodeGroup.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{
  /*
    <p>Contains all of the attributes of a specific replication group.</p>
  */
  class AWS_ELASTICACHE_API ReplicationGroup
  {
  public:
    ReplicationGroup();
    ReplicationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplicationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The identifier for the replication group.</p>
    */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }
    /*
     <p>The identifier for the replication group.</p>
    */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /*
     <p>The identifier for the replication group.</p>
    */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /*
     <p>The identifier for the replication group.</p>
    */
    inline ReplicationGroup&  WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /*
     <p>The identifier for the replication group.</p>
    */
    inline ReplicationGroup& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}

    /*
     <p>The description of the replication group.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>The description of the replication group.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /*
     <p>The description of the replication group.</p>
    */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /*
     <p>The description of the replication group.</p>
    */
    inline ReplicationGroup&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>The description of the replication group.</p>
    */
    inline ReplicationGroup& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>The current state of this replication group - <i>creating</i>, <i>available</i>, etc.</p>
    */
    inline const Aws::String& GetStatus() const{ return m_status; }
    /*
     <p>The current state of this replication group - <i>creating</i>, <i>available</i>, etc.</p>
    */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /*
     <p>The current state of this replication group - <i>creating</i>, <i>available</i>, etc.</p>
    */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /*
     <p>The current state of this replication group - <i>creating</i>, <i>available</i>, etc.</p>
    */
    inline ReplicationGroup&  WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /*
     <p>The current state of this replication group - <i>creating</i>, <i>available</i>, etc.</p>
    */
    inline ReplicationGroup& WithStatus(const char* value) { SetStatus(value); return *this;}

    /*
     <p>A group of settings to be applied to the replication group, either immediately or during the next maintenance window.</p>
    */
    inline const ReplicationGroupPendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }
    /*
     <p>A group of settings to be applied to the replication group, either immediately or during the next maintenance window.</p>
    */
    inline void SetPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /*
     <p>A group of settings to be applied to the replication group, either immediately or during the next maintenance window.</p>
    */
    inline ReplicationGroup&  WithPendingModifiedValues(const ReplicationGroupPendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /*
     <p>The names of all the cache clusters that are part of this replication group.</p>
    */
    inline const Aws::Vector<Aws::String>& GetMemberClusters() const{ return m_memberClusters; }
    /*
     <p>The names of all the cache clusters that are part of this replication group.</p>
    */
    inline void SetMemberClusters(const Aws::Vector<Aws::String>& value) { m_memberClustersHasBeenSet = true; m_memberClusters = value; }

    /*
     <p>The names of all the cache clusters that are part of this replication group.</p>
    */
    inline ReplicationGroup&  WithMemberClusters(const Aws::Vector<Aws::String>& value) { SetMemberClusters(value); return *this;}

    /*
     <p>The names of all the cache clusters that are part of this replication group.</p>
    */
    inline ReplicationGroup& AddMemberClusters(const Aws::String& value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }

    /*
     <p>The names of all the cache clusters that are part of this replication group.</p>
    */
    inline ReplicationGroup& AddMemberClusters(const char* value) { m_memberClustersHasBeenSet = true; m_memberClusters.push_back(value); return *this; }

    /*
     <p>A single element list with information about the nodes in the replication group.</p>
    */
    inline const Aws::Vector<NodeGroup>& GetNodeGroups() const{ return m_nodeGroups; }
    /*
     <p>A single element list with information about the nodes in the replication group.</p>
    */
    inline void SetNodeGroups(const Aws::Vector<NodeGroup>& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups = value; }

    /*
     <p>A single element list with information about the nodes in the replication group.</p>
    */
    inline ReplicationGroup&  WithNodeGroups(const Aws::Vector<NodeGroup>& value) { SetNodeGroups(value); return *this;}

    /*
     <p>A single element list with information about the nodes in the replication group.</p>
    */
    inline ReplicationGroup& AddNodeGroups(const NodeGroup& value) { m_nodeGroupsHasBeenSet = true; m_nodeGroups.push_back(value); return *this; }

    /*
     <p>The cache cluster ID that is used as the daily snapshot source for the replication group.</p>
    */
    inline const Aws::String& GetSnapshottingClusterId() const{ return m_snapshottingClusterId; }
    /*
     <p>The cache cluster ID that is used as the daily snapshot source for the replication group.</p>
    */
    inline void SetSnapshottingClusterId(const Aws::String& value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId = value; }

    /*
     <p>The cache cluster ID that is used as the daily snapshot source for the replication group.</p>
    */
    inline void SetSnapshottingClusterId(const char* value) { m_snapshottingClusterIdHasBeenSet = true; m_snapshottingClusterId.assign(value); }

    /*
     <p>The cache cluster ID that is used as the daily snapshot source for the replication group.</p>
    */
    inline ReplicationGroup&  WithSnapshottingClusterId(const Aws::String& value) { SetSnapshottingClusterId(value); return *this;}

    /*
     <p>The cache cluster ID that is used as the daily snapshot source for the replication group.</p>
    */
    inline ReplicationGroup& WithSnapshottingClusterId(const char* value) { SetSnapshottingClusterId(value); return *this;}

    /*
     <p>Indicates the status of Multi-AZ for this replication group.</p> <note><p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>Redis versions earlier than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
    */
    inline const AutomaticFailoverStatus& GetAutomaticFailover() const{ return m_automaticFailover; }
    /*
     <p>Indicates the status of Multi-AZ for this replication group.</p> <note><p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>Redis versions earlier than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
    */
    inline void SetAutomaticFailover(const AutomaticFailoverStatus& value) { m_automaticFailoverHasBeenSet = true; m_automaticFailover = value; }

    /*
     <p>Indicates the status of Multi-AZ for this replication group.</p> <note><p>ElastiCache Multi-AZ replication groups are not supported on:</p> <ul> <li>Redis versions earlier than 2.8.6.</li> <li>T1 and T2 cache node types.</li> </ul> </note>
    */
    inline ReplicationGroup&  WithAutomaticFailover(const AutomaticFailoverStatus& value) { SetAutomaticFailover(value); return *this;}

  private:
    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    ReplicationGroupPendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;
    Aws::Vector<Aws::String> m_memberClusters;
    bool m_memberClustersHasBeenSet;
    Aws::Vector<NodeGroup> m_nodeGroups;
    bool m_nodeGroupsHasBeenSet;
    Aws::String m_snapshottingClusterId;
    bool m_snapshottingClusterIdHasBeenSet;
    AutomaticFailoverStatus m_automaticFailover;
    bool m_automaticFailoverHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
