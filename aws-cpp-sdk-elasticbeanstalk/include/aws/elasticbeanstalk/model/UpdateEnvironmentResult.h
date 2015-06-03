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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EnvironmentStatus.h>
#include <aws/elasticbeanstalk/model/EnvironmentHealth.h>
#include <aws/elasticbeanstalk/model/EnvironmentResourcesDescription.h>
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>

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
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    <p>Describes the properties of an environment.</p>
  */
  class AWS_ELASTICBEANSTALK_API UpdateEnvironmentResult
  {
  public:
    UpdateEnvironmentResult();
    UpdateEnvironmentResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateEnvironmentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>The name of this environment.</p>
    */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    /*
     <p>The name of this environment.</p>
    */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentName = value; }

    /*
     <p>The name of this environment.</p>
    */
    inline void SetEnvironmentName(const char* value) { m_environmentName.assign(value); }

    /*
     <p>The name of this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /*
     <p>The name of this environment.</p>
    */
    inline UpdateEnvironmentResult& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    /*
     <p> The ID of this environment. </p>
    */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    /*
     <p> The ID of this environment. </p>
    */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /*
     <p> The ID of this environment. </p>
    */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /*
     <p> The ID of this environment. </p>
    */
    inline UpdateEnvironmentResult&  WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /*
     <p> The ID of this environment. </p>
    */
    inline UpdateEnvironmentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /*
     <p>The name of the application associated with this environment.</p>
    */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    /*
     <p>The name of the application associated with this environment.</p>
    */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /*
     <p>The name of the application associated with this environment.</p>
    */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /*
     <p>The name of the application associated with this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of the application associated with this environment.</p>
    */
    inline UpdateEnvironmentResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /*
     <p>The application version deployed in this environment.</p>
    */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    /*
     <p>The application version deployed in this environment.</p>
    */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabel = value; }

    /*
     <p>The application version deployed in this environment.</p>
    */
    inline void SetVersionLabel(const char* value) { m_versionLabel.assign(value); }

    /*
     <p>The application version deployed in this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /*
     <p>The application version deployed in this environment.</p>
    */
    inline UpdateEnvironmentResult& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

    /*
     <p> The name of the <code>SolutionStack</code> deployed with this environment. </p>
    */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    /*
     <p> The name of the <code>SolutionStack</code> deployed with this environment. </p>
    */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackName = value; }

    /*
     <p> The name of the <code>SolutionStack</code> deployed with this environment. </p>
    */
    inline void SetSolutionStackName(const char* value) { m_solutionStackName.assign(value); }

    /*
     <p> The name of the <code>SolutionStack</code> deployed with this environment. </p>
    */
    inline UpdateEnvironmentResult&  WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /*
     <p> The name of the <code>SolutionStack</code> deployed with this environment. </p>
    */
    inline UpdateEnvironmentResult& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}

    /*
     <p> The name of the configuration template used to originally launch this environment. </p>
    */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    /*
     <p> The name of the configuration template used to originally launch this environment. </p>
    */
    inline void SetTemplateName(const Aws::String& value) { m_templateName = value; }

    /*
     <p> The name of the configuration template used to originally launch this environment. </p>
    */
    inline void SetTemplateName(const char* value) { m_templateName.assign(value); }

    /*
     <p> The name of the configuration template used to originally launch this environment. </p>
    */
    inline UpdateEnvironmentResult&  WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /*
     <p> The name of the configuration template used to originally launch this environment. </p>
    */
    inline UpdateEnvironmentResult& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

    /*
     <p>Describes this environment.</p>
    */
    inline const Aws::String& GetDescription() const{ return m_description; }
    /*
     <p>Describes this environment.</p>
    */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /*
     <p>Describes this environment.</p>
    */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /*
     <p>Describes this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /*
     <p>Describes this environment.</p>
    */
    inline UpdateEnvironmentResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /*
     <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For single-instance environments, the IP address of the instance.</p>
    */
    inline const Aws::String& GetEndpointURL() const{ return m_endpointURL; }
    /*
     <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For single-instance environments, the IP address of the instance.</p>
    */
    inline void SetEndpointURL(const Aws::String& value) { m_endpointURL = value; }

    /*
     <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For single-instance environments, the IP address of the instance.</p>
    */
    inline void SetEndpointURL(const char* value) { m_endpointURL.assign(value); }

    /*
     <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For single-instance environments, the IP address of the instance.</p>
    */
    inline UpdateEnvironmentResult&  WithEndpointURL(const Aws::String& value) { SetEndpointURL(value); return *this;}

    /*
     <p>For load-balanced, autoscaling environments, the URL to the LoadBalancer. For single-instance environments, the IP address of the instance.</p>
    */
    inline UpdateEnvironmentResult& WithEndpointURL(const char* value) { SetEndpointURL(value); return *this;}

    /*
     <p> The URL to the CNAME for this environment. </p>
    */
    inline const Aws::String& GetCNAME() const{ return m_cNAME; }
    /*
     <p> The URL to the CNAME for this environment. </p>
    */
    inline void SetCNAME(const Aws::String& value) { m_cNAME = value; }

    /*
     <p> The URL to the CNAME for this environment. </p>
    */
    inline void SetCNAME(const char* value) { m_cNAME.assign(value); }

    /*
     <p> The URL to the CNAME for this environment. </p>
    */
    inline UpdateEnvironmentResult&  WithCNAME(const Aws::String& value) { SetCNAME(value); return *this;}

    /*
     <p> The URL to the CNAME for this environment. </p>
    */
    inline UpdateEnvironmentResult& WithCNAME(const char* value) { SetCNAME(value); return *this;}

    /*
     <p>The creation date for this environment.</p>
    */
    inline double GetDateCreated() const{ return m_dateCreated; }
    /*
     <p>The creation date for this environment.</p>
    */
    inline void SetDateCreated(double value) { m_dateCreated = value; }

    /*
     <p>The creation date for this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithDateCreated(double value) { SetDateCreated(value); return *this;}

    /*
     <p>The last modified date for this environment.</p>
    */
    inline double GetDateUpdated() const{ return m_dateUpdated; }
    /*
     <p>The last modified date for this environment.</p>
    */
    inline void SetDateUpdated(double value) { m_dateUpdated = value; }

    /*
     <p>The last modified date for this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithDateUpdated(double value) { SetDateUpdated(value); return *this;}

    /*
     <p> The current operational status of the environment: </p> <ul> <li> <code>Launching</code>: Environment is in the process of initial deployment. </li> <li> <code>Updating</code>: Environment is in the process of updating its configuration settings or application version. </li> <li> <code>Ready</code>: Environment is available to have an action performed on it, such as update or terminate. </li> <li> <code>Terminating</code>: Environment is in the shut-down process. </li> <li> <code>Terminated</code>: Environment is not running. </li> </ul>
    */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    /*
     <p> The current operational status of the environment: </p> <ul> <li> <code>Launching</code>: Environment is in the process of initial deployment. </li> <li> <code>Updating</code>: Environment is in the process of updating its configuration settings or application version. </li> <li> <code>Ready</code>: Environment is available to have an action performed on it, such as update or terminate. </li> <li> <code>Terminating</code>: Environment is in the shut-down process. </li> <li> <code>Terminated</code>: Environment is not running. </li> </ul>
    */
    inline void SetStatus(const EnvironmentStatus& value) { m_status = value; }

    /*
     <p> The current operational status of the environment: </p> <ul> <li> <code>Launching</code>: Environment is in the process of initial deployment. </li> <li> <code>Updating</code>: Environment is in the process of updating its configuration settings or application version. </li> <li> <code>Ready</code>: Environment is available to have an action performed on it, such as update or terminate. </li> <li> <code>Terminating</code>: Environment is in the shut-down process. </li> <li> <code>Terminated</code>: Environment is not running. </li> </ul>
    */
    inline UpdateEnvironmentResult&  WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /*
     <p>Indicates if there is an in-progress environment configuration update or application version deployment that you can cancel.</p> <p> <code>true:</code> There is an update in progress. </p> <p> <code>false:</code> There are no updates currently in progress. </p>
    */
    inline bool GetAbortableOperationInProgress() const{ return m_abortableOperationInProgress; }
    /*
     <p>Indicates if there is an in-progress environment configuration update or application version deployment that you can cancel.</p> <p> <code>true:</code> There is an update in progress. </p> <p> <code>false:</code> There are no updates currently in progress. </p>
    */
    inline void SetAbortableOperationInProgress(bool value) { m_abortableOperationInProgress = value; }

    /*
     <p>Indicates if there is an in-progress environment configuration update or application version deployment that you can cancel.</p> <p> <code>true:</code> There is an update in progress. </p> <p> <code>false:</code> There are no updates currently in progress. </p>
    */
    inline UpdateEnvironmentResult&  WithAbortableOperationInProgress(bool value) { SetAbortableOperationInProgress(value); return *this;}

    /*
     <p> Describes the health status of the environment. AWS Elastic Beanstalk indicates the failure levels for a running environment: </p> <enumValues> <value name="Red"> <p> <code>Red</code> : Indicates the environment is not working. </p> </value> <value name="Yellow"> <p> <code>Yellow</code>: Indicates that something is wrong, the application might not be available, but the instances appear running. </p> </value> <value name="Green"> <p> <code>Green</code>: Indicates the environment is healthy and fully functional. </p> </value> </enumValues> <ul> <li> <code>Red</code>: Indicates the environment is not responsive. Occurs when three or more consecutive failures occur for an environment. </li> <li> <code>Yellow</code>: Indicates that something is wrong. Occurs when two consecutive failures occur for an environment. </li> <li> <code>Green</code>: Indicates the environment is healthy and fully functional. </li> <li> <code>Grey</code>: Default health for a new environment. The environment is not fully launched and health checks have not started or health checks are suspended during an <code>UpdateEnvironment</code> or <code>RestartEnvironement</code> request. </li> </ul> <p> Default: <code>Grey</code> </p>
    */
    inline const EnvironmentHealth& GetHealth() const{ return m_health; }
    /*
     <p> Describes the health status of the environment. AWS Elastic Beanstalk indicates the failure levels for a running environment: </p> <enumValues> <value name="Red"> <p> <code>Red</code> : Indicates the environment is not working. </p> </value> <value name="Yellow"> <p> <code>Yellow</code>: Indicates that something is wrong, the application might not be available, but the instances appear running. </p> </value> <value name="Green"> <p> <code>Green</code>: Indicates the environment is healthy and fully functional. </p> </value> </enumValues> <ul> <li> <code>Red</code>: Indicates the environment is not responsive. Occurs when three or more consecutive failures occur for an environment. </li> <li> <code>Yellow</code>: Indicates that something is wrong. Occurs when two consecutive failures occur for an environment. </li> <li> <code>Green</code>: Indicates the environment is healthy and fully functional. </li> <li> <code>Grey</code>: Default health for a new environment. The environment is not fully launched and health checks have not started or health checks are suspended during an <code>UpdateEnvironment</code> or <code>RestartEnvironement</code> request. </li> </ul> <p> Default: <code>Grey</code> </p>
    */
    inline void SetHealth(const EnvironmentHealth& value) { m_health = value; }

    /*
     <p> Describes the health status of the environment. AWS Elastic Beanstalk indicates the failure levels for a running environment: </p> <enumValues> <value name="Red"> <p> <code>Red</code> : Indicates the environment is not working. </p> </value> <value name="Yellow"> <p> <code>Yellow</code>: Indicates that something is wrong, the application might not be available, but the instances appear running. </p> </value> <value name="Green"> <p> <code>Green</code>: Indicates the environment is healthy and fully functional. </p> </value> </enumValues> <ul> <li> <code>Red</code>: Indicates the environment is not responsive. Occurs when three or more consecutive failures occur for an environment. </li> <li> <code>Yellow</code>: Indicates that something is wrong. Occurs when two consecutive failures occur for an environment. </li> <li> <code>Green</code>: Indicates the environment is healthy and fully functional. </li> <li> <code>Grey</code>: Default health for a new environment. The environment is not fully launched and health checks have not started or health checks are suspended during an <code>UpdateEnvironment</code> or <code>RestartEnvironement</code> request. </li> </ul> <p> Default: <code>Grey</code> </p>
    */
    inline UpdateEnvironmentResult&  WithHealth(const EnvironmentHealth& value) { SetHealth(value); return *this;}

    /*
     <p>The description of the AWS resources used by this environment.</p>
    */
    inline const EnvironmentResourcesDescription& GetResources() const{ return m_resources; }
    /*
     <p>The description of the AWS resources used by this environment.</p>
    */
    inline void SetResources(const EnvironmentResourcesDescription& value) { m_resources = value; }

    /*
     <p>The description of the AWS resources used by this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithResources(const EnvironmentResourcesDescription& value) { SetResources(value); return *this;}

    /*
     <p>Describes the current tier of this environment.</p>
    */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }
    /*
     <p>Describes the current tier of this environment.</p>
    */
    inline void SetTier(const EnvironmentTier& value) { m_tier = value; }

    /*
     <p>Describes the current tier of this environment.</p>
    */
    inline UpdateEnvironmentResult&  WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline UpdateEnvironmentResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_environmentName;
    Aws::String m_environmentId;
    Aws::String m_applicationName;
    Aws::String m_versionLabel;
    Aws::String m_solutionStackName;
    Aws::String m_templateName;
    Aws::String m_description;
    Aws::String m_endpointURL;
    Aws::String m_cNAME;
    double m_dateCreated;
    double m_dateUpdated;
    EnvironmentStatus m_status;
    bool m_abortableOperationInProgress;
    EnvironmentHealth m_health;
    EnvironmentResourcesDescription m_resources;
    EnvironmentTier m_tier;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws