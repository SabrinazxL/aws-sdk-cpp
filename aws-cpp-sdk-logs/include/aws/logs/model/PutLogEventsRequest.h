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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/InputLogEvent.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCHLOGS_API PutLogEventsRequest : public CloudWatchLogsRequest
  {
  public:
    PutLogEventsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }
    
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupName = value; }

    
    inline void SetLogGroupName(const char* value) { m_logGroupName.assign(value); }

    
    inline PutLogEventsRequest&  WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    
    inline PutLogEventsRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }
    
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamName = value; }

    
    inline void SetLogStreamName(const char* value) { m_logStreamName.assign(value); }

    
    inline PutLogEventsRequest&  WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    
    inline PutLogEventsRequest& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}

    
    inline const Aws::Vector<InputLogEvent>& GetLogEvents() const{ return m_logEvents; }
    
    inline void SetLogEvents(const Aws::Vector<InputLogEvent>& value) { m_logEvents = value; }

    
    inline PutLogEventsRequest&  WithLogEvents(const Aws::Vector<InputLogEvent>& value) { SetLogEvents(value); return *this;}

    
    inline PutLogEventsRequest& AddLogEvents(const InputLogEvent& value) { m_logEvents.push_back(value); return *this; }

    /*
     <p> A string token that must be obtained from the response of the previous <code class="code">PutLogEvents</code> request. </p>
    */
    inline const Aws::String& GetSequenceToken() const{ return m_sequenceToken; }
    /*
     <p> A string token that must be obtained from the response of the previous <code class="code">PutLogEvents</code> request. </p>
    */
    inline void SetSequenceToken(const Aws::String& value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken = value; }

    /*
     <p> A string token that must be obtained from the response of the previous <code class="code">PutLogEvents</code> request. </p>
    */
    inline void SetSequenceToken(const char* value) { m_sequenceTokenHasBeenSet = true; m_sequenceToken.assign(value); }

    /*
     <p> A string token that must be obtained from the response of the previous <code class="code">PutLogEvents</code> request. </p>
    */
    inline PutLogEventsRequest&  WithSequenceToken(const Aws::String& value) { SetSequenceToken(value); return *this;}

    /*
     <p> A string token that must be obtained from the response of the previous <code class="code">PutLogEvents</code> request. </p>
    */
    inline PutLogEventsRequest& WithSequenceToken(const char* value) { SetSequenceToken(value); return *this;}

  private:
    Aws::String m_logGroupName;
    Aws::String m_logStreamName;
    Aws::Vector<InputLogEvent> m_logEvents;
    Aws::String m_sequenceToken;
    bool m_sequenceTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
