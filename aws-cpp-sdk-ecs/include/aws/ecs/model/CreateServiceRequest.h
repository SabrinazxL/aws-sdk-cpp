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
#include <aws/ecs/model/LoadBalancer.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /*
  */
  class AWS_ECS_API CreateServiceRequest : public ECSRequest
  {
  public:
    CreateServiceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to run your service on. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to run your service on. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to run your service on. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to run your service on. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline CreateServiceRequest&  WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that you want to run your service on. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline CreateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /*
     <p>The name of your service. Up to 255 letters (uppercase and lowercase), numbers, hyphens, and underscores are allowed.</p>
    */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    /*
     <p>The name of your service. Up to 255 letters (uppercase and lowercase), numbers, hyphens, and underscores are allowed.</p>
    */
    inline void SetServiceName(const Aws::String& value) { m_serviceName = value; }

    /*
     <p>The name of your service. Up to 255 letters (uppercase and lowercase), numbers, hyphens, and underscores are allowed.</p>
    */
    inline void SetServiceName(const char* value) { m_serviceName.assign(value); }

    /*
     <p>The name of your service. Up to 255 letters (uppercase and lowercase), numbers, hyphens, and underscores are allowed.</p>
    */
    inline CreateServiceRequest&  WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /*
     <p>The name of your service. Up to 255 letters (uppercase and lowercase), numbers, hyphens, and underscores are allowed.</p>
    */
    inline CreateServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

    /*
     <p>The <code>family</code> and <code>revision</code> (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task definition that you want to run in your service.</p>
    */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    /*
     <p>The <code>family</code> and <code>revision</code> (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task definition that you want to run in your service.</p>
    */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinition = value; }

    /*
     <p>The <code>family</code> and <code>revision</code> (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task definition that you want to run in your service.</p>
    */
    inline void SetTaskDefinition(const char* value) { m_taskDefinition.assign(value); }

    /*
     <p>The <code>family</code> and <code>revision</code> (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task definition that you want to run in your service.</p>
    */
    inline CreateServiceRequest&  WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /*
     <p>The <code>family</code> and <code>revision</code> (<code>family:revision</code>) or full Amazon Resource Name (ARN) of the task definition that you want to run in your service.</p>
    */
    inline CreateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

    /*
     <p>A list of load balancer objects, containing the load balancer name, the container name (as it appears in a container definition), and the container port to access from the load balancer.</p>
    */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    /*
     <p>A list of load balancer objects, containing the load balancer name, the container name (as it appears in a container definition), and the container port to access from the load balancer.</p>
    */
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }

    /*
     <p>A list of load balancer objects, containing the load balancer name, the container name (as it appears in a container definition), and the container port to access from the load balancer.</p>
    */
    inline CreateServiceRequest&  WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}

    /*
     <p>A list of load balancer objects, containing the load balancer name, the container name (as it appears in a container definition), and the container port to access from the load balancer.</p>
    */
    inline CreateServiceRequest& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }

    /*
     <p>The number of instantiations of the specified task definition that you would like to place and keep running on your cluster.</p>
    */
    inline long GetDesiredCount() const{ return m_desiredCount; }
    /*
     <p>The number of instantiations of the specified task definition that you would like to place and keep running on your cluster.</p>
    */
    inline void SetDesiredCount(long value) { m_desiredCount = value; }

    /*
     <p>The number of instantiations of the specified task definition that you would like to place and keep running on your cluster.</p>
    */
    inline CreateServiceRequest&  WithDesiredCount(long value) { SetDesiredCount(value); return *this;}

    /*
     <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.</p>
    */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    /*
     <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.</p>
    */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /*
     <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.</p>
    */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /*
     <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.</p>
    */
    inline CreateServiceRequest&  WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /*
     <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. Up to 32 ASCII characters are allowed.</p>
    */
    inline CreateServiceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /*
     <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer on your behalf. This parameter is only required if you are using a load balancer with your service.</p>
    */
    inline const Aws::String& GetRole() const{ return m_role; }
    /*
     <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer on your behalf. This parameter is only required if you are using a load balancer with your service.</p>
    */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /*
     <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer on your behalf. This parameter is only required if you are using a load balancer with your service.</p>
    */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /*
     <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer on your behalf. This parameter is only required if you are using a load balancer with your service.</p>
    */
    inline CreateServiceRequest&  WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /*
     <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows your Amazon ECS container agent to make calls to your load balancer on your behalf. This parameter is only required if you are using a load balancer with your service.</p>
    */
    inline CreateServiceRequest& WithRole(const char* value) { SetRole(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_serviceName;
    Aws::String m_taskDefinition;
    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet;
    long m_desiredCount;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::String m_role;
    bool m_roleHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
