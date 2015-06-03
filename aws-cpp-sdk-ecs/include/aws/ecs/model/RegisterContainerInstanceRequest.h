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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/VersionInfo.h>
#include <aws/ecs/model/Resource.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /*
  */
  class AWS_ECS_API RegisterContainerInstanceRequest : public ECSRequest
  {
  public:
    RegisterContainerInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to register your container instance with. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to register your container instance with. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to register your container instance with. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to register your container instance with. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline RegisterContainerInstanceRequest&  WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to register your container instance with. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline RegisterContainerInstanceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /*
     <p>The instance identity document for the Amazon EC2 instance to register. This document can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/document/</code></p>
    */
    inline const Aws::String& GetInstanceIdentityDocument() const{ return m_instanceIdentityDocument; }
    /*
     <p>The instance identity document for the Amazon EC2 instance to register. This document can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/document/</code></p>
    */
    inline void SetInstanceIdentityDocument(const Aws::String& value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument = value; }

    /*
     <p>The instance identity document for the Amazon EC2 instance to register. This document can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/document/</code></p>
    */
    inline void SetInstanceIdentityDocument(const char* value) { m_instanceIdentityDocumentHasBeenSet = true; m_instanceIdentityDocument.assign(value); }

    /*
     <p>The instance identity document for the Amazon EC2 instance to register. This document can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/document/</code></p>
    */
    inline RegisterContainerInstanceRequest&  WithInstanceIdentityDocument(const Aws::String& value) { SetInstanceIdentityDocument(value); return *this;}

    /*
     <p>The instance identity document for the Amazon EC2 instance to register. This document can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/document/</code></p>
    */
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocument(const char* value) { SetInstanceIdentityDocument(value); return *this;}

    /*
     <p>The instance identity document signature for the Amazon EC2 instance to register. This signature can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/signature/</code></p>
    */
    inline const Aws::String& GetInstanceIdentityDocumentSignature() const{ return m_instanceIdentityDocumentSignature; }
    /*
     <p>The instance identity document signature for the Amazon EC2 instance to register. This signature can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/signature/</code></p>
    */
    inline void SetInstanceIdentityDocumentSignature(const Aws::String& value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature = value; }

    /*
     <p>The instance identity document signature for the Amazon EC2 instance to register. This signature can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/signature/</code></p>
    */
    inline void SetInstanceIdentityDocumentSignature(const char* value) { m_instanceIdentityDocumentSignatureHasBeenSet = true; m_instanceIdentityDocumentSignature.assign(value); }

    /*
     <p>The instance identity document signature for the Amazon EC2 instance to register. This signature can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/signature/</code></p>
    */
    inline RegisterContainerInstanceRequest&  WithInstanceIdentityDocumentSignature(const Aws::String& value) { SetInstanceIdentityDocumentSignature(value); return *this;}

    /*
     <p>The instance identity document signature for the Amazon EC2 instance to register. This signature can be found by running the following command from the instance: <code>curl http://169.254.169.254/latest/dynamic/instance-identity/signature/</code></p>
    */
    inline RegisterContainerInstanceRequest& WithInstanceIdentityDocumentSignature(const char* value) { SetInstanceIdentityDocumentSignature(value); return *this;}

    /*
     <p>The resources available on the instance.</p>
    */
    inline const Aws::Vector<Resource>& GetTotalResources() const{ return m_totalResources; }
    /*
     <p>The resources available on the instance.</p>
    */
    inline void SetTotalResources(const Aws::Vector<Resource>& value) { m_totalResourcesHasBeenSet = true; m_totalResources = value; }

    /*
     <p>The resources available on the instance.</p>
    */
    inline RegisterContainerInstanceRequest&  WithTotalResources(const Aws::Vector<Resource>& value) { SetTotalResources(value); return *this;}

    /*
     <p>The resources available on the instance.</p>
    */
    inline RegisterContainerInstanceRequest& AddTotalResources(const Resource& value) { m_totalResourcesHasBeenSet = true; m_totalResources.push_back(value); return *this; }

    /*
     <p>The version information for the Amazon ECS container agent and Docker daemon running on the container instance.</p>
    */
    inline const VersionInfo& GetVersionInfo() const{ return m_versionInfo; }
    /*
     <p>The version information for the Amazon ECS container agent and Docker daemon running on the container instance.</p>
    */
    inline void SetVersionInfo(const VersionInfo& value) { m_versionInfoHasBeenSet = true; m_versionInfo = value; }

    /*
     <p>The version information for the Amazon ECS container agent and Docker daemon running on the container instance.</p>
    */
    inline RegisterContainerInstanceRequest&  WithVersionInfo(const VersionInfo& value) { SetVersionInfo(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_instanceIdentityDocument;
    bool m_instanceIdentityDocumentHasBeenSet;
    Aws::String m_instanceIdentityDocumentSignature;
    bool m_instanceIdentityDocumentSignatureHasBeenSet;
    Aws::Vector<Resource> m_totalResources;
    bool m_totalResourcesHasBeenSet;
    VersionInfo m_versionInfo;
    bool m_versionInfoHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
