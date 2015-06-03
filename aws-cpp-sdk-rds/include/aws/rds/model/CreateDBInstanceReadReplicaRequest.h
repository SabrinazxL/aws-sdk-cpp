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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
  */
  class AWS_RDS_API CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    CreateDBInstanceReadReplicaRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The DB instance identifier of the Read Replica. This is the unique key that identifies a DB instance. This parameter is stored as a lowercase string. </p>
    */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    /*
     <p> The DB instance identifier of the Read Replica. This is the unique key that identifies a DB instance. This parameter is stored as a lowercase string. </p>
    */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifier = value; }

    /*
     <p> The DB instance identifier of the Read Replica. This is the unique key that identifies a DB instance. This parameter is stored as a lowercase string. </p>
    */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifier.assign(value); }

    /*
     <p> The DB instance identifier of the Read Replica. This is the unique key that identifies a DB instance. This parameter is stored as a lowercase string. </p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The DB instance identifier of the Read Replica. This is the unique key that identifies a DB instance. This parameter is stored as a lowercase string. </p>
    */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /*
     <p> The identifier of the DB instance that will act as the source for the Read Replica. Each DB instance can have up to five Read Replicas. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing DB instance.</li> <li>Can specify a DB instance that is a MySQL Read Replica only if the source is running MySQL 5.6.</li> <li>Can specify a DB instance that is a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5.</li> <li>The specified DB instance must have automatic backups enabled, its backup retention period must be greater than 0.</li> <li>If the source DB instance is in the same region as the Read Replica, specify a valid DB instance identifier.</li> <li>If the source DB instance is in a different region than the Read Replica, specify a valid DB instance ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.ARN"> Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</li> </ul>
    */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }
    /*
     <p> The identifier of the DB instance that will act as the source for the Read Replica. Each DB instance can have up to five Read Replicas. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing DB instance.</li> <li>Can specify a DB instance that is a MySQL Read Replica only if the source is running MySQL 5.6.</li> <li>Can specify a DB instance that is a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5.</li> <li>The specified DB instance must have automatic backups enabled, its backup retention period must be greater than 0.</li> <li>If the source DB instance is in the same region as the Read Replica, specify a valid DB instance identifier.</li> <li>If the source DB instance is in a different region than the Read Replica, specify a valid DB instance ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.ARN"> Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</li> </ul>
    */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifier = value; }

    /*
     <p> The identifier of the DB instance that will act as the source for the Read Replica. Each DB instance can have up to five Read Replicas. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing DB instance.</li> <li>Can specify a DB instance that is a MySQL Read Replica only if the source is running MySQL 5.6.</li> <li>Can specify a DB instance that is a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5.</li> <li>The specified DB instance must have automatic backups enabled, its backup retention period must be greater than 0.</li> <li>If the source DB instance is in the same region as the Read Replica, specify a valid DB instance identifier.</li> <li>If the source DB instance is in a different region than the Read Replica, specify a valid DB instance ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.ARN"> Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</li> </ul>
    */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifier.assign(value); }

    /*
     <p> The identifier of the DB instance that will act as the source for the Read Replica. Each DB instance can have up to five Read Replicas. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing DB instance.</li> <li>Can specify a DB instance that is a MySQL Read Replica only if the source is running MySQL 5.6.</li> <li>Can specify a DB instance that is a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5.</li> <li>The specified DB instance must have automatic backups enabled, its backup retention period must be greater than 0.</li> <li>If the source DB instance is in the same region as the Read Replica, specify a valid DB instance identifier.</li> <li>If the source DB instance is in a different region than the Read Replica, specify a valid DB instance ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.ARN"> Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</li> </ul>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /*
     <p> The identifier of the DB instance that will act as the source for the Read Replica. Each DB instance can have up to five Read Replicas. </p> <p>Constraints:</p> <ul> <li>Must be the identifier of an existing DB instance.</li> <li>Can specify a DB instance that is a MySQL Read Replica only if the source is running MySQL 5.6.</li> <li>Can specify a DB instance that is a PostgreSQL Read Replica only if the source is running PostgreSQL 9.3.5.</li> <li>The specified DB instance must have automatic backups enabled, its backup retention period must be greater than 0.</li> <li>If the source DB instance is in the same region as the Read Replica, specify a valid DB instance identifier.</li> <li>If the source DB instance is in a different region than the Read Replica, specify a valid DB instance ARN. For more information, go to <a href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.html#USER_Tagging.ARN"> Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</li> </ul>
    */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /*
     <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values: <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p> <p>Default: Inherits from the source DB instance.</p>
    */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    /*
     <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values: <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p> <p>Default: Inherits from the source DB instance.</p>
    */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /*
     <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values: <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p> <p>Default: Inherits from the source DB instance.</p>
    */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /*
     <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values: <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p> <p>Default: Inherits from the source DB instance.</p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The compute and memory capacity of the Read Replica. </p> <p> Valid Values: <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium</code></p> <p>Default: Inherits from the source DB instance.</p>
    */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /*
     <p> The Amazon EC2 Availability Zone that the Read Replica will be created in. </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's region. </p> <p> Example: <code>us-east-1d</code></p>
    */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    /*
     <p> The Amazon EC2 Availability Zone that the Read Replica will be created in. </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's region. </p> <p> Example: <code>us-east-1d</code></p>
    */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /*
     <p> The Amazon EC2 Availability Zone that the Read Replica will be created in. </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's region. </p> <p> Example: <code>us-east-1d</code></p>
    */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /*
     <p> The Amazon EC2 Availability Zone that the Read Replica will be created in. </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's region. </p> <p> Example: <code>us-east-1d</code></p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> The Amazon EC2 Availability Zone that the Read Replica will be created in. </p> <p> Default: A random, system-chosen Availability Zone in the endpoint's region. </p> <p> Example: <code>us-east-1d</code></p>
    */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /*
     <p> The port number that the DB instance uses for connections. </p> <p>Default: Inherits from the source DB instance</p> <p>Valid Values: <code>1150-65535</code></p>
    */
    inline long GetPort() const{ return m_port; }
    /*
     <p> The port number that the DB instance uses for connections. </p> <p>Default: Inherits from the source DB instance</p> <p>Valid Values: <code>1150-65535</code></p>
    */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /*
     <p> The port number that the DB instance uses for connections. </p> <p>Default: Inherits from the source DB instance</p> <p>Valid Values: <code>1150-65535</code></p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithPort(long value) { SetPort(value); return *this;}

    /*
     <p> Indicates that minor engine upgrades will be applied automatically to the Read Replica during the maintenance window. </p> <p>Default: Inherits from the source DB instance</p>
    */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    /*
     <p> Indicates that minor engine upgrades will be applied automatically to the Read Replica during the maintenance window. </p> <p>Default: Inherits from the source DB instance</p>
    */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /*
     <p> Indicates that minor engine upgrades will be applied automatically to the Read Replica during the maintenance window. </p> <p>Default: Inherits from the source DB instance</p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB instance. </p>
    */
    inline long GetIops() const{ return m_iops; }
    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB instance. </p>
    */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /*
     <p> The amount of Provisioned IOPS (input/output operations per second) to be initially allocated for the DB instance. </p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithIops(long value) { SetIops(value); return *this;}

    /*
     <p> The option group the DB instance will be associated with. If omitted, the default option group for the engine specified will be used. </p>
    */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    /*
     <p> The option group the DB instance will be associated with. If omitted, the default option group for the engine specified will be used. </p>
    */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /*
     <p> The option group the DB instance will be associated with. If omitted, the default option group for the engine specified will be used. </p>
    */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /*
     <p> The option group the DB instance will be associated with. If omitted, the default option group for the engine specified will be used. </p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /*
     <p> The option group the DB instance will be associated with. If omitted, the default option group for the engine specified will be used. </p>
    */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /*
     <p> Specifies the accessibility options for the DB instance. A value of true specifies an Internet-facing instance with a publicly resolvable DNS name, which resolves to a public IP address. A value of false specifies an internal instance with a DNS name that resolves to a private IP address. </p> <p> Default: The default behavior varies depending on whether a VPC has been requested or not. The following list shows the default behavior in each case. </p> <ul> <li> <b>Default VPC:</b>true</li> <li> <b>VPC:</b>false</li> </ul> <p> If no DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be publicly accessible. If a specific DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be private. </p>
    */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    /*
     <p> Specifies the accessibility options for the DB instance. A value of true specifies an Internet-facing instance with a publicly resolvable DNS name, which resolves to a public IP address. A value of false specifies an internal instance with a DNS name that resolves to a private IP address. </p> <p> Default: The default behavior varies depending on whether a VPC has been requested or not. The following list shows the default behavior in each case. </p> <ul> <li> <b>Default VPC:</b>true</li> <li> <b>VPC:</b>false</li> </ul> <p> If no DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be publicly accessible. If a specific DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be private. </p>
    */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /*
     <p> Specifies the accessibility options for the DB instance. A value of true specifies an Internet-facing instance with a publicly resolvable DNS name, which resolves to a public IP address. A value of false specifies an internal instance with a DNS name that resolves to a private IP address. </p> <p> Default: The default behavior varies depending on whether a VPC has been requested or not. The following list shows the default behavior in each case. </p> <ul> <li> <b>Default VPC:</b>true</li> <li> <b>VPC:</b>false</li> </ul> <p> If no DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be publicly accessible. If a specific DB subnet group has been specified as part of the request and the PubliclyAccessible value has not been set, the DB instance will be private. </p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CreateDBInstanceReadReplicaRequest&  WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /*
     <p> Specifies a DB subnet group for the DB instance. The new DB instance will be created in the VPC associated with the DB subnet group. If no DB subnet group is specified, then the new DB instance is not created in a VPC. </p> <p>Constraints:</p> <ul> <li>Can only be specified if the source DB instance identifier specifies a DB instance in another region.</li> <li>The specified DB subnet group must be in the same region in which the operation is running.</li> <li> All Read Replicas in one region that are created from the same source DB instance must either: <ul> <li>Specify DB subnet groups from the same VPC. All these Read Replicas will be created in the same VPC.</li> <li>Not specify a DB subnet group. All these Read Replicas will be created outside of any VPC.</li> </ul> </li> </ul>
    */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    /*
     <p> Specifies a DB subnet group for the DB instance. The new DB instance will be created in the VPC associated with the DB subnet group. If no DB subnet group is specified, then the new DB instance is not created in a VPC. </p> <p>Constraints:</p> <ul> <li>Can only be specified if the source DB instance identifier specifies a DB instance in another region.</li> <li>The specified DB subnet group must be in the same region in which the operation is running.</li> <li> All Read Replicas in one region that are created from the same source DB instance must either: <ul> <li>Specify DB subnet groups from the same VPC. All these Read Replicas will be created in the same VPC.</li> <li>Not specify a DB subnet group. All these Read Replicas will be created outside of any VPC.</li> </ul> </li> </ul>
    */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> Specifies a DB subnet group for the DB instance. The new DB instance will be created in the VPC associated with the DB subnet group. If no DB subnet group is specified, then the new DB instance is not created in a VPC. </p> <p>Constraints:</p> <ul> <li>Can only be specified if the source DB instance identifier specifies a DB instance in another region.</li> <li>The specified DB subnet group must be in the same region in which the operation is running.</li> <li> All Read Replicas in one region that are created from the same source DB instance must either: <ul> <li>Specify DB subnet groups from the same VPC. All these Read Replicas will be created in the same VPC.</li> <li>Not specify a DB subnet group. All these Read Replicas will be created outside of any VPC.</li> </ul> </li> </ul>
    */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /*
     <p> Specifies a DB subnet group for the DB instance. The new DB instance will be created in the VPC associated with the DB subnet group. If no DB subnet group is specified, then the new DB instance is not created in a VPC. </p> <p>Constraints:</p> <ul> <li>Can only be specified if the source DB instance identifier specifies a DB instance in another region.</li> <li>The specified DB subnet group must be in the same region in which the operation is running.</li> <li> All Read Replicas in one region that are created from the same source DB instance must either: <ul> <li>Specify DB subnet groups from the same VPC. All these Read Replicas will be created in the same VPC.</li> <li>Not specify a DB subnet group. All these Read Replicas will be created outside of any VPC.</li> </ul> </li> </ul>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Specifies a DB subnet group for the DB instance. The new DB instance will be created in the VPC associated with the DB subnet group. If no DB subnet group is specified, then the new DB instance is not created in a VPC. </p> <p>Constraints:</p> <ul> <li>Can only be specified if the source DB instance identifier specifies a DB instance in another region.</li> <li>The specified DB subnet group must be in the same region in which the operation is running.</li> <li> All Read Replicas in one region that are created from the same source DB instance must either: <ul> <li>Specify DB subnet groups from the same VPC. All these Read Replicas will be created in the same VPC.</li> <li>Not specify a DB subnet group. All these Read Replicas will be created outside of any VPC.</li> </ul> </li> </ul>
    */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Specifies the storage type to be associated with the Read Replica. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    /*
     <p> Specifies the storage type to be associated with the Read Replica. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /*
     <p> Specifies the storage type to be associated with the Read Replica. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /*
     <p> Specifies the storage type to be associated with the Read Replica. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline CreateDBInstanceReadReplicaRequest&  WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /*
     <p> Specifies the storage type to be associated with the Read Replica. </p> <p> Valid values: <code>standard | gp2 | io1</code></p> <p> If you specify <code>io1</code>, you must also include a value for the <code>Iops</code> parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter is specified; otherwise <code>standard</code></p>
    */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    Aws::String m_sourceDBInstanceIdentifier;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    long m_port;
    bool m_portHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
