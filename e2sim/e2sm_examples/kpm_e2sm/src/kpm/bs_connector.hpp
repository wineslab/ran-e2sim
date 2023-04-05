#include <chrono>
#include <iostream>
#include <math.h>
#include <thread>
#include <sys/time.h>

#include "e2sim.hpp"

#ifndef __BS_CONNECTOR_HPP__
#define __BS_CONNECTOR_HPP__

// send dummy data instead of reading BS metrics
#define DEBUG 0
#define LINES_TO_READ 2
#define OAI_PROTOBUF 1

void handleTimer(E2Sim* e2sim, int* timer, long* ric_req_id, long* ric_instance_id,
  long* ran_function_id, long* action_id, uint8_t *indreq_buff, int indreq_buflen);
void periodicDataReport(E2Sim* e2sim, int* timer, long seqNum, long* ric_req_id, long* ric_instance_id,
  long* ran_function_id, long* action_id);
void periodicDataReportOaiProtobuf(E2Sim *e2sim, int *timer, long seqNum, long *ric_req_id, long *ric_instance_id,
  long *ran_function_id, long *action_id);
void log_message(char* message, char* message_type, int len);
void stop_data_reporting_nrt_ric(void);

#endif