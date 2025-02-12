/***************************************************************************//**
 * @file  zap-command.h
 * @brief This file contains the generated client API
 * This file is generated. Do not update file manually.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_CLUSTER_CLIENT_API
#define SILABS_CLUSTER_CLIENT_API

// This is generated client API

#include "af.h"
#include "zap-id.h"

/**
* @addtogroup command Application Framework command interface Reference
* This document describes the ZCL command interface used by the Silabs
* Application Framework for filling ZCL command buffers.
* @{
*/

// Global, non-cluster-specific Commands

/** @brief Command description for ReadAttributes
*
* Command: ReadAttributes
* @param clusterId EmberAfClusterId
* @param attributeIds uint8_t *
* @param attributeIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReadAttributes(clusterId, \
  attributeIds, attributeIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  attributeIds, attributeIdsLen);

/** @brief Command description for ReadAttributes
*
* Command: ReadAttributes
* @param clusterId EmberAfClusterId
* @param attributeIds uint8_t *
* @param attributeIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReadAttributes(clusterId, \
  attributeIds, attributeIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  attributeIds, attributeIdsLen);
/** @brief Command description for ReadAttributesResponse
*
* Command: ReadAttributesResponse
* @param clusterId EmberAfClusterId
* @param readAttributeStatusRecords uint8_t *
* @param readAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReadAttributesResponse(clusterId, \
  readAttributeStatusRecords, readAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "b", \
							  readAttributeStatusRecords, readAttributeStatusRecordsLen);

/** @brief Command description for ReadAttributesResponse
*
* Command: ReadAttributesResponse
* @param clusterId EmberAfClusterId
* @param readAttributeStatusRecords uint8_t *
* @param readAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReadAttributesResponse(clusterId, \
  readAttributeStatusRecords, readAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "b", \
							  readAttributeStatusRecords, readAttributeStatusRecordsLen);
/** @brief Command description for WriteAttributes
*
* Command: WriteAttributes
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributes(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);

/** @brief Command description for WriteAttributes
*
* Command: WriteAttributes
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributes(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);
/** @brief Command description for WriteAttributesUndivided
*
* Command: WriteAttributesUndivided
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributesUndivided(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_UNDIVIDED_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);

/** @brief Command description for WriteAttributesUndivided
*
* Command: WriteAttributesUndivided
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributesUndivided(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_UNDIVIDED_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);
/** @brief Command description for WriteAttributesResponse
*
* Command: WriteAttributesResponse
* @param clusterId EmberAfClusterId
* @param writeAttributeStatusRecords uint8_t *
* @param writeAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributesResponse(clusterId, \
  writeAttributeStatusRecords, writeAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeAttributeStatusRecords, writeAttributeStatusRecordsLen);

/** @brief Command description for WriteAttributesResponse
*
* Command: WriteAttributesResponse
* @param clusterId EmberAfClusterId
* @param writeAttributeStatusRecords uint8_t *
* @param writeAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributesResponse(clusterId, \
  writeAttributeStatusRecords, writeAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeAttributeStatusRecords, writeAttributeStatusRecordsLen);
/** @brief Command description for WriteAttributesNoResponse
*
* Command: WriteAttributesNoResponse
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributesNoResponse(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_NO_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);

/** @brief Command description for WriteAttributesNoResponse
*
* Command: WriteAttributesNoResponse
* @param clusterId EmberAfClusterId
* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributesNoResponse(clusterId, \
  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_NO_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeAttributeRecords, writeAttributeRecordsLen);
/** @brief Command description for ConfigureReporting
*
* Command: ConfigureReporting
* @param clusterId EmberAfClusterId
* @param configureReportingRecords uint8_t *
* @param configureReportingRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientConfigureReporting(clusterId, \
  configureReportingRecords, configureReportingRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_CONFIGURE_REPORTING_COMMAND_ID, \
                           "b", \
							  configureReportingRecords, configureReportingRecordsLen);

/** @brief Command description for ConfigureReporting
*
* Command: ConfigureReporting
* @param clusterId EmberAfClusterId
* @param configureReportingRecords uint8_t *
* @param configureReportingRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerConfigureReporting(clusterId, \
  configureReportingRecords, configureReportingRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_CONFIGURE_REPORTING_COMMAND_ID, \
                           "b", \
							  configureReportingRecords, configureReportingRecordsLen);
/** @brief Command description for ConfigureReportingResponse
*
* Command: ConfigureReportingResponse
* @param clusterId EmberAfClusterId
* @param configureReportingStatusRecords uint8_t *
* @param configureReportingStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientConfigureReportingResponse(clusterId, \
  configureReportingStatusRecords, configureReportingStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_CONFIGURE_REPORTING_RESPONSE_COMMAND_ID, \
                           "b", \
							  configureReportingStatusRecords, configureReportingStatusRecordsLen);

/** @brief Command description for ConfigureReportingResponse
*
* Command: ConfigureReportingResponse
* @param clusterId EmberAfClusterId
* @param configureReportingStatusRecords uint8_t *
* @param configureReportingStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerConfigureReportingResponse(clusterId, \
  configureReportingStatusRecords, configureReportingStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_CONFIGURE_REPORTING_RESPONSE_COMMAND_ID, \
                           "b", \
							  configureReportingStatusRecords, configureReportingStatusRecordsLen);
/** @brief Command description for ReadReportingConfiguration
*
* Command: ReadReportingConfiguration
* @param clusterId EmberAfClusterId
* @param readReportingConfigurationAttributeRecords uint8_t *
* @param readReportingConfigurationAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReadReportingConfiguration(clusterId, \
  readReportingConfigurationAttributeRecords, readReportingConfigurationAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_READ_REPORTING_CONFIGURATION_COMMAND_ID, \
                           "b", \
							  readReportingConfigurationAttributeRecords, readReportingConfigurationAttributeRecordsLen);

/** @brief Command description for ReadReportingConfiguration
*
* Command: ReadReportingConfiguration
* @param clusterId EmberAfClusterId
* @param readReportingConfigurationAttributeRecords uint8_t *
* @param readReportingConfigurationAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReadReportingConfiguration(clusterId, \
  readReportingConfigurationAttributeRecords, readReportingConfigurationAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_READ_REPORTING_CONFIGURATION_COMMAND_ID, \
                           "b", \
							  readReportingConfigurationAttributeRecords, readReportingConfigurationAttributeRecordsLen);
/** @brief Command description for ReadReportingConfigurationResponse
*
* Command: ReadReportingConfigurationResponse
* @param clusterId EmberAfClusterId
* @param readReportingConfigurationRecords uint8_t *
* @param readReportingConfigurationRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReadReportingConfigurationResponse(clusterId, \
  readReportingConfigurationRecords, readReportingConfigurationRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_READ_REPORTING_CONFIGURATION_RESPONSE_COMMAND_ID, \
                           "b", \
							  readReportingConfigurationRecords, readReportingConfigurationRecordsLen);

/** @brief Command description for ReadReportingConfigurationResponse
*
* Command: ReadReportingConfigurationResponse
* @param clusterId EmberAfClusterId
* @param readReportingConfigurationRecords uint8_t *
* @param readReportingConfigurationRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReadReportingConfigurationResponse(clusterId, \
  readReportingConfigurationRecords, readReportingConfigurationRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_READ_REPORTING_CONFIGURATION_RESPONSE_COMMAND_ID, \
                           "b", \
							  readReportingConfigurationRecords, readReportingConfigurationRecordsLen);
/** @brief Command description for ReportAttributes
*
* Command: ReportAttributes
* @param clusterId EmberAfClusterId
* @param reportAttributeRecords uint8_t *
* @param reportAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReportAttributes(clusterId, \
  reportAttributeRecords, reportAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_REPORT_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  reportAttributeRecords, reportAttributeRecordsLen);

/** @brief Command description for ReportAttributes
*
* Command: ReportAttributes
* @param clusterId EmberAfClusterId
* @param reportAttributeRecords uint8_t *
* @param reportAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReportAttributes(clusterId, \
  reportAttributeRecords, reportAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_REPORT_ATTRIBUTES_COMMAND_ID, \
                           "b", \
							  reportAttributeRecords, reportAttributeRecordsLen);
/** @brief Command description for DefaultResponse
*
* Command: DefaultResponse
* @param clusterId EmberAfClusterId
* @param commandId uint8_t

* @param status uint8_t

*/
#define emberAfFillCommandGlobalServerToClientDefaultResponse(clusterId, \
  commandId,  status) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DEFAULT_RESPONSE_COMMAND_ID, \
                           "uu", \
							  commandId,							  status);

/** @brief Command description for DefaultResponse
*
* Command: DefaultResponse
* @param clusterId EmberAfClusterId
* @param commandId uint8_t

* @param status uint8_t

*/
#define emberAfFillCommandGlobalClientToServerDefaultResponse(clusterId, \
  commandId,  status) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DEFAULT_RESPONSE_COMMAND_ID, \
                           "uu", \
							  commandId,							  status);
/** @brief Command description for DiscoverAttributes
*
* Command: DiscoverAttributes
* @param clusterId EmberAfClusterId
* @param startId uint16_t

* @param maxAttributeIds uint8_t

*/
#define emberAfFillCommandGlobalServerToClientDiscoverAttributes(clusterId, \
  startId,  maxAttributeIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_COMMAND_ID, \
                           "vu", \
							  startId,							  maxAttributeIds);

/** @brief Command description for DiscoverAttributes
*
* Command: DiscoverAttributes
* @param clusterId EmberAfClusterId
* @param startId uint16_t

* @param maxAttributeIds uint8_t

*/
#define emberAfFillCommandGlobalClientToServerDiscoverAttributes(clusterId, \
  startId,  maxAttributeIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_COMMAND_ID, \
                           "vu", \
							  startId,							  maxAttributeIds);
/** @brief Command description for DiscoverAttributesResponse
*
* Command: DiscoverAttributesResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param discoverAttributesInfoRecords uint8_t *
* @param discoverAttributesInfoRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientDiscoverAttributesResponse(clusterId, \
  discoveryComplete,  discoverAttributesInfoRecords, discoverAttributesInfoRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  discoverAttributesInfoRecords, discoverAttributesInfoRecordsLen);

/** @brief Command description for DiscoverAttributesResponse
*
* Command: DiscoverAttributesResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param discoverAttributesInfoRecords uint8_t *
* @param discoverAttributesInfoRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerDiscoverAttributesResponse(clusterId, \
  discoveryComplete,  discoverAttributesInfoRecords, discoverAttributesInfoRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  discoverAttributesInfoRecords, discoverAttributesInfoRecordsLen);
/** @brief Command description for ReadAttributesStructured
*
* Command: ReadAttributesStructured
* @param clusterId EmberAfClusterId
* @param readStructuredAttributeRecords uint8_t *
* @param readStructuredAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientReadAttributesStructured(clusterId, \
  readStructuredAttributeRecords, readStructuredAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_STRUCTURED_COMMAND_ID, \
                           "b", \
							  readStructuredAttributeRecords, readStructuredAttributeRecordsLen);

/** @brief Command description for ReadAttributesStructured
*
* Command: ReadAttributesStructured
* @param clusterId EmberAfClusterId
* @param readStructuredAttributeRecords uint8_t *
* @param readStructuredAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerReadAttributesStructured(clusterId, \
  readStructuredAttributeRecords, readStructuredAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_READ_ATTRIBUTES_STRUCTURED_COMMAND_ID, \
                           "b", \
							  readStructuredAttributeRecords, readStructuredAttributeRecordsLen);
/** @brief Command description for WriteAttributesStructured
*
* Command: WriteAttributesStructured
* @param clusterId EmberAfClusterId
* @param writeStructuredAttributeRecords uint8_t *
* @param writeStructuredAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributesStructured(clusterId, \
  writeStructuredAttributeRecords, writeStructuredAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_STRUCTURED_COMMAND_ID, \
                           "b", \
							  writeStructuredAttributeRecords, writeStructuredAttributeRecordsLen);

/** @brief Command description for WriteAttributesStructured
*
* Command: WriteAttributesStructured
* @param clusterId EmberAfClusterId
* @param writeStructuredAttributeRecords uint8_t *
* @param writeStructuredAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributesStructured(clusterId, \
  writeStructuredAttributeRecords, writeStructuredAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_STRUCTURED_COMMAND_ID, \
                           "b", \
							  writeStructuredAttributeRecords, writeStructuredAttributeRecordsLen);
/** @brief Command description for WriteAttributesStructuredResponse
*
* Command: WriteAttributesStructuredResponse
* @param clusterId EmberAfClusterId
* @param writeStructuredAttributeStatusRecords uint8_t *
* @param writeStructuredAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientWriteAttributesStructuredResponse(clusterId, \
  writeStructuredAttributeStatusRecords, writeStructuredAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_STRUCTURED_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeStructuredAttributeStatusRecords, writeStructuredAttributeStatusRecordsLen);

/** @brief Command description for WriteAttributesStructuredResponse
*
* Command: WriteAttributesStructuredResponse
* @param clusterId EmberAfClusterId
* @param writeStructuredAttributeStatusRecords uint8_t *
* @param writeStructuredAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerWriteAttributesStructuredResponse(clusterId, \
  writeStructuredAttributeStatusRecords, writeStructuredAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_WRITE_ATTRIBUTES_STRUCTURED_RESPONSE_COMMAND_ID, \
                           "b", \
							  writeStructuredAttributeStatusRecords, writeStructuredAttributeStatusRecordsLen);
/** @brief Command description for DiscoverCommandsReceived
*
* Command: DiscoverCommandsReceived
* @param clusterId EmberAfClusterId
* @param startCommandId uint8_t

* @param maxCommandIds uint8_t

*/
#define emberAfFillCommandGlobalServerToClientDiscoverCommandsReceived(clusterId, \
  startCommandId,  maxCommandIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_RECEIVED_COMMAND_ID, \
                           "uu", \
							  startCommandId,							  maxCommandIds);

/** @brief Command description for DiscoverCommandsReceived
*
* Command: DiscoverCommandsReceived
* @param clusterId EmberAfClusterId
* @param startCommandId uint8_t

* @param maxCommandIds uint8_t

*/
#define emberAfFillCommandGlobalClientToServerDiscoverCommandsReceived(clusterId, \
  startCommandId,  maxCommandIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_RECEIVED_COMMAND_ID, \
                           "uu", \
							  startCommandId,							  maxCommandIds);
/** @brief Command description for DiscoverCommandsReceivedResponse
*
* Command: DiscoverCommandsReceivedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param commandIds uint8_t *
* @param commandIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientDiscoverCommandsReceivedResponse(clusterId, \
  discoveryComplete,  commandIds, commandIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_RECEIVED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  commandIds, commandIdsLen);

/** @brief Command description for DiscoverCommandsReceivedResponse
*
* Command: DiscoverCommandsReceivedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param commandIds uint8_t *
* @param commandIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerDiscoverCommandsReceivedResponse(clusterId, \
  discoveryComplete,  commandIds, commandIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_RECEIVED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  commandIds, commandIdsLen);
/** @brief Command description for DiscoverCommandsGenerated
*
* Command: DiscoverCommandsGenerated
* @param clusterId EmberAfClusterId
* @param startCommandId uint8_t

* @param maxCommandIds uint8_t

*/
#define emberAfFillCommandGlobalServerToClientDiscoverCommandsGenerated(clusterId, \
  startCommandId,  maxCommandIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_GENERATED_COMMAND_ID, \
                           "uu", \
							  startCommandId,							  maxCommandIds);

/** @brief Command description for DiscoverCommandsGenerated
*
* Command: DiscoverCommandsGenerated
* @param clusterId EmberAfClusterId
* @param startCommandId uint8_t

* @param maxCommandIds uint8_t

*/
#define emberAfFillCommandGlobalClientToServerDiscoverCommandsGenerated(clusterId, \
  startCommandId,  maxCommandIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_GENERATED_COMMAND_ID, \
                           "uu", \
							  startCommandId,							  maxCommandIds);
/** @brief Command description for DiscoverCommandsGeneratedResponse
*
* Command: DiscoverCommandsGeneratedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param commandIds uint8_t *
* @param commandIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientDiscoverCommandsGeneratedResponse(clusterId, \
  discoveryComplete,  commandIds, commandIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_GENERATED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  commandIds, commandIdsLen);

/** @brief Command description for DiscoverCommandsGeneratedResponse
*
* Command: DiscoverCommandsGeneratedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param commandIds uint8_t *
* @param commandIdsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerDiscoverCommandsGeneratedResponse(clusterId, \
  discoveryComplete,  commandIds, commandIdsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_COMMANDS_GENERATED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  commandIds, commandIdsLen);
/** @brief Command description for DiscoverAttributesExtended
*
* Command: DiscoverAttributesExtended
* @param clusterId EmberAfClusterId
* @param startId uint16_t

* @param maxAttributeIds uint8_t

*/
#define emberAfFillCommandGlobalServerToClientDiscoverAttributesExtended(clusterId, \
  startId,  maxAttributeIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_EXTENDED_COMMAND_ID, \
                           "vu", \
							  startId,							  maxAttributeIds);

/** @brief Command description for DiscoverAttributesExtended
*
* Command: DiscoverAttributesExtended
* @param clusterId EmberAfClusterId
* @param startId uint16_t

* @param maxAttributeIds uint8_t

*/
#define emberAfFillCommandGlobalClientToServerDiscoverAttributesExtended(clusterId, \
  startId,  maxAttributeIds) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_EXTENDED_COMMAND_ID, \
                           "vu", \
							  startId,							  maxAttributeIds);
/** @brief Command description for DiscoverAttributesExtendedResponse
*
* Command: DiscoverAttributesExtendedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param extendedDiscoverAttributesInfoRecords uint8_t *
* @param extendedDiscoverAttributesInfoRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalServerToClientDiscoverAttributesExtendedResponse(clusterId, \
  discoveryComplete,  extendedDiscoverAttributesInfoRecords, extendedDiscoverAttributesInfoRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT ), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_EXTENDED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  extendedDiscoverAttributesInfoRecords, extendedDiscoverAttributesInfoRecordsLen);

/** @brief Command description for DiscoverAttributesExtendedResponse
*
* Command: DiscoverAttributesExtendedResponse
* @param clusterId EmberAfClusterId
* @param discoveryComplete uint8_t

* @param extendedDiscoverAttributesInfoRecords uint8_t *
* @param extendedDiscoverAttributesInfoRecordsLen uint16_t 
*/
#define emberAfFillCommandGlobalClientToServerDiscoverAttributesExtendedResponse(clusterId, \
  discoveryComplete,  extendedDiscoverAttributesInfoRecords, extendedDiscoverAttributesInfoRecordsLen) \
emberAfFillExternalBuffer((ZCL_GLOBAL_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           clusterId, \
                           ZCL_DISCOVER_ATTRIBUTES_EXTENDED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  extendedDiscoverAttributesInfoRecords, extendedDiscoverAttributesInfoRecordsLen);
/** @} END Global Commands */


// Cluster Specific Commands


/** @brief Command that resets all attribute values to factory default.
* Cluster: Basic, Attributes for determining basic information about a device, setting user device information such as location, and enabling a device.
* Command: ResetToFactoryDefaults
*/
#define emberAfFillCommandBasicClusterResetToFactoryDefaults( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BASIC_CLUSTER_ID, \
                           ZCL_RESET_TO_FACTORY_DEFAULTS_COMMAND_ID, \
                           "" \
);



/** @brief This command gets locales supported.
* Cluster: Basic, Attributes for determining basic information about a device, setting user device information such as location, and enabling a device.
* Command: GetLocalesSupported
* @param startLocale uint8_t *

* @param maxLocalesRequested uint8_t

*/
#define emberAfFillCommandBasicClusterGetLocalesSupported( \
  startLocale,  maxLocalesRequested) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BASIC_CLUSTER_ID, \
                           ZCL_GET_LOCALES_SUPPORTED_COMMAND_ID, \
                           "su", \
							  startLocale,							  maxLocalesRequested);



/** @brief The locales supported response command is sent in response to a get locales supported command, and is used to discover which locales the device supports.
* Cluster: Basic, Attributes for determining basic information about a device, setting user device information such as location, and enabling a device.
* Command: GetLocalesSupportedResponse
* @param discoveryComplete uint8_t

* @param localeSupported uint8_t *
* @param localeSupportedLen uint16_t 
*/
#define emberAfFillCommandBasicClusterGetLocalesSupportedResponse( \
  discoveryComplete,  localeSupported, localeSupportedLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_BASIC_CLUSTER_ID, \
                           ZCL_GET_LOCALES_SUPPORTED_RESPONSE_COMMAND_ID, \
                           "ub", \
							  discoveryComplete,							  localeSupported, localeSupportedLen);



/** @brief Command description for Identify
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: Identify
* @param identifyTime uint16_t

*/
#define emberAfFillCommandIdentifyClusterIdentify( \
  identifyTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_IDENTIFY_COMMAND_ID, \
                           "v", \
							  identifyTime);



/** @brief Command description for IdentifyQueryResponse
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: IdentifyQueryResponse
* @param timeout uint16_t

*/
#define emberAfFillCommandIdentifyClusterIdentifyQueryResponse( \
  timeout) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_IDENTIFY_QUERY_RESPONSE_COMMAND_ID, \
                           "v", \
							  timeout);



/** @brief Command description for IdentifyQuery
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: IdentifyQuery
*/
#define emberAfFillCommandIdentifyClusterIdentifyQuery( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_IDENTIFY_QUERY_COMMAND_ID, \
                           "" \
);



/** @brief Invoke EZMode on an Identify Server
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: EZModeInvoke
* @param action uint8_t

*/
#define emberAfFillCommandIdentifyClusterEZModeInvoke( \
  action) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_EZ_MODE_INVOKE_COMMAND_ID, \
                           "u", \
							  action);



/** @brief Update Commission State on the server device.
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: UpdateCommissionState
* @param action uint8_t

* @param commissionStateMask uint8_t

*/
#define emberAfFillCommandIdentifyClusterUpdateCommissionState( \
  action,  commissionStateMask) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_UPDATE_COMMISSION_STATE_COMMAND_ID, \
                           "uu", \
							  action,							  commissionStateMask);



/** @brief Command description for TriggerEffect
* Cluster: Identify, Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
* Command: TriggerEffect
* @param effectId uint8_t

* @param effectVariant uint8_t

*/
#define emberAfFillCommandIdentifyClusterTriggerEffect( \
  effectId,  effectVariant) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IDENTIFY_CLUSTER_ID, \
                           ZCL_TRIGGER_EFFECT_COMMAND_ID, \
                           "uu", \
							  effectId,							  effectVariant);



/** @brief Command description for AddGroup
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: AddGroup
* @param groupId uint16_t

* @param groupName uint8_t *

*/
#define emberAfFillCommandGroupsClusterAddGroup( \
  groupId,  groupName) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_ADD_GROUP_COMMAND_ID, \
                           "vs", \
							  groupId,							  groupName);



/** @brief Command description for AddGroupResponse
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: AddGroupResponse
* @param status uint8_t

* @param groupId uint16_t

*/
#define emberAfFillCommandGroupsClusterAddGroupResponse( \
  status,  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_ADD_GROUP_RESPONSE_COMMAND_ID, \
                           "uv", \
							  status,							  groupId);



/** @brief Command description for ViewGroup
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: ViewGroup
* @param groupId uint16_t

*/
#define emberAfFillCommandGroupsClusterViewGroup( \
  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_VIEW_GROUP_COMMAND_ID, \
                           "v", \
							  groupId);



/** @brief Command description for ViewGroupResponse
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: ViewGroupResponse
* @param status uint8_t

* @param groupId uint16_t

* @param groupName uint8_t *

*/
#define emberAfFillCommandGroupsClusterViewGroupResponse( \
  status,  groupId,  groupName) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_VIEW_GROUP_RESPONSE_COMMAND_ID, \
                           "uvs", \
							  status,							  groupId,							  groupName);



/** @brief Command description for GetGroupMembership
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: GetGroupMembership
* @param groupCount uint8_t

* @param groupList uint8_t *
* @param groupListLen uint16_t 
*/
#define emberAfFillCommandGroupsClusterGetGroupMembership( \
  groupCount,  groupList, groupListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_GET_GROUP_MEMBERSHIP_COMMAND_ID, \
                           "ub", \
							  groupCount,							  groupList, groupListLen);



/** @brief Command description for GetGroupMembershipResponse
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: GetGroupMembershipResponse
* @param capacity uint8_t

* @param groupCount uint8_t

* @param groupList uint8_t *
* @param groupListLen uint16_t 
*/
#define emberAfFillCommandGroupsClusterGetGroupMembershipResponse( \
  capacity,  groupCount,  groupList, groupListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_GET_GROUP_MEMBERSHIP_RESPONSE_COMMAND_ID, \
                           "uub", \
							  capacity,							  groupCount,							  groupList, groupListLen);



/** @brief Command description for RemoveGroup
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: RemoveGroup
* @param groupId uint16_t

*/
#define emberAfFillCommandGroupsClusterRemoveGroup( \
  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_REMOVE_GROUP_COMMAND_ID, \
                           "v", \
							  groupId);



/** @brief Command description for RemoveGroupResponse
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: RemoveGroupResponse
* @param status uint8_t

* @param groupId uint16_t

*/
#define emberAfFillCommandGroupsClusterRemoveGroupResponse( \
  status,  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_REMOVE_GROUP_RESPONSE_COMMAND_ID, \
                           "uv", \
							  status,							  groupId);



/** @brief Command description for RemoveAllGroups
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: RemoveAllGroups
*/
#define emberAfFillCommandGroupsClusterRemoveAllGroups( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_REMOVE_ALL_GROUPS_COMMAND_ID, \
                           "" \
);



/** @brief Command description for AddGroupIfIdentifying
* Cluster: Groups, Attributes and commands for group configuration and manipulation.
* Command: AddGroupIfIdentifying
* @param groupId uint16_t

* @param groupName uint8_t *

*/
#define emberAfFillCommandGroupsClusterAddGroupIfIdentifying( \
  groupId,  groupName) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GROUPS_CLUSTER_ID, \
                           ZCL_ADD_GROUP_IF_IDENTIFYING_COMMAND_ID, \
                           "vs", \
							  groupId,							  groupName);



/** @brief Add a scene to the scene table. Extension field sets are supported, and are inputed as arrays of the form [[cluster ID] [length] [value0...n] ...]
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: AddScene
* @param groupId uint16_t

* @param sceneId uint8_t

* @param transitionTime uint16_t

* @param sceneName uint8_t *

* @param extensionFieldSets uint8_t *
* @param extensionFieldSetsLen uint16_t 
*/
#define emberAfFillCommandScenesClusterAddScene( \
  groupId,  sceneId,  transitionTime,  sceneName,  extensionFieldSets, extensionFieldSetsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ADD_SCENE_COMMAND_ID, \
                           "vuvsb", \
							  groupId,							  sceneId,							  transitionTime,							  sceneName,							  extensionFieldSets, extensionFieldSetsLen);



/** @brief Command description for AddSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: AddSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterAddSceneResponse( \
  status,  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ADD_SCENE_RESPONSE_COMMAND_ID, \
                           "uvu", \
							  status,							  groupId,							  sceneId);



/** @brief Command description for ViewScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: ViewScene
* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterViewScene( \
  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_VIEW_SCENE_COMMAND_ID, \
                           "vu", \
							  groupId,							  sceneId);



/** @brief Command description for ViewSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: ViewSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

* @param transitionTime uint16_t

* @param sceneName uint8_t *

* @param extensionFieldSets uint8_t *
* @param extensionFieldSetsLen uint16_t 
*/
#define emberAfFillCommandScenesClusterViewSceneResponse( \
  status,  groupId,  sceneId,  transitionTime,  sceneName,  extensionFieldSets, extensionFieldSetsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_VIEW_SCENE_RESPONSE_COMMAND_ID, \
                           "uvuvsb", \
							  status,							  groupId,							  sceneId,							  transitionTime,							  sceneName,							  extensionFieldSets, extensionFieldSetsLen);



/** @brief Command description for RemoveScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: RemoveScene
* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterRemoveScene( \
  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_REMOVE_SCENE_COMMAND_ID, \
                           "vu", \
							  groupId,							  sceneId);



/** @brief Command description for RemoveSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: RemoveSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterRemoveSceneResponse( \
  status,  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_REMOVE_SCENE_RESPONSE_COMMAND_ID, \
                           "uvu", \
							  status,							  groupId,							  sceneId);



/** @brief Command description for RemoveAllScenes
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: RemoveAllScenes
* @param groupId uint16_t

*/
#define emberAfFillCommandScenesClusterRemoveAllScenes( \
  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_REMOVE_ALL_SCENES_COMMAND_ID, \
                           "v", \
							  groupId);



/** @brief Command description for RemoveAllScenesResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: RemoveAllScenesResponse
* @param status uint8_t

* @param groupId uint16_t

*/
#define emberAfFillCommandScenesClusterRemoveAllScenesResponse( \
  status,  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_REMOVE_ALL_SCENES_RESPONSE_COMMAND_ID, \
                           "uv", \
							  status,							  groupId);



/** @brief Command description for StoreScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: StoreScene
* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterStoreScene( \
  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_STORE_SCENE_COMMAND_ID, \
                           "vu", \
							  groupId,							  sceneId);



/** @brief Command description for StoreSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: StoreSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterStoreSceneResponse( \
  status,  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_STORE_SCENE_RESPONSE_COMMAND_ID, \
                           "uvu", \
							  status,							  groupId,							  sceneId);



/** @brief Command description for RecallScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: RecallScene
* @param groupId uint16_t

* @param sceneId uint8_t

* @param transitionTime uint16_t

*/
#define emberAfFillCommandScenesClusterRecallScene( \
  groupId,  sceneId,  transitionTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_RECALL_SCENE_COMMAND_ID, \
                           "vuv", \
							  groupId,							  sceneId,							  transitionTime);



/** @brief Command description for GetSceneMembership
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: GetSceneMembership
* @param groupId uint16_t

*/
#define emberAfFillCommandScenesClusterGetSceneMembership( \
  groupId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_GET_SCENE_MEMBERSHIP_COMMAND_ID, \
                           "v", \
							  groupId);



/** @brief Command description for GetSceneMembershipResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: GetSceneMembershipResponse
* @param status uint8_t

* @param capacity uint8_t

* @param groupId uint16_t

* @param sceneCount uint8_t

* @param sceneList uint8_t *
* @param sceneListLen uint16_t 
*/
#define emberAfFillCommandScenesClusterGetSceneMembershipResponse( \
  status,  capacity,  groupId,  sceneCount,  sceneList, sceneListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_GET_SCENE_MEMBERSHIP_RESPONSE_COMMAND_ID, \
                           "uuvub", \
							  status,							  capacity,							  groupId,							  sceneCount,							  sceneList, sceneListLen);



/** @brief Command description for EnhancedAddScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: EnhancedAddScene
* @param groupId uint16_t

* @param sceneId uint8_t

* @param transitionTime uint16_t

* @param sceneName uint8_t *

* @param extensionFieldSets uint8_t *
* @param extensionFieldSetsLen uint16_t 
*/
#define emberAfFillCommandScenesClusterEnhancedAddScene( \
  groupId,  sceneId,  transitionTime,  sceneName,  extensionFieldSets, extensionFieldSetsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ENHANCED_ADD_SCENE_COMMAND_ID, \
                           "vuvsb", \
							  groupId,							  sceneId,							  transitionTime,							  sceneName,							  extensionFieldSets, extensionFieldSetsLen);



/** @brief Command description for EnhancedAddSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: EnhancedAddSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterEnhancedAddSceneResponse( \
  status,  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ENHANCED_ADD_SCENE_RESPONSE_COMMAND_ID, \
                           "uvu", \
							  status,							  groupId,							  sceneId);



/** @brief Command description for EnhancedViewScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: EnhancedViewScene
* @param groupId uint16_t

* @param sceneId uint8_t

*/
#define emberAfFillCommandScenesClusterEnhancedViewScene( \
  groupId,  sceneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ENHANCED_VIEW_SCENE_COMMAND_ID, \
                           "vu", \
							  groupId,							  sceneId);



/** @brief Command description for EnhancedViewSceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: EnhancedViewSceneResponse
* @param status uint8_t

* @param groupId uint16_t

* @param sceneId uint8_t

* @param transitionTime uint16_t

* @param sceneName uint8_t *

* @param extensionFieldSets uint8_t *
* @param extensionFieldSetsLen uint16_t 
*/
#define emberAfFillCommandScenesClusterEnhancedViewSceneResponse( \
  status,  groupId,  sceneId,  transitionTime,  sceneName,  extensionFieldSets, extensionFieldSetsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_ENHANCED_VIEW_SCENE_RESPONSE_COMMAND_ID, \
                           "uvuvsb", \
							  status,							  groupId,							  sceneId,							  transitionTime,							  sceneName,							  extensionFieldSets, extensionFieldSetsLen);



/** @brief Command description for CopyScene
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: CopyScene
* @param mode uint8_t

* @param groupIdFrom uint16_t

* @param sceneIdFrom uint8_t

* @param groupIdTo uint16_t

* @param sceneIdTo uint8_t

*/
#define emberAfFillCommandScenesClusterCopyScene( \
  mode,  groupIdFrom,  sceneIdFrom,  groupIdTo,  sceneIdTo) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_COPY_SCENE_COMMAND_ID, \
                           "uvuvu", \
							  mode,							  groupIdFrom,							  sceneIdFrom,							  groupIdTo,							  sceneIdTo);



/** @brief Command description for CopySceneResponse
* Cluster: Scenes, Attributes and commands for scene configuration and manipulation.
* Command: CopySceneResponse
* @param status uint8_t

* @param groupIdFrom uint16_t

* @param sceneIdFrom uint8_t

*/
#define emberAfFillCommandScenesClusterCopySceneResponse( \
  status,  groupIdFrom,  sceneIdFrom) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SCENES_CLUSTER_ID, \
                           ZCL_COPY_SCENE_RESPONSE_COMMAND_ID, \
                           "uvu", \
							  status,							  groupIdFrom,							  sceneIdFrom);



/** @brief Command description for Off
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: Off
*/
#define emberAfFillCommandOnOffClusterOff( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_OFF_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device off with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOffWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOffWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_OFF_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device off with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOffWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOffWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_OFF_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Command description for On
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: On
*/
#define emberAfFillCommandOnOffClusterOn( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_ON_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device on with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOnWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOnWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device on with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOnWithTransition2
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOnWithTransition2( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4169, \
                           ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION2_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device on with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOnWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOnWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Client command that turns the device on with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificOnWithTransition2
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificOnWithTransition2( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4169, \
                           ZCL_SAMPLE_MFG_SPECIFIC_ON_WITH_TRANSITION2_COMMAND_ID, \
                           "" \
);



/** @brief Command description for Toggle
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: Toggle
*/
#define emberAfFillCommandOnOffClusterToggle( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_TOGGLE_COMMAND_ID, \
                           "" \
);



/** @brief Client command that toggles the device with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificToggleWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificToggleWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Client command that toggles the device with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificToggleWithTransition2
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificToggleWithTransition2( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4169, \
                           ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION2_COMMAND_ID, \
                           "" \
);



/** @brief Client command that toggles the device with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificToggleWithTransition
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificToggleWithTransition( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4098, \
                           ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION_COMMAND_ID, \
                           "" \
);



/** @brief Client command that toggles the device with a transition given
        by the transition time in the Ember Sample transition time attribute.
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: SampleMfgSpecificToggleWithTransition2
*/
#define emberAfFillCommandOnOffClusterSampleMfgSpecificToggleWithTransition2( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                              4169, \
                           ZCL_SAMPLE_MFG_SPECIFIC_TOGGLE_WITH_TRANSITION2_COMMAND_ID, \
                           "" \
);



/** @brief Command description for OffWithEffect
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: OffWithEffect
* @param effectId uint8_t

* @param effectVariant uint8_t

*/
#define emberAfFillCommandOnOffClusterOffWithEffect( \
  effectId,  effectVariant) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_OFF_WITH_EFFECT_COMMAND_ID, \
                           "uu", \
							  effectId,							  effectVariant);



/** @brief Command description for OnWithRecallGlobalScene
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: OnWithRecallGlobalScene
*/
#define emberAfFillCommandOnOffClusterOnWithRecallGlobalScene( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_ON_WITH_RECALL_GLOBAL_SCENE_COMMAND_ID, \
                           "" \
);



/** @brief Command description for OnWithTimedOff
* Cluster: On/off, Attributes and commands for switching devices between 'On' and 'Off' states.
* Command: OnWithTimedOff
* @param onOffControl uint8_t

* @param onTime uint16_t

* @param offWaitTime uint16_t

*/
#define emberAfFillCommandOnOffClusterOnWithTimedOff( \
  onOffControl,  onTime,  offWaitTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ON_OFF_CLUSTER_ID, \
                           ZCL_ON_WITH_TIMED_OFF_COMMAND_ID, \
                           "uvv", \
							  onOffControl,							  onTime,							  offWaitTime);



/** @brief Command description for MoveToLevel
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: MoveToLevel
* @param level uint8_t

* @param transitionTime uint16_t

* @param optionMask uint8_t

* @param optionOverride uint8_t

*/
#define emberAfFillCommandLevelControlClusterMoveToLevel( \
  level,  transitionTime,  optionMask,  optionOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_LEVEL_COMMAND_ID, \
                           "uvuu", \
							  level,							  transitionTime,							  optionMask,							  optionOverride);



/** @brief Command description for Move
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: Move
* @param moveMode uint8_t

* @param rate uint8_t

* @param optionMask uint8_t

* @param optionOverride uint8_t

*/
#define emberAfFillCommandLevelControlClusterMove( \
  moveMode,  rate,  optionMask,  optionOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_COMMAND_ID, \
                           "uuuu", \
							  moveMode,							  rate,							  optionMask,							  optionOverride);



/** @brief Command description for Step
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: Step
* @param stepMode uint8_t

* @param stepSize uint8_t

* @param transitionTime uint16_t

* @param optionMask uint8_t

* @param optionOverride uint8_t

*/
#define emberAfFillCommandLevelControlClusterStep( \
  stepMode,  stepSize,  transitionTime,  optionMask,  optionOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_COMMAND_ID, \
                           "uuvuu", \
							  stepMode,							  stepSize,							  transitionTime,							  optionMask,							  optionOverride);



/** @brief Command description for Stop
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: Stop
* @param optionMask uint8_t

* @param optionOverride uint8_t

*/
#define emberAfFillCommandLevelControlClusterStop( \
  optionMask,  optionOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_STOP_COMMAND_ID, \
                           "uu", \
							  optionMask,							  optionOverride);



/** @brief Command description for MoveToLevelWithOnOff
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: MoveToLevelWithOnOff
* @param level uint8_t

* @param transitionTime uint16_t

*/
#define emberAfFillCommandLevelControlClusterMoveToLevelWithOnOff( \
  level,  transitionTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID, \
                           "uv", \
							  level,							  transitionTime);



/** @brief Command description for MoveWithOnOff
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: MoveWithOnOff
* @param moveMode uint8_t

* @param rate uint8_t

*/
#define emberAfFillCommandLevelControlClusterMoveWithOnOff( \
  moveMode,  rate) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_WITH_ON_OFF_COMMAND_ID, \
                           "uu", \
							  moveMode,							  rate);



/** @brief Command description for StepWithOnOff
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: StepWithOnOff
* @param stepMode uint8_t

* @param stepSize uint8_t

* @param transitionTime uint16_t

*/
#define emberAfFillCommandLevelControlClusterStepWithOnOff( \
  stepMode,  stepSize,  transitionTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_WITH_ON_OFF_COMMAND_ID, \
                           "uuv", \
							  stepMode,							  stepSize,							  transitionTime);



/** @brief Command description for StopWithOnOff
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: StopWithOnOff
*/
#define emberAfFillCommandLevelControlClusterStopWithOnOff( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_STOP_WITH_ON_OFF_COMMAND_ID, \
                           "" \
);



/** @brief Command description for MoveToClosestFrequency
* Cluster: Level Control, Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
* Command: MoveToClosestFrequency
* @param frequency uint16_t

*/
#define emberAfFillCommandLevelControlClusterMoveToClosestFrequency( \
  frequency) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_LEVEL_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_CLOSEST_FREQUENCY_COMMAND_ID, \
                           "v", \
							  frequency);



/** @brief Command description for ResetAlarm
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: ResetAlarm
* @param alarmCode uint8_t

* @param clusterId uint16_t

*/
#define emberAfFillCommandAlarmClusterResetAlarm( \
  alarmCode,  clusterId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_RESET_ALARM_COMMAND_ID, \
                           "uv", \
							  alarmCode,							  clusterId);



/** @brief Command description for Alarm
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: Alarm
* @param alarmCode uint8_t

* @param clusterId uint16_t

*/
#define emberAfFillCommandAlarmClusterAlarm( \
  alarmCode,  clusterId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_ALARM_COMMAND_ID, \
                           "uv", \
							  alarmCode,							  clusterId);



/** @brief Command description for ResetAllAlarms
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: ResetAllAlarms
*/
#define emberAfFillCommandAlarmClusterResetAllAlarms( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_RESET_ALL_ALARMS_COMMAND_ID, \
                           "" \
);



/** @brief Command description for GetAlarmResponse
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: GetAlarmResponse
* @param status uint8_t

* @param alarmCode uint8_t

* @param clusterId uint16_t

* @param timeStamp uint32_t

*/
#define emberAfFillCommandAlarmClusterGetAlarmResponse( \
  status,  alarmCode,  clusterId,  timeStamp) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_GET_ALARM_RESPONSE_COMMAND_ID, \
                           "uuvw", \
							  status,							  alarmCode,							  clusterId,							  timeStamp);



/** @brief Command description for GetAlarm
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: GetAlarm
*/
#define emberAfFillCommandAlarmClusterGetAlarm( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_GET_ALARM_COMMAND_ID, \
                           "" \
);



/** @brief Command description for ResetAlarmLog
* Cluster: Alarms, Attributes and commands for sending notifications and configuring alarm functionality.
* Command: ResetAlarmLog
*/
#define emberAfFillCommandAlarmClusterResetAlarmLog( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ALARM_CLUSTER_ID, \
                           ZCL_RESET_ALARM_LOG_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SetAbsoluteLocation
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: SetAbsoluteLocation
* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

* @param power int16_t

* @param pathLossExponent uint16_t

*/
#define emberAfFillCommandRssiLocationClusterSetAbsoluteLocation( \
  coordinate1,  coordinate2,  coordinate3,  power,  pathLossExponent) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_SET_ABSOLUTE_LOCATION_COMMAND_ID, \
                           "vvvvv", \
							  coordinate1,							  coordinate2,							  coordinate3,							  power,							  pathLossExponent);



/** @brief Command description for DeviceConfigurationResponse
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: DeviceConfigurationResponse
* @param status uint8_t

* @param power int16_t

* @param pathLossExponent uint16_t

* @param calculationPeriod uint16_t

* @param numberRssiMeasurements uint8_t

* @param reportingPeriod uint16_t

*/
#define emberAfFillCommandRssiLocationClusterDeviceConfigurationResponse( \
  status,  power,  pathLossExponent,  calculationPeriod,  numberRssiMeasurements,  reportingPeriod) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_DEVICE_CONFIGURATION_RESPONSE_COMMAND_ID, \
                           "uvvvuv", \
							  status,							  power,							  pathLossExponent,							  calculationPeriod,							  numberRssiMeasurements,							  reportingPeriod);



/** @brief Command description for SetDeviceConfiguration
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: SetDeviceConfiguration
* @param power int16_t

* @param pathLossExponent uint16_t

* @param calculationPeriod uint16_t

* @param numberRssiMeasurements uint8_t

* @param reportingPeriod uint16_t

*/
#define emberAfFillCommandRssiLocationClusterSetDeviceConfiguration( \
  power,  pathLossExponent,  calculationPeriod,  numberRssiMeasurements,  reportingPeriod) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_SET_DEVICE_CONFIGURATION_COMMAND_ID, \
                           "vvvuv", \
							  power,							  pathLossExponent,							  calculationPeriod,							  numberRssiMeasurements,							  reportingPeriod);



/** @brief Command description for LocationDataResponse
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: LocationDataResponse
* @param status uint8_t

* @param locationType uint8_t

* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

* @param power int16_t

* @param pathLossExponent uint16_t

* @param locationMethod uint8_t

* @param qualityMeasure uint8_t

* @param locationAge uint16_t

*/
#define emberAfFillCommandRssiLocationClusterLocationDataResponse( \
  status,  locationType,  coordinate1,  coordinate2,  coordinate3,  power,  pathLossExponent,  locationMethod,  qualityMeasure,  locationAge) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_LOCATION_DATA_RESPONSE_COMMAND_ID, \
                           "uuvvvvvuuv", \
							  status,							  locationType,							  coordinate1,							  coordinate2,							  coordinate3,							  power,							  pathLossExponent,							  locationMethod,							  qualityMeasure,							  locationAge);



/** @brief Command description for GetDeviceConfiguration
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: GetDeviceConfiguration
* @param targetAddress uint8_t *

*/
#define emberAfFillCommandRssiLocationClusterGetDeviceConfiguration( \
  targetAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_GET_DEVICE_CONFIGURATION_COMMAND_ID, \
                           "8", \
							  targetAddress);



/** @brief Command description for LocationDataNotification
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: LocationDataNotification
* @param locationType uint8_t

* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

* @param power int16_t

* @param pathLossExponent uint16_t

* @param locationMethod uint8_t

* @param qualityMeasure uint8_t

* @param locationAge uint16_t

*/
#define emberAfFillCommandRssiLocationClusterLocationDataNotification( \
  locationType,  coordinate1,  coordinate2,  coordinate3,  power,  pathLossExponent,  locationMethod,  qualityMeasure,  locationAge) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_LOCATION_DATA_NOTIFICATION_COMMAND_ID, \
                           "uvvvvvuuv", \
							  locationType,							  coordinate1,							  coordinate2,							  coordinate3,							  power,							  pathLossExponent,							  locationMethod,							  qualityMeasure,							  locationAge);



/** @brief Command description for GetLocationData
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: GetLocationData
* @param flags uint8_t

* @param numberResponses uint8_t

* @param targetAddress uint8_t *

*/
#define emberAfFillCommandRssiLocationClusterGetLocationData( \
  flags,  numberResponses,  targetAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_GET_LOCATION_DATA_COMMAND_ID, \
                           "uu8", \
							  flags,							  numberResponses,							  targetAddress);



/** @brief Command description for CompactLocationDataNotification
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: CompactLocationDataNotification
* @param locationType uint8_t

* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

* @param qualityMeasure uint8_t

* @param locationAge uint16_t

*/
#define emberAfFillCommandRssiLocationClusterCompactLocationDataNotification( \
  locationType,  coordinate1,  coordinate2,  coordinate3,  qualityMeasure,  locationAge) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_COMPACT_LOCATION_DATA_NOTIFICATION_COMMAND_ID, \
                           "uvvvuv", \
							  locationType,							  coordinate1,							  coordinate2,							  coordinate3,							  qualityMeasure,							  locationAge);



/** @brief Command description for RssiResponse
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: RssiResponse
* @param replyingDevice uint8_t *

* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

* @param rssi int8_t

* @param numberRssiMeasurements uint8_t

*/
#define emberAfFillCommandRssiLocationClusterRssiResponse( \
  replyingDevice,  coordinate1,  coordinate2,  coordinate3,  rssi,  numberRssiMeasurements) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_RSSI_RESPONSE_COMMAND_ID, \
                           "8vvvuu", \
							  replyingDevice,							  coordinate1,							  coordinate2,							  coordinate3,							  rssi,							  numberRssiMeasurements);



/** @brief Command description for RssiPing
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: RssiPing
* @param locationType uint8_t

*/
#define emberAfFillCommandRssiLocationClusterRssiPing( \
  locationType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_RSSI_PING_COMMAND_ID, \
                           "u", \
							  locationType);



/** @brief Command description for SendPings
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: SendPings
* @param targetAddress uint8_t *

* @param numberRssiMeasurements uint8_t

* @param calculationPeriod uint16_t

*/
#define emberAfFillCommandRssiLocationClusterSendPings( \
  targetAddress,  numberRssiMeasurements,  calculationPeriod) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_SEND_PINGS_COMMAND_ID, \
                           "8uv", \
							  targetAddress,							  numberRssiMeasurements,							  calculationPeriod);



/** @brief Command description for RssiRequest
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: RssiRequest
*/
#define emberAfFillCommandRssiLocationClusterRssiRequest( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_RSSI_REQUEST_COMMAND_ID, \
                           "" \
);



/** @brief Command description for AnchorNodeAnnounce
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: AnchorNodeAnnounce
* @param anchorNodeIeeeAddress uint8_t *

* @param coordinate1 int16_t

* @param coordinate2 int16_t

* @param coordinate3 int16_t

*/
#define emberAfFillCommandRssiLocationClusterAnchorNodeAnnounce( \
  anchorNodeIeeeAddress,  coordinate1,  coordinate2,  coordinate3) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_ANCHOR_NODE_ANNOUNCE_COMMAND_ID, \
                           "8vvv", \
							  anchorNodeIeeeAddress,							  coordinate1,							  coordinate2,							  coordinate3);



/** @brief Command description for ReportRssiMeasurements
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: ReportRssiMeasurements
* @param measuringDevice uint8_t *

* @param neighbors uint8_t

* @param neighborsInfo uint8_t *
* @param neighborsInfoLen uint16_t 
*/
#define emberAfFillCommandRssiLocationClusterReportRssiMeasurements( \
  measuringDevice,  neighbors,  neighborsInfo, neighborsInfoLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_REPORT_RSSI_MEASUREMENTS_COMMAND_ID, \
                           "8ub", \
							  measuringDevice,							  neighbors,							  neighborsInfo, neighborsInfoLen);



/** @brief Command description for RequestOwnLocation
* Cluster: RSSI Location, Attributes and commands that provide a means for exchanging location information and channel parameters among devices.
* Command: RequestOwnLocation
* @param blindNode uint8_t *

*/
#define emberAfFillCommandRssiLocationClusterRequestOwnLocation( \
  blindNode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_RSSI_LOCATION_CLUSTER_ID, \
                           ZCL_REQUEST_OWN_LOCATION_COMMAND_ID, \
                           "8", \
							  blindNode);



/** @brief Command description for RestartDevice
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: RestartDevice
* @param options uint8_t

* @param delay uint8_t

* @param jitter uint8_t

*/
#define emberAfFillCommandCommissioningClusterRestartDevice( \
  options,  delay,  jitter) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESTART_DEVICE_COMMAND_ID, \
                           "uuu", \
							  options,							  delay,							  jitter);



/** @brief Command description for RestartDeviceResponse
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: RestartDeviceResponse
* @param status uint8_t

*/
#define emberAfFillCommandCommissioningClusterRestartDeviceResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESTART_DEVICE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Command description for SaveStartupParameters
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: SaveStartupParameters
* @param options uint8_t

* @param index uint8_t

*/
#define emberAfFillCommandCommissioningClusterSaveStartupParameters( \
  options,  index) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_SAVE_STARTUP_PARAMETERS_COMMAND_ID, \
                           "uu", \
							  options,							  index);



/** @brief Command description for SaveStartupParametersResponse
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: SaveStartupParametersResponse
* @param status uint8_t

*/
#define emberAfFillCommandCommissioningClusterSaveStartupParametersResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_SAVE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Command description for RestoreStartupParameters
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: RestoreStartupParameters
* @param options uint8_t

* @param index uint8_t

*/
#define emberAfFillCommandCommissioningClusterRestoreStartupParameters( \
  options,  index) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESTORE_STARTUP_PARAMETERS_COMMAND_ID, \
                           "uu", \
							  options,							  index);



/** @brief Command description for RestoreStartupParametersResponse
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: RestoreStartupParametersResponse
* @param status uint8_t

*/
#define emberAfFillCommandCommissioningClusterRestoreStartupParametersResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESTORE_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Command description for ResetStartupParameters
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: ResetStartupParameters
* @param options uint8_t

* @param index uint8_t

*/
#define emberAfFillCommandCommissioningClusterResetStartupParameters( \
  options,  index) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESET_STARTUP_PARAMETERS_COMMAND_ID, \
                           "uu", \
							  options,							  index);



/** @brief Command description for ResetStartupParametersResponse
* Cluster: Commissioning, Attributes and commands for commissioning and managing a ZigBee device.
* Command: ResetStartupParametersResponse
* @param status uint8_t

*/
#define emberAfFillCommandCommissioningClusterResetStartupParametersResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESET_STARTUP_PARAMETERS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief The TransferPartitionedFrame command is used to send a partitioned frame to another Partition cluster.
* Cluster: Partition, Commands and attributes for enabling partitioning of large frame to be carried from other clusters of ZigBee devices.
* Command: TransferPartitionedFrame
* @param fragmentationOptions uint8_t

* @param partitionedIndicatorAndFrame uint8_t *
* @param partitionedIndicatorAndFrameLen uint16_t 
*/
#define emberAfFillCommandPartitionClusterTransferPartitionedFrame( \
  fragmentationOptions,  partitionedIndicatorAndFrame, partitionedIndicatorAndFrameLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PARTITION_CLUSTER_ID, \
                           ZCL_TRANSFER_PARTITIONED_FRAME_COMMAND_ID, \
                           "ub", \
							  fragmentationOptions,							  partitionedIndicatorAndFrame, partitionedIndicatorAndFrameLen);



/** @brief MultipleACK command.
* Cluster: Partition, Commands and attributes for enabling partitioning of large frame to be carried from other clusters of ZigBee devices.
* Command: MultipleAck
* @param ackOptions uint8_t

* @param firstFrameIdAndNackList uint8_t *
* @param firstFrameIdAndNackListLen uint16_t 
*/
#define emberAfFillCommandPartitionClusterMultipleAck( \
  ackOptions,  firstFrameIdAndNackList, firstFrameIdAndNackListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PARTITION_CLUSTER_ID, \
                           ZCL_MULTIPLE_ACK_COMMAND_ID, \
                           "ub", \
							  ackOptions,							  firstFrameIdAndNackList, firstFrameIdAndNackListLen);



/** @brief The ReadHandshakeParam command is used in order to read the appropriate set of parameters for each transaction to be performed by the Partition Cluster.
* Cluster: Partition, Commands and attributes for enabling partitioning of large frame to be carried from other clusters of ZigBee devices.
* Command: ReadHandshakeParam
* @param partitionedClusterId uint16_t

* @param attributeList uint8_t *
* @param attributeListLen uint16_t 
*/
#define emberAfFillCommandPartitionClusterReadHandshakeParam( \
  partitionedClusterId,  attributeList, attributeListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PARTITION_CLUSTER_ID, \
                           ZCL_READ_HANDSHAKE_PARAM_COMMAND_ID, \
                           "vb", \
							  partitionedClusterId,							  attributeList, attributeListLen);



/** @brief The ReadHandshakeParamResponse command is used in order to response to the corresponding ReadHandshakeParam command in order to communicate the appropriate set of parameters configured for each transaction to be performed by the Partition Cluster.
* Cluster: Partition, Commands and attributes for enabling partitioning of large frame to be carried from other clusters of ZigBee devices.
* Command: ReadHandshakeParamResponse
* @param partitionedClusterId uint16_t

* @param readAttributeStatusRecords uint8_t *
* @param readAttributeStatusRecordsLen uint16_t 
*/
#define emberAfFillCommandPartitionClusterReadHandshakeParamResponse( \
  partitionedClusterId,  readAttributeStatusRecords, readAttributeStatusRecordsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PARTITION_CLUSTER_ID, \
                           ZCL_READ_HANDSHAKE_PARAM_RESPONSE_COMMAND_ID, \
                           "vb", \
							  partitionedClusterId,							  readAttributeStatusRecords, readAttributeStatusRecordsLen);



/** @brief The WriteHandshakeParam command is used during the handshake phase in order to write the appropriate parameters for each transaction to be performed by the Partition Cluster.
* Cluster: Partition, Commands and attributes for enabling partitioning of large frame to be carried from other clusters of ZigBee devices.
* Command: WriteHandshakeParam
* @param partitionedClusterId uint16_t

* @param writeAttributeRecords uint8_t *
* @param writeAttributeRecordsLen uint16_t 
*/
#define emberAfFillCommandPartitionClusterWriteHandshakeParam( \
  partitionedClusterId,  writeAttributeRecords, writeAttributeRecordsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PARTITION_CLUSTER_ID, \
                           ZCL_WRITE_HANDSHAKE_PARAM_COMMAND_ID, \
                           "vb", \
							  partitionedClusterId,							  writeAttributeRecords, writeAttributeRecordsLen);



/** @brief This command is generated when the upgrade server wishes to notify the clients of the available OTA upgrade image.  The command can be sent as unicast which provides a way for the server to force the upgrade on the client.  The command can also be sent as broadcast or multicast to certain class of clients (for example, the ones that have matching manufacturing and device ids).
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: ImageNotify
* @param payloadType uint8_t

* @param queryJitter uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param newFileVersion uint32_t

*/
#define emberAfFillCommandOtaBootloadClusterImageNotify( \
  payloadType,  queryJitter,  manufacturerId,  imageType,  newFileVersion) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_IMAGE_NOTIFY_COMMAND_ID, \
                           "uuvvw", \
							  payloadType,							  queryJitter,							  manufacturerId,							  imageType,							  newFileVersion);



/** @brief This command is generated upon receipt of an Image Notify command to indicate that the client is looking for the next firmware image to upgrade to.  The client may also choose to send the command periodically to the server.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: QueryNextImageRequest
* @param fieldControl uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param currentFileVersion uint32_t

* @param hardwareVersion uint16_t

*/
#define emberAfFillCommandOtaBootloadClusterQueryNextImageRequest( \
  fieldControl,  manufacturerId,  imageType,  currentFileVersion,  hardwareVersion) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_QUERY_NEXT_IMAGE_REQUEST_COMMAND_ID, \
                           "uvvwv", \
							  fieldControl,							  manufacturerId,							  imageType,							  currentFileVersion,							  hardwareVersion);



/** @brief This command is generated upon receipt of an QueryNextImageRequest command to response whether the server has a valid OTA upgrade image for the client or not.  If the server has the file, information regarding the file and OTA upgrade process will be included in the command.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: QueryNextImageResponse
* @param status uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param imageSize uint32_t

*/
#define emberAfFillCommandOtaBootloadClusterQueryNextImageResponse( \
  status,  manufacturerId,  imageType,  fileVersion,  imageSize) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_QUERY_NEXT_IMAGE_RESPONSE_COMMAND_ID, \
                           "uvvww", \
							  status,							  manufacturerId,							  imageType,							  fileVersion,							  imageSize);



/** @brief This command is generated by the client to request blocks of OTA upgrade file data.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: ImageBlockRequest
* @param fieldControl uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param fileOffset uint32_t

* @param maxDataSize uint8_t

* @param requestNodeAddress uint8_t *

*/
#define emberAfFillCommandOtaBootloadClusterImageBlockRequest( \
  fieldControl,  manufacturerId,  imageType,  fileVersion,  fileOffset,  maxDataSize,  requestNodeAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_IMAGE_BLOCK_REQUEST_COMMAND_ID, \
                           "uvvwwu8", \
							  fieldControl,							  manufacturerId,							  imageType,							  fileVersion,							  fileOffset,							  maxDataSize,							  requestNodeAddress);



/** @brief This command is generated by the client to request pages of OTA upgrade file data. A page would contain multiple blocks of data.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: ImagePageRequest
* @param fieldControl uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param fileOffset uint32_t

* @param maxDataSize uint8_t

* @param pageSize uint16_t

* @param responseSpacing uint16_t

* @param requestNodeAddress uint8_t *

*/
#define emberAfFillCommandOtaBootloadClusterImagePageRequest( \
  fieldControl,  manufacturerId,  imageType,  fileVersion,  fileOffset,  maxDataSize,  pageSize,  responseSpacing,  requestNodeAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_IMAGE_PAGE_REQUEST_COMMAND_ID, \
                           "uvvwwuvv8", \
							  fieldControl,							  manufacturerId,							  imageType,							  fileVersion,							  fileOffset,							  maxDataSize,							  pageSize,							  responseSpacing,							  requestNodeAddress);



/** @brief This command is generated by the server in response to the block or page request command.  If the server has the data available, it will reply back with a SUCCESS status.  For other error cases, it may reply with status WAIT_FOR_DATA (server does not have the data available yet) or ABORT (invalid requested parameters or other failure cases).
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: ImageBlockResponse
* @param status uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param fileOffset uint32_t

* @param dataSize uint8_t

* @param imageData uint8_t *
* @param imageDataLen uint16_t 
*/
#define emberAfFillCommandOtaBootloadClusterImageBlockResponse( \
  status,  manufacturerId,  imageType,  fileVersion,  fileOffset,  dataSize,  imageData, imageDataLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_IMAGE_BLOCK_RESPONSE_COMMAND_ID, \
                           "uvvwwub", \
							  status,							  manufacturerId,							  imageType,							  fileVersion,							  fileOffset,							  dataSize,							  imageData, imageDataLen);



/** @brief This command is generated by the client to notify the server of the end of the upgrade process.  The process may end with success or error status.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: UpgradeEndRequest
* @param status uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

*/
#define emberAfFillCommandOtaBootloadClusterUpgradeEndRequest( \
  status,  manufacturerId,  imageType,  fileVersion) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_UPGRADE_END_REQUEST_COMMAND_ID, \
                           "uvvw", \
							  status,							  manufacturerId,							  imageType,							  fileVersion);



/** @brief This command is generated by the server in response to the upgrade request in order to let the client know when to upgrade to running new firmware image.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: UpgradeEndResponse
* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param currentTime uint32_t

* @param upgradeTime uint32_t

*/
#define emberAfFillCommandOtaBootloadClusterUpgradeEndResponse( \
  manufacturerId,  imageType,  fileVersion,  currentTime,  upgradeTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_UPGRADE_END_RESPONSE_COMMAND_ID, \
                           "vvwww", \
							  manufacturerId,							  imageType,							  fileVersion,							  currentTime,							  upgradeTime);



/** @brief This command is generated by the client to request a file that is specific to itself.  The intention is to provide a way for the client to request non-OTA upgrade file.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: QuerySpecificFileRequest
* @param requestNodeAddress uint8_t *

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param currentZigbeeStackVersion uint16_t

*/
#define emberAfFillCommandOtaBootloadClusterQuerySpecificFileRequest( \
  requestNodeAddress,  manufacturerId,  imageType,  fileVersion,  currentZigbeeStackVersion) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_QUERY_SPECIFIC_FILE_REQUEST_COMMAND_ID, \
                           "8vvwv", \
							  requestNodeAddress,							  manufacturerId,							  imageType,							  fileVersion,							  currentZigbeeStackVersion);



/** @brief This command is generated upon receipt of an QuerySpecificFileRequest command to response whether the server has a valid file for the client or not.  If the server has the file, information regarding the file and OTA process will be included in the command.
* Cluster: Over the Air Bootloading, This cluster contains commands and attributes that act as an interface for ZigBee Over-the-air bootloading.
* Command: QuerySpecificFileResponse
* @param status uint8_t

* @param manufacturerId uint16_t

* @param imageType uint16_t

* @param fileVersion uint32_t

* @param imageSize uint32_t

*/
#define emberAfFillCommandOtaBootloadClusterQuerySpecificFileResponse( \
  status,  manufacturerId,  imageType,  fileVersion,  imageSize) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_BOOTLOAD_CLUSTER_ID, \
                           ZCL_QUERY_SPECIFIC_FILE_RESPONSE_COMMAND_ID, \
                           "uvvww", \
							  status,							  manufacturerId,							  imageType,							  fileVersion,							  imageSize);



/** @brief The PowerProfileRequest Command is generated by a device supporting the client side of the Power Profile cluster in order to request the Power Profile of a server device.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileRequest
* @param powerProfileId uint8_t

*/
#define emberAfFillCommandPowerProfileClusterPowerProfileRequest( \
  powerProfileId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_REQUEST_COMMAND_ID, \
                           "u", \
							  powerProfileId);



/** @brief The PowerProfileNotification Command is generated by a device supporting the server side of the Power Profile cluster in order to send the information of the specific parameters (such as Peak power and others) belonging to each phase.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileNotification
* @param totalProfileNum uint8_t

* @param powerProfileId uint8_t

* @param numOfTransferredPhases uint8_t

* @param transferredPhases uint8_t *
* @param transferredPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterPowerProfileNotification( \
  totalProfileNum,  powerProfileId,  numOfTransferredPhases,  transferredPhases, transferredPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_NOTIFICATION_COMMAND_ID, \
                           "uuub", \
							  totalProfileNum,							  powerProfileId,							  numOfTransferredPhases,							  transferredPhases, transferredPhasesLen);



/** @brief The PowerProfileStateRequest Command is generated in order to retrieve the identifiers of current Power Profiles.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileStateRequest
*/
#define emberAfFillCommandPowerProfileClusterPowerProfileStateRequest( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_STATE_REQUEST_COMMAND_ID, \
                           "" \
);



/** @brief This command is generated by the server side of Power Profile cluster as a reply to the PowerProfileRequest command.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileResponse
* @param totalProfileNum uint8_t

* @param powerProfileId uint8_t

* @param numOfTransferredPhases uint8_t

* @param transferredPhases uint8_t *
* @param transferredPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterPowerProfileResponse( \
  totalProfileNum,  powerProfileId,  numOfTransferredPhases,  transferredPhases, transferredPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_RESPONSE_COMMAND_ID, \
                           "uuub", \
							  totalProfileNum,							  powerProfileId,							  numOfTransferredPhases,							  transferredPhases, transferredPhasesLen);



/** @brief The GetPowerProfilePriceResponse command allows a device (client) to communicate the cost associated to the selected Power Profile to another device (server) requesting it.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetPowerProfilePriceResponse
* @param powerProfileId uint8_t

* @param currency uint16_t

* @param price uint32_t

* @param priceTrailingDigit uint8_t

*/
#define emberAfFillCommandPowerProfileClusterGetPowerProfilePriceResponse( \
  powerProfileId,  currency,  price,  priceTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_POWER_PROFILE_PRICE_RESPONSE_COMMAND_ID, \
                           "uvwu", \
							  powerProfileId,							  currency,							  price,							  priceTrailingDigit);



/** @brief The PowerProfileStateResponse command allows a device (server) to communicate its current Power Profile(s) to another device (client) that previously requested them.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileStateResponse
* @param powerProfileCount uint8_t

* @param powerProfileRecords uint8_t *
* @param powerProfileRecordsLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterPowerProfileStateResponse( \
  powerProfileCount,  powerProfileRecords, powerProfileRecordsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_STATE_RESPONSE_COMMAND_ID, \
                           "ub", \
							  powerProfileCount,							  powerProfileRecords, powerProfileRecordsLen);



/** @brief The GetOverallSchedulePriceResponse command allows a device (client) to communicate the overall cost associated to all Power Profiles scheduled to another device (server) requesting it.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetOverallSchedulePriceResponse
* @param currency uint16_t

* @param price uint32_t

* @param priceTrailingDigit uint8_t

*/
#define emberAfFillCommandPowerProfileClusterGetOverallSchedulePriceResponse( \
  currency,  price,  priceTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_OVERALL_SCHEDULE_PRICE_RESPONSE_COMMAND_ID, \
                           "vwu", \
							  currency,							  price,							  priceTrailingDigit);



/** @brief The GetPowerProfilePrice Command is generated by the server (e.g. White goods) in order to retrieve the cost associated to a specific Power profile.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetPowerProfilePrice
* @param powerProfileId uint8_t

*/
#define emberAfFillCommandPowerProfileClusterGetPowerProfilePrice( \
  powerProfileId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_POWER_PROFILE_PRICE_COMMAND_ID, \
                           "u", \
							  powerProfileId);



/** @brief The EnergyPhasesScheduleNotification Command is generated by a device supporting the client side of the Power Profile cluster in order to schedule the start of the selected Power Profile and its phases.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleNotification
* @param powerProfileId uint8_t

* @param numOfScheduledPhases uint8_t

* @param scheduledPhases uint8_t *
* @param scheduledPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleNotification( \
  powerProfileId,  numOfScheduledPhases,  scheduledPhases, scheduledPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_NOTIFICATION_COMMAND_ID, \
                           "uub", \
							  powerProfileId,							  numOfScheduledPhases,							  scheduledPhases, scheduledPhasesLen);



/** @brief The PowerProfileStateNotification Command is generated by the server (e.g. White goods) in order to update the state of the power profile and the current energy phase.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfilesStateNotification
* @param powerProfileCount uint8_t

* @param powerProfileRecords uint8_t *
* @param powerProfileRecordsLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterPowerProfilesStateNotification( \
  powerProfileCount,  powerProfileRecords, powerProfileRecordsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILES_STATE_NOTIFICATION_COMMAND_ID, \
                           "ub", \
							  powerProfileCount,							  powerProfileRecords, powerProfileRecordsLen);



/** @brief This command is generated by the client side of Power Profile cluster as a reply to the EnergyPhasesScheduleRequest command.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleResponse
* @param powerProfileId uint8_t

* @param numOfScheduledPhases uint8_t

* @param scheduledPhases uint8_t *
* @param scheduledPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleResponse( \
  powerProfileId,  numOfScheduledPhases,  scheduledPhases, scheduledPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "uub", \
							  powerProfileId,							  numOfScheduledPhases,							  scheduledPhases, scheduledPhasesLen);



/** @brief The GetOverallSchedulePrice Command is generated by the server (e.g. White goods) in order to retrieve the overall cost associated to all the Power Profiles scheduled by the scheduler (the device supporting the Power Profile cluster client side) for the next 24 hours.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetOverallSchedulePrice
*/
#define emberAfFillCommandPowerProfileClusterGetOverallSchedulePrice( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_OVERALL_SCHEDULE_PRICE_COMMAND_ID, \
                           "" \
);



/** @brief The PowerProfileScheduleConstraintsRequest Command is generated by a device supporting the client side of the Power Profile cluster in order to request the constraints -if set- of Power Profile of a client device, in order to set the proper boundaries for the scheduling when calculating the schedules.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileScheduleConstraintsRequest
* @param powerProfileId uint8_t

*/
#define emberAfFillCommandPowerProfileClusterPowerProfileScheduleConstraintsRequest( \
  powerProfileId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_REQUEST_COMMAND_ID, \
                           "u", \
							  powerProfileId);



/** @brief The EnergyPhasesScheduleRequest Command is generated by the server (e.g. White goods) in order to retrieve from the scheduler (e.g. Home Gateway) the schedule (if available) associated to the specific Power Profile carried in the payload.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleRequest
* @param powerProfileId uint8_t

*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleRequest( \
  powerProfileId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_REQUEST_COMMAND_ID, \
                           "u", \
							  powerProfileId);



/** @brief The EnergyPhasesScheduleStateRequest  Command is generated by a device supporting the client side of the Power Profile cluster to check the states of the scheduling of a power profile, which is supported in the device implementing the server side of Power Profile cluster.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleStateRequest
* @param powerProfileId uint8_t

*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleStateRequest( \
  powerProfileId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_STATE_REQUEST_COMMAND_ID, \
                           "u", \
							  powerProfileId);



/** @brief The EnergyPhasesScheduleStateResponse Command is generated by the server (e.g. White goods) in order to reply to a EnergyPhasesScheduleStateRequest command about the scheduling states that are set in the server side.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleStateResponse
* @param powerProfileId uint8_t

* @param numOfScheduledPhases uint8_t

* @param scheduledPhases uint8_t *
* @param scheduledPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleStateResponse( \
  powerProfileId,  numOfScheduledPhases,  scheduledPhases, scheduledPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_STATE_RESPONSE_COMMAND_ID, \
                           "uub", \
							  powerProfileId,							  numOfScheduledPhases,							  scheduledPhases, scheduledPhasesLen);



/** @brief The Get Power Profile Price Extended Response command allows a device (client) to communicate the cost associated to all Power Profiles scheduled to another device (server) requesting it according to the specific options contained in the Get Power Profile Price Extended Response.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetPowerProfilePriceExtendedResponse
* @param powerProfileId uint8_t

* @param currency uint16_t

* @param price uint32_t

* @param priceTrailingDigit uint8_t

*/
#define emberAfFillCommandPowerProfileClusterGetPowerProfilePriceExtendedResponse( \
  powerProfileId,  currency,  price,  priceTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_RESPONSE_COMMAND_ID, \
                           "uvwu", \
							  powerProfileId,							  currency,							  price,							  priceTrailingDigit);



/** @brief The EnergyPhasesScheduleStateNotification Command is generated by the server (e.g. White goods) in order to notify (un-solicited command) a client side about the scheduling states that are set in the server side.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: EnergyPhasesScheduleStateNotification
* @param powerProfileId uint8_t

* @param numOfScheduledPhases uint8_t

* @param scheduledPhases uint8_t *
* @param scheduledPhasesLen uint16_t 
*/
#define emberAfFillCommandPowerProfileClusterEnergyPhasesScheduleStateNotification( \
  powerProfileId,  numOfScheduledPhases,  scheduledPhases, scheduledPhasesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_ENERGY_PHASES_SCHEDULE_STATE_NOTIFICATION_COMMAND_ID, \
                           "uub", \
							  powerProfileId,							  numOfScheduledPhases,							  scheduledPhases, scheduledPhasesLen);



/** @brief The PowerProfileScheduleConstraintsNotification Command is generated by a device supporting the server side of the Power Profile cluster to notify the client side of this cluster about the imposed constraints and let the scheduler (i.e. the entity supporting the Power Profile cluster client side) to set the proper boundaries for the scheduling.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileScheduleConstraintsNotification
* @param powerProfileId uint8_t

* @param startAfter uint16_t

* @param stopBefore uint16_t

*/
#define emberAfFillCommandPowerProfileClusterPowerProfileScheduleConstraintsNotification( \
  powerProfileId,  startAfter,  stopBefore) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_NOTIFICATION_COMMAND_ID, \
                           "uvv", \
							  powerProfileId,							  startAfter,							  stopBefore);



/** @brief The PowerProfileScheduleConstraintsResponse Command is generated by a device supporting the server side of the Power Profile cluster to reply to a client side of this cluster which sent a PowerProfileScheduleConstraintsRequest.
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: PowerProfileScheduleConstraintsResponse
* @param powerProfileId uint8_t

* @param startAfter uint16_t

* @param stopBefore uint16_t

*/
#define emberAfFillCommandPowerProfileClusterPowerProfileScheduleConstraintsResponse( \
  powerProfileId,  startAfter,  stopBefore) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_POWER_PROFILE_SCHEDULE_CONSTRAINTS_RESPONSE_COMMAND_ID, \
                           "uvv", \
							  powerProfileId,							  startAfter,							  stopBefore);



/** @brief The Get Power Profile Price Extended command is generated by the server (e.g., White Goods) in order to retrieve the cost associated to a specific Power profile considering specific conditions described in the option field (e.g., a specific time).
* Cluster: Power Profile, This cluster provides an interface for transferring power profile information from a device (e.g. Whitegood) to a controller (e.g. the Home Gateway).  The Power Profile transferred can be solicited by client side (request command) or can be notified directly from the device (server side).
* Command: GetPowerProfilePriceExtended
* @param options uint8_t

* @param powerProfileId uint8_t

* @param powerProfileStartTime uint16_t

*/
#define emberAfFillCommandPowerProfileClusterGetPowerProfilePriceExtended( \
  options,  powerProfileId,  powerProfileStartTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POWER_PROFILE_CLUSTER_ID, \
                           ZCL_GET_POWER_PROFILE_PRICE_EXTENDED_COMMAND_ID, \
                           "uuv", \
							  options,							  powerProfileId,							  powerProfileStartTime);



/** @brief This basic message is used to remotely control and to program household appliances.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: ExecutionOfACommand
* @param commandId uint8_t

*/
#define emberAfFillCommandApplianceControlClusterExecutionOfACommand( \
  commandId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_EXECUTION_OF_A_COMMAND_COMMAND_ID, \
                           "u", \
							  commandId);



/** @brief This command shall be used to return household appliance status, according to Appliance Status Values and Remote Enable Flags Values.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: SignalStateResponse
* @param applianceStatus uint8_t

* @param remoteEnableFlagsAndDeviceStatus2 uint8_t

* @param applianceStatus2 uint32_t

*/
#define emberAfFillCommandApplianceControlClusterSignalStateResponse( \
  applianceStatus,  remoteEnableFlagsAndDeviceStatus2,  applianceStatus2) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_SIGNAL_STATE_RESPONSE_COMMAND_ID, \
                           "uux", \
							  applianceStatus,							  remoteEnableFlagsAndDeviceStatus2,							  applianceStatus2);



/** @brief This basic message is used to retrieve Household Appliances status.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: SignalState
*/
#define emberAfFillCommandApplianceControlClusterSignalState( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_SIGNAL_STATE_COMMAND_ID, \
                           "" \
);



/** @brief This command shall be used to return household appliance status, automatically when appliance status changes.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: SignalStateNotification
* @param applianceStatus uint8_t

* @param remoteEnableFlagsAndDeviceStatus2 uint8_t

* @param applianceStatus2 uint32_t

*/
#define emberAfFillCommandApplianceControlClusterSignalStateNotification( \
  applianceStatus,  remoteEnableFlagsAndDeviceStatus2,  applianceStatus2) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_SIGNAL_STATE_NOTIFICATION_COMMAND_ID, \
                           "uux", \
							  applianceStatus,							  remoteEnableFlagsAndDeviceStatus2,							  applianceStatus2);



/** @brief This basic message is used to set appliance functions, i.e. information regarding the execution of an appliance cycle.  Condition parameters such as start time or finish time information could be provided through this command.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: WriteFunctions
* @param functionId uint16_t

* @param functionDataType uint8_t

* @param functionData uint8_t *
* @param functionDataLen uint16_t 
*/
#define emberAfFillCommandApplianceControlClusterWriteFunctions( \
  functionId,  functionDataType,  functionData, functionDataLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_WRITE_FUNCTIONS_COMMAND_ID, \
                           "vub", \
							  functionId,							  functionDataType,							  functionData, functionDataLen);



/** @brief This command shall be used to resume the normal behavior of a household appliance being in pause mode after receiving a Overload Pause command.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: OverloadPauseResume
*/
#define emberAfFillCommandApplianceControlClusterOverloadPauseResume( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_OVERLOAD_PAUSE_RESUME_COMMAND_ID, \
                           "" \
);



/** @brief This command shall be used to pause the household appliance as a consequence of an imminent overload event.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: OverloadPause
*/
#define emberAfFillCommandApplianceControlClusterOverloadPause( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_OVERLOAD_PAUSE_COMMAND_ID, \
                           "" \
);



/** @brief This basic message is used to send warnings the household appliance as a consequence of a possible overload event, or the notification of the end of the warning state.
* Cluster: Appliance Control, This cluster provides an interface to remotely control and to program household appliances.
* Command: OverloadWarning
* @param warningEvent uint8_t

*/
#define emberAfFillCommandApplianceControlClusterOverloadWarning( \
  warningEvent) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_CONTROL_CLUSTER_ID, \
                           ZCL_OVERLOAD_WARNING_COMMAND_ID, \
                           "u", \
							  warningEvent);



/** @brief The Poll Control Cluster server sends out a Check-in command to the devices to which it is paired based on the server's Check-in Interval attribute.
* Cluster: Poll Control, This cluster provides a mechanism for the management of an end device's MAC Data Poll rate.  For the purposes of this cluster, the term "poll" always refers to the sending of a MAC Data Poll from the end device to the end device's parent.
* Command: CheckIn
*/
#define emberAfFillCommandPollControlClusterCheckIn( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_POLL_CONTROL_CLUSTER_ID, \
                           ZCL_CHECK_IN_COMMAND_ID, \
                           "" \
);



/** @brief The Check-in Response is sent in response to the receipt of a Check-in command.
* Cluster: Poll Control, This cluster provides a mechanism for the management of an end device's MAC Data Poll rate.  For the purposes of this cluster, the term "poll" always refers to the sending of a MAC Data Poll from the end device to the end device's parent.
* Command: CheckInResponse
* @param startFastPolling uint8_t

* @param fastPollTimeout uint16_t

*/
#define emberAfFillCommandPollControlClusterCheckInResponse( \
  startFastPolling,  fastPollTimeout) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POLL_CONTROL_CLUSTER_ID, \
                           ZCL_CHECK_IN_RESPONSE_COMMAND_ID, \
                           "uv", \
							  startFastPolling,							  fastPollTimeout);



/** @brief The Fast Poll Stop command is used to stop the fast poll mode initiated by the Check-in response.
* Cluster: Poll Control, This cluster provides a mechanism for the management of an end device's MAC Data Poll rate.  For the purposes of this cluster, the term "poll" always refers to the sending of a MAC Data Poll from the end device to the end device's parent.
* Command: FastPollStop
*/
#define emberAfFillCommandPollControlClusterFastPollStop( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POLL_CONTROL_CLUSTER_ID, \
                           ZCL_FAST_POLL_STOP_COMMAND_ID, \
                           "" \
);



/** @brief The Set Long Poll Interval command is used to set the read only Long Poll Interval Attribute.
* Cluster: Poll Control, This cluster provides a mechanism for the management of an end device's MAC Data Poll rate.  For the purposes of this cluster, the term "poll" always refers to the sending of a MAC Data Poll from the end device to the end device's parent.
* Command: SetLongPollInterval
* @param newLongPollInterval uint32_t

*/
#define emberAfFillCommandPollControlClusterSetLongPollInterval( \
  newLongPollInterval) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POLL_CONTROL_CLUSTER_ID, \
                           ZCL_SET_LONG_POLL_INTERVAL_COMMAND_ID, \
                           "w", \
							  newLongPollInterval);



/** @brief The Set Short Poll Interval command is used to set the read only Short Poll Interval Attribute.
* Cluster: Poll Control, This cluster provides a mechanism for the management of an end device's MAC Data Poll rate.  For the purposes of this cluster, the term "poll" always refers to the sending of a MAC Data Poll from the end device to the end device's parent.
* Command: SetShortPollInterval
* @param newShortPollInterval uint16_t

*/
#define emberAfFillCommandPollControlClusterSetShortPollInterval( \
  newShortPollInterval) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_POLL_CONTROL_CLUSTER_ID, \
                           ZCL_SET_SHORT_POLL_INTERVAL_COMMAND_ID, \
                           "v", \
							  newShortPollInterval);



/** @brief From GPP to GPS to tunnel GP frame.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpNotification
* @param options uint16_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param gpdEndpoint uint8_t

* @param gpdSecurityFrameCounter uint32_t

* @param gpdCommandId uint8_t

* @param gpdCommandPayload uint8_t *

* @param gppShortAddress uint16_t

* @param gppDistance uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpNotification( \
  options,  gpdSrcId,  gpdIeee,  gpdEndpoint,  gpdSecurityFrameCounter,  gpdCommandId,  gpdCommandPayload,  gppShortAddress,  gppDistance) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_NOTIFICATION_COMMAND_ID, \
                           "vw8uwusvu", \
							  options,							  gpdSrcId,							  gpdIeee,							  gpdEndpoint,							  gpdSecurityFrameCounter,							  gpdCommandId,							  gpdCommandPayload,							  gppShortAddress,							  gppDistance);



/** @brief From GPS to GPP to acknowledge GP Notification received in unicast mode.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpNotificationResponse
* @param options uint8_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param gpdSecurityFrameCounter uint32_t

*/
#define emberAfFillCommandGreenPowerClusterGpNotificationResponse( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  gpdSecurityFrameCounter) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_NOTIFICATION_RESPONSE_COMMAND_ID, \
                           "uw8uw", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  gpdSecurityFrameCounter);



/** @brief From GPP to GPSs in entire network to get pairing indication related to GPD for Proxy Table update.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpPairingSearch
* @param options uint16_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpPairingSearch( \
  options,  gpdSrcId,  gpdIeee,  endpoint) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PAIRING_SEARCH_COMMAND_ID, \
                           "vw8u", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint);



/** @brief From GPS to the entire network to (de)register for tunneling service, or for removing GPD from the network.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpPairing
* @param options uint32_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param sinkIeeeAddress uint8_t *

* @param sinkNwkAddress uint16_t

* @param sinkGroupId uint16_t

* @param deviceId uint8_t

* @param gpdSecurityFrameCounter uint32_t

* @param gpdKey uint8_t *

* @param assignedAlias uint16_t

* @param groupcastRadius uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpPairing( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  sinkIeeeAddress,  sinkNwkAddress,  sinkGroupId,  deviceId,  gpdSecurityFrameCounter,  gpdKey,  assignedAlias,  groupcastRadius) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PAIRING_COMMAND_ID, \
                           "xw8u8vvuwGvu", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  sinkIeeeAddress,							  sinkNwkAddress,							  sinkGroupId,							  deviceId,							  gpdSecurityFrameCounter,							  gpdKey,							  assignedAlias,							  groupcastRadius);



/** @brief From GPS to GPPs in the whole network to indicate commissioning mode.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpProxyCommissioningMode
* @param options uint8_t

* @param commissioningWindow uint16_t

* @param channel uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpProxyCommissioningMode( \
  options,  commissioningWindow,  channel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PROXY_COMMISSIONING_MODE_COMMAND_ID, \
                           "uvu", \
							  options,							  commissioningWindow,							  channel);



/** @brief From GPP to neighbor GPPs to indicate GP Notification sent in unicast mode.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpTunnelingStop
* @param options uint8_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param gpdSecurityFrameCounter uint32_t

* @param gppShortAddress uint16_t

* @param gppDistance int8_t

*/
#define emberAfFillCommandGreenPowerClusterGpTunnelingStop( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  gpdSecurityFrameCounter,  gppShortAddress,  gppDistance) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_TUNNELING_STOP_COMMAND_ID, \
                           "uw8uwvu", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  gpdSecurityFrameCounter,							  gppShortAddress,							  gppDistance);



/** @brief From GPP to GPS to tunnel GPD commissioning data.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpCommissioningNotification
* @param options uint16_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param gpdSecurityFrameCounter uint32_t

* @param gpdCommandId uint8_t

* @param gpdCommandPayload uint8_t *

* @param gppShortAddress uint16_t

* @param gppLink uint8_t

* @param mic uint32_t

*/
#define emberAfFillCommandGreenPowerClusterGpCommissioningNotification( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  gpdSecurityFrameCounter,  gpdCommandId,  gpdCommandPayload,  gppShortAddress,  gppLink,  mic) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_COMMISSIONING_NOTIFICATION_COMMAND_ID, \
                           "vw8uwusvuw", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  gpdSecurityFrameCounter,							  gpdCommandId,							  gpdCommandPayload,							  gppShortAddress,							  gppLink,							  mic);



/** @brief To enable commissioning mode of the sink, over the air
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpSinkCommissioningMode
* @param options uint8_t

* @param gpmAddrForSecurity uint16_t

* @param gpmAddrForPairing uint16_t

* @param sinkEndpoint uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpSinkCommissioningMode( \
  options,  gpmAddrForSecurity,  gpmAddrForPairing,  sinkEndpoint) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_SINK_COMMISSIONING_MODE_COMMAND_ID, \
                           "uvvu", \
							  options,							  gpmAddrForSecurity,							  gpmAddrForPairing,							  sinkEndpoint);



/** @brief From GPS to selected GPP, to provide data to be transmitted to Rx-capable GPD.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpResponse
* @param options uint8_t

* @param tempMasterShortAddress uint16_t

* @param tempMasterTxChannel uint8_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param gpdCommandId uint8_t

* @param gpdCommandPayload uint8_t *

*/
#define emberAfFillCommandGreenPowerClusterGpResponse( \
  options,  tempMasterShortAddress,  tempMasterTxChannel,  gpdSrcId,  gpdIeee,  endpoint,  gpdCommandId,  gpdCommandPayload) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_RESPONSE_COMMAND_ID, \
                           "uvuw8uus", \
							  options,							  tempMasterShortAddress,							  tempMasterTxChannel,							  gpdSrcId,							  gpdIeee,							  endpoint,							  gpdCommandId,							  gpdCommandPayload);



/** @brief To configure GPD Command Translation Table.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpTranslationTableUpdate
* @param options uint16_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param translations uint8_t *
* @param translationsLen uint16_t 
*/
#define emberAfFillCommandGreenPowerClusterGpTranslationTableUpdate( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  translations, translationsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_TRANSLATION_TABLE_UPDATE_COMMAND_ID, \
                           "vw8ub", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  translations, translationsLen);



/** @brief To provide GPD Command Translation Table content.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpTranslationTableRequest
* @param startIndex uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpTranslationTableRequest( \
  startIndex) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_TRANSLATION_TABLE_REQUEST_COMMAND_ID, \
                           "u", \
							  startIndex);



/** @brief To provide GPD Command Translation Table content.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpTranslationTableResponse
* @param status uint8_t

* @param options uint8_t

* @param totalNumberOfEntries uint8_t

* @param startIndex uint8_t

* @param entriesCount uint8_t

* @param translationTableList uint8_t *
* @param translationTableListLen uint16_t 
*/
#define emberAfFillCommandGreenPowerClusterGpTranslationTableResponse( \
  status,  options,  totalNumberOfEntries,  startIndex,  entriesCount,  translationTableList, translationTableListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_TRANSLATION_TABLE_RESPONSE_COMMAND_ID, \
                           "uuuuub", \
							  status,							  options,							  totalNumberOfEntries,							  startIndex,							  entriesCount,							  translationTableList, translationTableListLen);



/** @brief To configure Sink Table.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpPairingConfiguration
* @param actions uint8_t

* @param options uint16_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param deviceId uint8_t

* @param groupListCount uint8_t

* @param groupList uint8_t *
* @param groupListLen uint16_t 
* @param gpdAssignedAlias uint16_t

* @param groupcastRadius uint8_t

* @param securityOptions uint8_t

* @param gpdSecurityFrameCounter uint32_t

* @param gpdSecurityKey uint8_t *

* @param numberOfPairedEndpoints uint8_t

* @param pairedEndpoints uint8_t *
* @param pairedEndpointsLen uint16_t 
* @param applicationInformation uint8_t

* @param manufacturerId uint16_t

* @param modeId uint16_t

* @param numberOfGpdCommands uint8_t

* @param gpdCommandIdList uint8_t *
* @param gpdCommandIdListLen uint16_t 
* @param clusterIdListCount uint8_t

* @param clusterListServer uint8_t *
* @param clusterListServerLen uint16_t 
* @param clusterListClient uint8_t *
* @param clusterListClientLen uint16_t 
* @param switchInformationLength uint8_t

* @param switchConfiguration uint8_t

* @param currentContactStatus uint8_t

* @param totalNumberOfReports uint8_t

* @param numberOfReports uint8_t

* @param reportDescriptor uint8_t *
* @param reportDescriptorLen uint16_t 
*/
#define emberAfFillCommandGreenPowerClusterGpPairingConfiguration( \
  actions,  options,  gpdSrcId,  gpdIeee,  endpoint,  deviceId,  groupListCount,  groupList, groupListLen,  gpdAssignedAlias,  groupcastRadius,  securityOptions,  gpdSecurityFrameCounter,  gpdSecurityKey,  numberOfPairedEndpoints,  pairedEndpoints, pairedEndpointsLen,  applicationInformation,  manufacturerId,  modeId,  numberOfGpdCommands,  gpdCommandIdList, gpdCommandIdListLen,  clusterIdListCount,  clusterListServer, clusterListServerLen,  clusterListClient, clusterListClientLen,  switchInformationLength,  switchConfiguration,  currentContactStatus,  totalNumberOfReports,  numberOfReports,  reportDescriptor, reportDescriptorLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PAIRING_CONFIGURATION_COMMAND_ID, \
                           "uvw8uuubvuuwGubuvvububbuuuuub", \
							  actions,							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  deviceId,							  groupListCount,							  groupList, groupListLen,							  gpdAssignedAlias,							  groupcastRadius,							  securityOptions,							  gpdSecurityFrameCounter,							  gpdSecurityKey,							  numberOfPairedEndpoints,							  pairedEndpoints, pairedEndpointsLen,							  applicationInformation,							  manufacturerId,							  modeId,							  numberOfGpdCommands,							  gpdCommandIdList, gpdCommandIdListLen,							  clusterIdListCount,							  clusterListServer, clusterListServerLen,							  clusterListClient, clusterListClientLen,							  switchInformationLength,							  switchConfiguration,							  currentContactStatus,							  totalNumberOfReports,							  numberOfReports,							  reportDescriptor, reportDescriptorLen);



/** @brief To read out selected Sink Table Entries, by index or by GPD ID.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpSinkTableRequest
* @param options uint8_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param index uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpSinkTableRequest( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  index) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_SINK_TABLE_REQUEST_COMMAND_ID, \
                           "uw8uu", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  index);



/** @brief To selected Proxy Table entries, by index or by GPD ID.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpSinkTableResponse
* @param status uint8_t

* @param totalNumberofNonEmptySinkTableEntries uint8_t

* @param startIndex uint8_t

* @param sinkTableEntriesCount uint8_t

* @param sinkTableEntries uint8_t *
* @param sinkTableEntriesLen uint16_t 
*/
#define emberAfFillCommandGreenPowerClusterGpSinkTableResponse( \
  status,  totalNumberofNonEmptySinkTableEntries,  startIndex,  sinkTableEntriesCount,  sinkTableEntries, sinkTableEntriesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_SINK_TABLE_RESPONSE_COMMAND_ID, \
                           "uuuub", \
							  status,							  totalNumberofNonEmptySinkTableEntries,							  startIndex,							  sinkTableEntriesCount,							  sinkTableEntries, sinkTableEntriesLen);



/** @brief To reply with read-out Proxy Table entries, by index or by GPD ID.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpProxyTableResponse
* @param status uint8_t

* @param totalNumberOfNonEmptyProxyTableEntries uint8_t

* @param startIndex uint8_t

* @param entriesCount uint8_t

* @param proxyTableEntries uint8_t *
* @param proxyTableEntriesLen uint16_t 
*/
#define emberAfFillCommandGreenPowerClusterGpProxyTableResponse( \
  status,  totalNumberOfNonEmptyProxyTableEntries,  startIndex,  entriesCount,  proxyTableEntries, proxyTableEntriesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PROXY_TABLE_RESPONSE_COMMAND_ID, \
                           "uuuub", \
							  status,							  totalNumberOfNonEmptyProxyTableEntries,							  startIndex,							  entriesCount,							  proxyTableEntries, proxyTableEntriesLen);



/** @brief To request selected Proxy Table entries, by index or by GPD ID.
* Cluster: Green Power, The Green Power cluster defines the format of the commands exchanged when handling GPDs.
* Command: GpProxyTableRequest
* @param options uint8_t

* @param gpdSrcId uint32_t

* @param gpdIeee uint8_t *

* @param endpoint uint8_t

* @param index uint8_t

*/
#define emberAfFillCommandGreenPowerClusterGpProxyTableRequest( \
  options,  gpdSrcId,  gpdIeee,  endpoint,  index) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GREEN_POWER_CLUSTER_ID, \
                           ZCL_GP_PROXY_TABLE_REQUEST_COMMAND_ID, \
                           "uw8uu", \
							  options,							  gpdSrcId,							  gpdIeee,							  endpoint,							  index);



/** @brief Configure Zigbee Direct Interface
* Cluster: Zigbee Direct Configuration, Attributes and commands for Zigbee Direct configuration.
* Command: ConfigureInterface
* @param InterfaceState uint8_t

*/
#define emberAfFillCommandZigbeeDirectClusterConfigureInterface( \
  InterfaceState) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZIGBEE_DIRECT_CLUSTER_ID, \
                           ZCL_CONFIGURE_INTERFACE_COMMAND_ID, \
                           "u", \
							  InterfaceState);



/** @brief Configure Zigbee Direct AnonymousJoinTimeout
* Cluster: Zigbee Direct Configuration, Attributes and commands for Zigbee Direct configuration.
* Command: ConfigureAnonymousJoinTimeout
* @param AnonymousJoinTimeout uint32_t

*/
#define emberAfFillCommandZigbeeDirectClusterConfigureAnonymousJoinTimeout( \
  AnonymousJoinTimeout) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZIGBEE_DIRECT_CLUSTER_ID, \
                           ZCL_CONFIGURE_ANONYMOUS_JOIN_TIMEOUT_COMMAND_ID, \
                           "x", \
							  AnonymousJoinTimeout);



/** @brief Locks the door
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: LockDoor
* @param PIN uint8_t *

*/
#define emberAfFillCommandDoorLockClusterLockDoor( \
  PIN) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_LOCK_DOOR_COMMAND_ID, \
                           "s", \
							  PIN);



/** @brief Indicates lock success or failure
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: LockDoorResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterLockDoorResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_LOCK_DOOR_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Unlocks the door
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: UnlockDoor
* @param PIN uint8_t *

*/
#define emberAfFillCommandDoorLockClusterUnlockDoor( \
  PIN) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_UNLOCK_DOOR_COMMAND_ID, \
                           "s", \
							  PIN);



/** @brief Indicates unlock success or failure
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: UnlockDoorResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterUnlockDoorResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_UNLOCK_DOOR_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Toggles the door lock from its current state to the opposite state locked or unlocked.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: Toggle
* @param pin uint8_t *

*/
#define emberAfFillCommandDoorLockClusterToggle( \
  pin) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_TOGGLE_COMMAND_ID, \
                           "s", \
							  pin);



/** @brief Response provided to the toggle command, indicates whether the toggle was successful or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ToggleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterToggleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_TOGGLE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Unlock the door with a timeout. When the timeout expires, the door will automatically re-lock.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: UnlockWithTimeout
* @param timeoutInSeconds uint16_t

* @param pin uint8_t *

*/
#define emberAfFillCommandDoorLockClusterUnlockWithTimeout( \
  timeoutInSeconds,  pin) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_UNLOCK_WITH_TIMEOUT_COMMAND_ID, \
                           "vs", \
							  timeoutInSeconds,							  pin);



/** @brief Response provided to unlock with specific timeout. This command indicates whether the unlock command was successful or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: UnlockWithTimeoutResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterUnlockWithTimeoutResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_UNLOCK_WITH_TIMEOUT_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve a log record at a specified index.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetLogRecord
* @param logIndex uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetLogRecord( \
  logIndex) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_LOG_RECORD_COMMAND_ID, \
                           "v", \
							  logIndex);



/** @brief Returns the specific log record requested.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetLogRecordResponse
* @param logEntryId uint16_t

* @param timestamp uint32_t

* @param eventType uint8_t

* @param source uint8_t

* @param eventIdOrAlarmCode uint8_t

* @param userId uint16_t

* @param pin uint8_t *

*/
#define emberAfFillCommandDoorLockClusterGetLogRecordResponse( \
  logEntryId,  timestamp,  eventType,  source,  eventIdOrAlarmCode,  userId,  pin) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_LOG_RECORD_RESPONSE_COMMAND_ID, \
                           "vwuuuvs", \
							  logEntryId,							  timestamp,							  eventType,							  source,							  eventIdOrAlarmCode,							  userId,							  pin);



/** @brief Set the PIN for a specified user id.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetPin
* @param userId uint16_t

* @param userStatus uint8_t

* @param userType uint8_t

* @param pin uint8_t *

*/
#define emberAfFillCommandDoorLockClusterSetPin( \
  userId,  userStatus,  userType,  pin) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_PIN_COMMAND_ID, \
                           "vuus", \
							  userId,							  userStatus,							  userType,							  pin);



/** @brief Indicates whether the setting of the PIN was successful or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetPinResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetPinResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_PIN_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve PIN information for a user with a specific user ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetPin
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetPin( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_PIN_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns the PIN requested according to the user ID passed.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetPinResponse
* @param userId uint16_t

* @param userStatus uint8_t

* @param userType uint8_t

* @param pin uint8_t *

*/
#define emberAfFillCommandDoorLockClusterGetPinResponse( \
  userId,  userStatus,  userType,  pin) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_PIN_RESPONSE_COMMAND_ID, \
                           "vuus", \
							  userId,							  userStatus,							  userType,							  pin);



/** @brief Clear the PIN for a user with a specific user ID
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearPin
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearPin( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_PIN_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns success or failure depending on whether the PIN was cleared or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearPinResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearPinResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_PIN_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Clear all PIN codes on the lock for all users.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllPins
*/
#define emberAfFillCommandDoorLockClusterClearAllPins( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_PINS_COMMAND_ID, \
                           "" \
);



/** @brief Returns success or failure depending on whether the PINs were cleared or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllPinsResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearAllPinsResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_PINS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Set the status value for a specified user ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetUserStatus
* @param userId uint16_t

* @param userStatus uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetUserStatus( \
  userId,  userStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_USER_STATUS_COMMAND_ID, \
                           "vu", \
							  userId,							  userStatus);



/** @brief Returns success or failure depending on whether the user status was set or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetUserStatusResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetUserStatusResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_USER_STATUS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve the status byte for a specific user.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetUserStatus
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetUserStatus( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_USER_STATUS_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns the user status.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetUserStatusResponse
* @param userId uint16_t

* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterGetUserStatusResponse( \
  userId,  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_USER_STATUS_RESPONSE_COMMAND_ID, \
                           "vu", \
							  userId,							  status);



/** @brief Set the schedule of days during the week that the associated user based on the user ID will have access to the lock and will be able to operate it.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetWeekdaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

* @param daysMask uint8_t

* @param startHour uint8_t

* @param startMinute uint8_t

* @param endHour uint8_t

* @param endMinute uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetWeekdaySchedule( \
  scheduleId,  userId,  daysMask,  startHour,  startMinute,  endHour,  endMinute) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_WEEKDAY_SCHEDULE_COMMAND_ID, \
                           "uvuuuuu", \
							  scheduleId,							  userId,							  daysMask,							  startHour,							  startMinute,							  endHour,							  endMinute);



/** @brief Returns the status of setting the weekday schedule
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetWeekdayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetWeekdayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve a weekday schedule for doorlock user activation for a specific schedule id and user id.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetWeekdaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetWeekdaySchedule( \
  scheduleId,  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_WEEKDAY_SCHEDULE_COMMAND_ID, \
                           "uv", \
							  scheduleId,							  userId);



/** @brief Returns the weekday schedule requested.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetWeekdayScheduleResponse
* @param scheduleId uint8_t

* @param userId uint16_t

* @param status uint8_t

* @param daysMask uint8_t

* @param startHour uint8_t

* @param startMinute uint8_t

* @param endHour uint8_t

* @param endMinute uint8_t

*/
#define emberAfFillCommandDoorLockClusterGetWeekdayScheduleResponse( \
  scheduleId,  userId,  status,  daysMask,  startHour,  startMinute,  endHour,  endMinute) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "uvuuuuuu", \
							  scheduleId,							  userId,							  status,							  daysMask,							  startHour,							  startMinute,							  endHour,							  endMinute);



/** @brief Clear a weekday schedule for doorlock user activation for a specific schedule id and user id.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearWeekdaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearWeekdaySchedule( \
  scheduleId,  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_WEEKDAY_SCHEDULE_COMMAND_ID, \
                           "uv", \
							  scheduleId,							  userId);



/** @brief Returns the status of clearing the weekday schedule
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearWeekdayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearWeekdayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_WEEKDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Set a door lock user id activation schedule according to a specific absolute local start and end time
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetYeardaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

*/
#define emberAfFillCommandDoorLockClusterSetYeardaySchedule( \
  scheduleId,  userId,  localStartTime,  localEndTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_YEARDAY_SCHEDULE_COMMAND_ID, \
                           "uvww", \
							  scheduleId,							  userId,							  localStartTime,							  localEndTime);



/** @brief Returns success or failure depending on whether the yearday schedule was set or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetYeardayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetYeardayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve a yearday schedule for a specific scheduleId and userId
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetYeardaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetYeardaySchedule( \
  scheduleId,  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_YEARDAY_SCHEDULE_COMMAND_ID, \
                           "uv", \
							  scheduleId,							  userId);



/** @brief Returns the yearday schedule requested
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetYeardayScheduleResponse
* @param scheduleId uint8_t

* @param userId uint16_t

* @param status uint8_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

*/
#define emberAfFillCommandDoorLockClusterGetYeardayScheduleResponse( \
  scheduleId,  userId,  status,  localStartTime,  localEndTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "uvuww", \
							  scheduleId,							  userId,							  status,							  localStartTime,							  localEndTime);



/** @brief Clear a yearday schedule for a specific scheduleId and userId
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearYeardaySchedule
* @param scheduleId uint8_t

* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearYeardaySchedule( \
  scheduleId,  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_YEARDAY_SCHEDULE_COMMAND_ID, \
                           "uv", \
							  scheduleId,							  userId);



/** @brief Returns success or failure depending on whether the yearday schedule was removed or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearYeardayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearYeardayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_YEARDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Set the holiday schedule for a specific user
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetHolidaySchedule
* @param scheduleId uint8_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

* @param operatingModeDuringHoliday uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetHolidaySchedule( \
  scheduleId,  localStartTime,  localEndTime,  operatingModeDuringHoliday) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_HOLIDAY_SCHEDULE_COMMAND_ID, \
                           "uwwu", \
							  scheduleId,							  localStartTime,							  localEndTime,							  operatingModeDuringHoliday);



/** @brief Returns success or failure depending on whether the holiday schedule was set or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetHolidayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetHolidayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve a holiday schedule for a specific scheduleId
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetHolidaySchedule
* @param scheduleId uint8_t

*/
#define emberAfFillCommandDoorLockClusterGetHolidaySchedule( \
  scheduleId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_HOLIDAY_SCHEDULE_COMMAND_ID, \
                           "u", \
							  scheduleId);



/** @brief Returns the holiday schedule requested
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetHolidayScheduleResponse
* @param scheduleId uint8_t

* @param status uint8_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

* @param operatingModeDuringHoliday uint8_t

*/
#define emberAfFillCommandDoorLockClusterGetHolidayScheduleResponse( \
  scheduleId,  status,  localStartTime,  localEndTime,  operatingModeDuringHoliday) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "uuwwu", \
							  scheduleId,							  status,							  localStartTime,							  localEndTime,							  operatingModeDuringHoliday);



/** @brief Clear a holiday schedule for a specific scheduleId
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearHolidaySchedule
* @param scheduleId uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearHolidaySchedule( \
  scheduleId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_HOLIDAY_SCHEDULE_COMMAND_ID, \
                           "u", \
							  scheduleId);



/** @brief Returns success or failure depending on whether the holiday schedule was removed or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearHolidayScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearHolidayScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_HOLIDAY_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Set the type value for a user based on user ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetUserType
* @param userId uint16_t

* @param userType uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetUserType( \
  userId,  userType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_USER_TYPE_COMMAND_ID, \
                           "vu", \
							  userId,							  userType);



/** @brief returns success or failure depending on whether the user type was set or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetUserTypeResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetUserTypeResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_USER_TYPE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve the type for a specific user based on the user ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetUserType
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetUserType( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_USER_TYPE_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns the user type for the user ID requested.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetUserTypeResponse
* @param userId uint16_t

* @param userType uint8_t

*/
#define emberAfFillCommandDoorLockClusterGetUserTypeResponse( \
  userId,  userType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_USER_TYPE_RESPONSE_COMMAND_ID, \
                           "vu", \
							  userId,							  userType);



/** @brief Set the PIN for a specified user id.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetRfid
* @param userId uint16_t

* @param userStatus uint8_t

* @param userType uint8_t

* @param id uint8_t *

*/
#define emberAfFillCommandDoorLockClusterSetRfid( \
  userId,  userStatus,  userType,  id) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_RFID_COMMAND_ID, \
                           "vuus", \
							  userId,							  userStatus,							  userType,							  id);



/** @brief Indicates whether the setting of the RFID ID was successful or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetRfidResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetRfidResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_RFID_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve RFID ID information for a user with a specific user ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetRfid
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetRfid( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_RFID_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns the RFID ID requested according to the user ID passed.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetRfidResponse
* @param userId uint16_t

* @param userStatus uint8_t

* @param userType uint8_t

* @param rfid uint8_t *

*/
#define emberAfFillCommandDoorLockClusterGetRfidResponse( \
  userId,  userStatus,  userType,  rfid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_RFID_RESPONSE_COMMAND_ID, \
                           "vuus", \
							  userId,							  userStatus,							  userType,							  rfid);



/** @brief Clear the RFID ID for a user with a specific user ID
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearRfid
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearRfid( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_RFID_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns success or failure depending on whether the RFID ID was cleared or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearRfidResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearRfidResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_RFID_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Clear all RFID ID codes on the lock for all users.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllRfids
*/
#define emberAfFillCommandDoorLockClusterClearAllRfids( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_RFIDS_COMMAND_ID, \
                           "" \
);



/** @brief Returns success or failure depending on whether the RFID IDs were cleared or not.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllRfidsResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearAllRfidsResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_RFIDS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Set the Disposable Schedule by specifying local start time and local end time for the specific user.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetDisposableSchedule
* @param userId uint16_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

*/
#define emberAfFillCommandDoorLockClusterSetDisposableSchedule( \
  userId,  localStartTime,  localEndTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_DISPOSABLE_SCHEDULE_COMMAND_ID, \
                           "vww", \
							  userId,							  localStartTime,							  localEndTime);



/** @brief Returns pass/fail of the SetDisposableSchedule command
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: SetDisposableScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterSetDisposableScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_SET_DISPOSABLE_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Retrieve the disposable schedule for the specific user.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetDisposableSchedule
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterGetDisposableSchedule( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_DISPOSABLE_SCHEDULE_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns the Disposable schedule data for the User ID.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: GetDisposableScheduleResponse
* @param userId uint16_t

* @param status uint8_t

* @param localStartTime uint32_t

* @param localEndTime uint32_t

*/
#define emberAfFillCommandDoorLockClusterGetDisposableScheduleResponse( \
  userId,  status,  localStartTime,  localEndTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_GET_DISPOSABLE_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "vuww", \
							  userId,							  status,							  localStartTime,							  localEndTime);



/** @brief Clear the Disposable schedule for the specific user
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearDisposableSchedule
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearDisposableSchedule( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_DISPOSABLE_SCHEDULE_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns pass/fail of the command
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearDisposableScheduleResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearDisposableScheduleResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_DISPOSABLE_SCHEDULE_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Clear the Biometric Credential for the specific user
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearBiometricCredential
* @param userId uint16_t

*/
#define emberAfFillCommandDoorLockClusterClearBiometricCredential( \
  userId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_BIOMETRIC_CREDENTIAL_COMMAND_ID, \
                           "v", \
							  userId);



/** @brief Returns pass/fail of the command
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearBiometricCredentialResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearBiometricCredentialResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_BIOMETRIC_CREDENTIAL_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Clear out all Biometric Credentials on the lock
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllBiometricCredentials
*/
#define emberAfFillCommandDoorLockClusterClearAllBiometricCredentials( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_BIOMETRIC_CREDENTIALS_COMMAND_ID, \
                           "" \
);



/** @brief Returns pass/fail of the command
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ClearAllBiometricCredentialsResponse
* @param status uint8_t

*/
#define emberAfFillCommandDoorLockClusterClearAllBiometricCredentialsResponse( \
  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_CLEAR_ALL_BIOMETRIC_CREDENTIALS_RESPONSE_COMMAND_ID, \
                           "u", \
							  status);



/** @brief Indicates that an operation event has taken place. Includes the associated event information.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: OperationEventNotification
* @param source uint8_t

* @param eventCode uint8_t

* @param userId uint16_t

* @param pin uint8_t *

* @param timeStamp uint32_t

* @param data uint8_t *

*/
#define emberAfFillCommandDoorLockClusterOperationEventNotification( \
  source,  eventCode,  userId,  pin,  timeStamp,  data) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_OPERATION_EVENT_NOTIFICATION_COMMAND_ID, \
                           "uuvsws", \
							  source,							  eventCode,							  userId,							  pin,							  timeStamp,							  data);



/** @brief Indicates that a programming event has taken place. Includes the associated programming event information.
* Cluster: Door Lock, Provides an interface into a generic way to secure a door.
* Command: ProgrammingEventNotification
* @param source uint8_t

* @param eventCode uint8_t

* @param userId uint16_t

* @param pin uint8_t *

* @param userType uint8_t

* @param userStatus uint8_t

* @param timeStamp uint32_t

* @param data uint8_t *

*/
#define emberAfFillCommandDoorLockClusterProgrammingEventNotification( \
  source,  eventCode,  userId,  pin,  userType,  userStatus,  timeStamp,  data) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DOOR_LOCK_CLUSTER_ID, \
                           ZCL_PROGRAMMING_EVENT_NOTIFICATION_COMMAND_ID, \
                           "uuvsuuws", \
							  source,							  eventCode,							  userId,							  pin,							  userType,							  userStatus,							  timeStamp,							  data);



/** @brief Moves window covering to InstalledOpenLimit - Lift and InstalledOpenLimit - Tilt
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringUpOpen
*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringUpOpen( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_UP_OPEN_COMMAND_ID, \
                           "" \
);



/** @brief Moves window covering to InstalledClosedLimit - Lift and InstalledCloseLimit - Tilt
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringDownClose
*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringDownClose( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_DOWN_CLOSE_COMMAND_ID, \
                           "" \
);



/** @brief Stop any adjusting of window covering
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringStop
*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringStop( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_STOP_COMMAND_ID, \
                           "" \
);



/** @brief Goto lift value specified
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringGoToLiftValue
* @param liftValue uint16_t

*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringGoToLiftValue( \
  liftValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_GO_TO_LIFT_VALUE_COMMAND_ID, \
                           "v", \
							  liftValue);



/** @brief Goto lift percentage specified
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringGoToLiftPercentage
* @param percentageLiftValue uint8_t

*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringGoToLiftPercentage( \
  percentageLiftValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_GO_TO_LIFT_PERCENTAGE_COMMAND_ID, \
                           "u", \
							  percentageLiftValue);



/** @brief Goto tilt value specified
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringGoToTiltValue
* @param tiltValue uint16_t

*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringGoToTiltValue( \
  tiltValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_GO_TO_TILT_VALUE_COMMAND_ID, \
                           "v", \
							  tiltValue);



/** @brief Goto tilt percentage specified
* Cluster: Window Covering, Provides an interface for controlling and adjusting automatic window coverings.
* Command: WindowCoveringGoToTiltPercentage
* @param percentageTiltValue uint8_t

*/
#define emberAfFillCommandWindowCoveringClusterWindowCoveringGoToTiltPercentage( \
  percentageTiltValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WINDOW_COVERING_CLUSTER_ID, \
                           ZCL_WINDOW_COVERING_GO_TO_TILT_PERCENTAGE_COMMAND_ID, \
                           "u", \
							  percentageTiltValue);



/** @brief Command to instruct a barrier to go to a percent open state.
* Cluster: Barrier Control, This cluster provides control of a barrier (garage door).
* Command: BarrierControlGoToPercent
* @param percentOpen uint8_t

*/
#define emberAfFillCommandBarrierControlClusterBarrierControlGoToPercent( \
  percentOpen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BARRIER_CONTROL_CLUSTER_ID, \
                           ZCL_BARRIER_CONTROL_GO_TO_PERCENT_COMMAND_ID, \
                           "u", \
							  percentOpen);



/** @brief Command that instructs the barrier to stop moving.
* Cluster: Barrier Control, This cluster provides control of a barrier (garage door).
* Command: BarrierControlStop
*/
#define emberAfFillCommandBarrierControlClusterBarrierControlStop( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BARRIER_CONTROL_CLUSTER_ID, \
                           ZCL_BARRIER_CONTROL_STOP_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SetpointRaiseLower
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: SetpointRaiseLower
* @param mode uint8_t

* @param amount int8_t

*/
#define emberAfFillCommandThermostatClusterSetpointRaiseLower( \
  mode,  amount) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_SETPOINT_RAISE_LOWER_COMMAND_ID, \
                           "uu", \
							  mode,							  amount);



/** @brief The Current Weekly Schedule Command is sent from the server in response to the Get Weekly Schedule Command.
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: CurrentWeeklySchedule
* @param numberOfTransitionsForSequence uint8_t

* @param dayOfWeekForSequence uint8_t

* @param modeForSequence uint8_t

* @param payload uint8_t *
* @param payloadLen uint16_t 
*/
#define emberAfFillCommandThermostatClusterCurrentWeeklySchedule( \
  numberOfTransitionsForSequence,  dayOfWeekForSequence,  modeForSequence,  payload, payloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_CURRENT_WEEKLY_SCHEDULE_COMMAND_ID, \
                           "uuub", \
							  numberOfTransitionsForSequence,							  dayOfWeekForSequence,							  modeForSequence,							  payload, payloadLen);



/** @brief Command description for SetWeeklySchedule
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: SetWeeklySchedule
* @param numberOfTransitionsForSequence uint8_t

* @param dayOfWeekForSequence uint8_t

* @param modeForSequence uint8_t

* @param payload uint8_t *
* @param payloadLen uint16_t 
*/
#define emberAfFillCommandThermostatClusterSetWeeklySchedule( \
  numberOfTransitionsForSequence,  dayOfWeekForSequence,  modeForSequence,  payload, payloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_SET_WEEKLY_SCHEDULE_COMMAND_ID, \
                           "uuub", \
							  numberOfTransitionsForSequence,							  dayOfWeekForSequence,							  modeForSequence,							  payload, payloadLen);



/** @brief This command is sent from the thermostat cluster server in response to the Get  Relay Status Log.
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: RelayStatusLog
* @param timeOfDay uint16_t

* @param relayStatus uint16_t

* @param localTemperature int16_t

* @param humidityInPercentage uint8_t

* @param setpoint int16_t

* @param unreadEntries uint16_t

*/
#define emberAfFillCommandThermostatClusterRelayStatusLog( \
  timeOfDay,  relayStatus,  localTemperature,  humidityInPercentage,  setpoint,  unreadEntries) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_RELAY_STATUS_LOG_COMMAND_ID, \
                           "vvvuvv", \
							  timeOfDay,							  relayStatus,							  localTemperature,							  humidityInPercentage,							  setpoint,							  unreadEntries);



/** @brief Command description for GetWeeklySchedule
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: GetWeeklySchedule
* @param daysToReturn uint8_t

* @param modeToReturn uint8_t

*/
#define emberAfFillCommandThermostatClusterGetWeeklySchedule( \
  daysToReturn,  modeToReturn) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_GET_WEEKLY_SCHEDULE_COMMAND_ID, \
                           "uu", \
							  daysToReturn,							  modeToReturn);



/** @brief The Clear Weekly Schedule command is used to clear the weekly schedule.
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: ClearWeeklySchedule
*/
#define emberAfFillCommandThermostatClusterClearWeeklySchedule( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_CLEAR_WEEKLY_SCHEDULE_COMMAND_ID, \
                           "" \
);



/** @brief The Get Relay Status Log command is used to query the thermostat internal relay status log.
* Cluster: Thermostat, An interface for configuring and controlling the functionality of a thermostat.
* Command: GetRelayStatusLog
*/
#define emberAfFillCommandThermostatClusterGetRelayStatusLog( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_THERMOSTAT_CLUSTER_ID, \
                           ZCL_GET_RELAY_STATUS_LOG_COMMAND_ID, \
                           "" \
);



/** @brief Move to specified hue.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveToHue
* @param hue uint8_t

* @param direction uint8_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveToHue( \
  hue,  direction,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_HUE_COMMAND_ID, \
                           "uuvuu", \
							  hue,							  direction,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move hue up or down at specified rate.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveHue
* @param moveMode uint8_t

* @param rate uint8_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveHue( \
  moveMode,  rate,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_HUE_COMMAND_ID, \
                           "uuuu", \
							  moveMode,							  rate,							  optionsMask,							  optionsOverride);



/** @brief Step hue up or down by specified size at specified rate.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: StepHue
* @param stepMode uint8_t

* @param stepSize uint8_t

* @param transitionTime uint8_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterStepHue( \
  stepMode,  stepSize,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_HUE_COMMAND_ID, \
                           "uuuuu", \
							  stepMode,							  stepSize,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move to specified saturation.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveToSaturation
* @param saturation uint8_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveToSaturation( \
  saturation,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_SATURATION_COMMAND_ID, \
                           "uvuu", \
							  saturation,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move saturation up or down at specified rate.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveSaturation
* @param moveMode uint8_t

* @param rate uint8_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveSaturation( \
  moveMode,  rate,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_SATURATION_COMMAND_ID, \
                           "uuuu", \
							  moveMode,							  rate,							  optionsMask,							  optionsOverride);



/** @brief Step saturation up or down by specified size at specified rate.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: StepSaturation
* @param stepMode uint8_t

* @param stepSize uint8_t

* @param transitionTime uint8_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterStepSaturation( \
  stepMode,  stepSize,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_SATURATION_COMMAND_ID, \
                           "uuuuu", \
							  stepMode,							  stepSize,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move to hue and saturation.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveToHueAndSaturation
* @param hue uint8_t

* @param saturation uint8_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveToHueAndSaturation( \
  hue,  saturation,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID, \
                           "uuvuu", \
							  hue,							  saturation,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move to specified color.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveToColor
* @param colorX uint16_t

* @param colorY uint16_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveToColor( \
  colorX,  colorY,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_COLOR_COMMAND_ID, \
                           "vvvuu", \
							  colorX,							  colorY,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Moves the color.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveColor
* @param rateX int16_t

* @param rateY int16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveColor( \
  rateX,  rateY,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_COLOR_COMMAND_ID, \
                           "vvuu", \
							  rateX,							  rateY,							  optionsMask,							  optionsOverride);



/** @brief Steps the lighting to a specific color.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: StepColor
* @param stepX int16_t

* @param stepY int16_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterStepColor( \
  stepX,  stepY,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_COLOR_COMMAND_ID, \
                           "vvvuu", \
							  stepX,							  stepY,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Move to a specific color temperature.
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveToColorTemperature
* @param colorTemperature uint16_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveToColorTemperature( \
  colorTemperature,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_TO_COLOR_TEMPERATURE_COMMAND_ID, \
                           "vvuu", \
							  colorTemperature,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Command description for EnhancedMoveToHue
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: EnhancedMoveToHue
* @param enhancedHue uint16_t

* @param direction uint8_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterEnhancedMoveToHue( \
  enhancedHue,  direction,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_ENHANCED_MOVE_TO_HUE_COMMAND_ID, \
                           "vuvuu", \
							  enhancedHue,							  direction,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Command description for EnhancedMoveHue
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: EnhancedMoveHue
* @param moveMode uint8_t

* @param rate uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterEnhancedMoveHue( \
  moveMode,  rate,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_ENHANCED_MOVE_HUE_COMMAND_ID, \
                           "uvuu", \
							  moveMode,							  rate,							  optionsMask,							  optionsOverride);



/** @brief Command description for EnhancedStepHue
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: EnhancedStepHue
* @param stepMode uint8_t

* @param stepSize uint16_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterEnhancedStepHue( \
  stepMode,  stepSize,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_ENHANCED_STEP_HUE_COMMAND_ID, \
                           "uvvuu", \
							  stepMode,							  stepSize,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Command description for EnhancedMoveToHueAndSaturation
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: EnhancedMoveToHueAndSaturation
* @param enhancedHue uint16_t

* @param saturation uint8_t

* @param transitionTime uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterEnhancedMoveToHueAndSaturation( \
  enhancedHue,  saturation,  transitionTime,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_ENHANCED_MOVE_TO_HUE_AND_SATURATION_COMMAND_ID, \
                           "vuvuu", \
							  enhancedHue,							  saturation,							  transitionTime,							  optionsMask,							  optionsOverride);



/** @brief Command description for ColorLoopSet
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: ColorLoopSet
* @param updateFlags uint8_t

* @param action uint8_t

* @param direction uint8_t

* @param time uint16_t

* @param startHue uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterColorLoopSet( \
  updateFlags,  action,  direction,  time,  startHue,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_COLOR_LOOP_SET_COMMAND_ID, \
                           "uuuvvuu", \
							  updateFlags,							  action,							  direction,							  time,							  startHue,							  optionsMask,							  optionsOverride);



/** @brief Command description for StopMoveStep
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: StopMoveStep
* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterStopMoveStep( \
  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_STOP_MOVE_STEP_COMMAND_ID, \
                           "uu", \
							  optionsMask,							  optionsOverride);



/** @brief Command description for MoveColorTemperature
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: MoveColorTemperature
* @param moveMode uint8_t

* @param rate uint16_t

* @param colorTemperatureMinimum uint16_t

* @param colorTemperatureMaximum uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterMoveColorTemperature( \
  moveMode,  rate,  colorTemperatureMinimum,  colorTemperatureMaximum,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_MOVE_COLOR_TEMPERATURE_COMMAND_ID, \
                           "uvvvuu", \
							  moveMode,							  rate,							  colorTemperatureMinimum,							  colorTemperatureMaximum,							  optionsMask,							  optionsOverride);



/** @brief Command description for StepColorTemperature
* Cluster: Color Control, Attributes and commands for controlling the color properties of a color-capable light.
* Command: StepColorTemperature
* @param stepMode uint8_t

* @param stepSize uint16_t

* @param transitionTime uint16_t

* @param colorTemperatureMinimum uint16_t

* @param colorTemperatureMaximum uint16_t

* @param optionsMask uint8_t

* @param optionsOverride uint8_t

*/
#define emberAfFillCommandColorControlClusterStepColorTemperature( \
  stepMode,  stepSize,  transitionTime,  colorTemperatureMinimum,  colorTemperatureMaximum,  optionsMask,  optionsOverride) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_COLOR_CONTROL_CLUSTER_ID, \
                           ZCL_STEP_COLOR_TEMPERATURE_COMMAND_ID, \
                           "uvvvvuu", \
							  stepMode,							  stepSize,							  transitionTime,							  colorTemperatureMinimum,							  colorTemperatureMaximum,							  optionsMask,							  optionsOverride);



/** @brief Command description for zoneEnrollResponse
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: ZoneEnrollResponse
* @param enrollResponseCode uint8_t

* @param zoneId uint8_t

*/
#define emberAfFillCommandIasZoneClusterZoneEnrollResponse( \
  enrollResponseCode,  zoneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_ZONE_ENROLL_RESPONSE_COMMAND_ID, \
                           "uu", \
							  enrollResponseCode,							  zoneId);



/** @brief Command description for zoneStatusChangeNotification
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: ZoneStatusChangeNotification
* @param zoneStatus uint16_t

* @param extendedStatus uint8_t

* @param zoneId uint8_t

* @param delay uint16_t

*/
#define emberAfFillCommandIasZoneClusterZoneStatusChangeNotification( \
  zoneStatus,  extendedStatus,  zoneId,  delay) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_ZONE_STATUS_CHANGE_NOTIFICATION_COMMAND_ID, \
                           "vuuv", \
							  zoneStatus,							  extendedStatus,							  zoneId,							  delay);



/** @brief Used to tell the IAS Zone server to commence normal operation mode
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: InitiateNormalOperationMode
*/
#define emberAfFillCommandIasZoneClusterInitiateNormalOperationMode( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_INITIATE_NORMAL_OPERATION_MODE_COMMAND_ID, \
                           "" \
);



/** @brief Command description for zoneEnrollRequest
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: ZoneEnrollRequest
* @param zoneType uint16_t

* @param manufacturerCode uint16_t

*/
#define emberAfFillCommandIasZoneClusterZoneEnrollRequest( \
  zoneType,  manufacturerCode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_ZONE_ENROLL_REQUEST_COMMAND_ID, \
                           "vv", \
							  zoneType,							  manufacturerCode);



/** @brief Certain IAS Zone servers may have operational configurations that could be configured OTA or locally on the device. This command enables them to be remotely placed into a test mode so that the user or installer may configure their field of view, sensitivity, and other operational parameters.
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: InitiateTestMode
* @param testModeDuration uint8_t

* @param currentZoneSensitivityLevel uint8_t

*/
#define emberAfFillCommandIasZoneClusterInitiateTestMode( \
  testModeDuration,  currentZoneSensitivityLevel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_INITIATE_TEST_MODE_COMMAND_ID, \
                           "uu", \
							  testModeDuration,							  currentZoneSensitivityLevel);



/** @brief Confirms that the IAS Zone server has commenced normal operation mode.
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: InitiateNormalOperationModeResponse
*/
#define emberAfFillCommandIasZoneClusterInitiateNormalOperationModeResponse( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_INITIATE_NORMAL_OPERATION_MODE_RESPONSE_COMMAND_ID, \
                           "" \
);



/** @brief Confirms that the IAS Zone server has commenced test mode and that the IAS Zone client should treat any Zone Status Change Notification commands received from the sending IAS Zone server as being in response to test events.
* Cluster: IAS Zone, Attributes and commands for IAS security zone devices.
* Command: InitiateTestModeResponse
*/
#define emberAfFillCommandIasZoneClusterInitiateTestModeResponse( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ZONE_CLUSTER_ID, \
                           ZCL_INITIATE_TEST_MODE_RESPONSE_COMMAND_ID, \
                           "" \
);



/** @brief Command description for Arm
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: Arm
* @param armMode uint8_t

* @param armDisarmCode uint8_t *

* @param zoneId uint8_t

*/
#define emberAfFillCommandIasAceClusterArm( \
  armMode,  armDisarmCode,  zoneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_ARM_COMMAND_ID, \
                           "usu", \
							  armMode,							  armDisarmCode,							  zoneId);



/** @brief Command description for ArmResponse
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: ArmResponse
* @param armNotification uint8_t

*/
#define emberAfFillCommandIasAceClusterArmResponse( \
  armNotification) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_ARM_RESPONSE_COMMAND_ID, \
                           "u", \
							  armNotification);



/** @brief Command description for Bypass
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: Bypass
* @param numberOfZones uint8_t

* @param zoneIds uint8_t *
* @param zoneIdsLen uint16_t 
* @param armDisarmCode uint8_t *

*/
#define emberAfFillCommandIasAceClusterBypass( \
  numberOfZones,  zoneIds, zoneIdsLen,  armDisarmCode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_BYPASS_COMMAND_ID, \
                           "ubs", \
							  numberOfZones,							  zoneIds, zoneIdsLen,							  armDisarmCode);



/** @brief Command description for GetZoneIdMapResponse
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneIdMapResponse
* @param section0 uint16_t

* @param section1 uint16_t

* @param section2 uint16_t

* @param section3 uint16_t

* @param section4 uint16_t

* @param section5 uint16_t

* @param section6 uint16_t

* @param section7 uint16_t

* @param section8 uint16_t

* @param section9 uint16_t

* @param section10 uint16_t

* @param section11 uint16_t

* @param section12 uint16_t

* @param section13 uint16_t

* @param section14 uint16_t

* @param section15 uint16_t

*/
#define emberAfFillCommandIasAceClusterGetZoneIdMapResponse( \
  section0,  section1,  section2,  section3,  section4,  section5,  section6,  section7,  section8,  section9,  section10,  section11,  section12,  section13,  section14,  section15) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_ID_MAP_RESPONSE_COMMAND_ID, \
                           "vvvvvvvvvvvvvvvv", \
							  section0,							  section1,							  section2,							  section3,							  section4,							  section5,							  section6,							  section7,							  section8,							  section9,							  section10,							  section11,							  section12,							  section13,							  section14,							  section15);



/** @brief Command description for Emergency
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: Emergency
*/
#define emberAfFillCommandIasAceClusterEmergency( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_EMERGENCY_COMMAND_ID, \
                           "" \
);



/** @brief Command description for GetZoneInformationResponse
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneInformationResponse
* @param zoneId uint8_t

* @param zoneType uint16_t

* @param ieeeAddress uint8_t *

* @param zoneLabel uint8_t *

*/
#define emberAfFillCommandIasAceClusterGetZoneInformationResponse( \
  zoneId,  zoneType,  ieeeAddress,  zoneLabel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_INFORMATION_RESPONSE_COMMAND_ID, \
                           "uv8s", \
							  zoneId,							  zoneType,							  ieeeAddress,							  zoneLabel);



/** @brief Command description for Fire
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: Fire
*/
#define emberAfFillCommandIasAceClusterFire( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_FIRE_COMMAND_ID, \
                           "" \
);



/** @brief This command updates ACE clients in the system of changes to zone status recorded by the ACE server (e.g., IAS CIE device).
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: ZoneStatusChanged
* @param zoneId uint8_t

* @param zoneStatus uint16_t

* @param audibleNotification uint8_t

* @param zoneLabel uint8_t *

*/
#define emberAfFillCommandIasAceClusterZoneStatusChanged( \
  zoneId,  zoneStatus,  audibleNotification,  zoneLabel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_ZONE_STATUS_CHANGED_COMMAND_ID, \
                           "uvus", \
							  zoneId,							  zoneStatus,							  audibleNotification,							  zoneLabel);



/** @brief Command description for Panic
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: Panic
*/
#define emberAfFillCommandIasAceClusterPanic( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_PANIC_COMMAND_ID, \
                           "" \
);



/** @brief This command updates ACE clients in the system of changes to panel status recorded by the ACE server (e.g., IAS CIE device).
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: PanelStatusChanged
* @param panelStatus uint8_t

* @param secondsRemaining uint8_t

* @param audibleNotification uint8_t

* @param alarmStatus uint8_t

*/
#define emberAfFillCommandIasAceClusterPanelStatusChanged( \
  panelStatus,  secondsRemaining,  audibleNotification,  alarmStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_PANEL_STATUS_CHANGED_COMMAND_ID, \
                           "uuuu", \
							  panelStatus,							  secondsRemaining,							  audibleNotification,							  alarmStatus);



/** @brief Command description for GetZoneIdMap
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneIdMap
*/
#define emberAfFillCommandIasAceClusterGetZoneIdMap( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_ID_MAP_COMMAND_ID, \
                           "" \
);



/** @brief Command updates requesting IAS ACE clients in the system of changes to the security panel status recorded by the ACE server.
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetPanelStatusResponse
* @param panelStatus uint8_t

* @param secondsRemaining uint8_t

* @param audibleNotification uint8_t

* @param alarmStatus uint8_t

*/
#define emberAfFillCommandIasAceClusterGetPanelStatusResponse( \
  panelStatus,  secondsRemaining,  audibleNotification,  alarmStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_PANEL_STATUS_RESPONSE_COMMAND_ID, \
                           "uuuu", \
							  panelStatus,							  secondsRemaining,							  audibleNotification,							  alarmStatus);



/** @brief Command description for GetZoneInformation
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneInformation
* @param zoneId uint8_t

*/
#define emberAfFillCommandIasAceClusterGetZoneInformation( \
  zoneId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_INFORMATION_COMMAND_ID, \
                           "u", \
							  zoneId);



/** @brief Sets the list of bypassed zones on the IAS ACE client
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: SetBypassedZoneList
* @param numberOfZones uint8_t

* @param zoneIds uint8_t *
* @param zoneIdsLen uint16_t 
*/
#define emberAfFillCommandIasAceClusterSetBypassedZoneList( \
  numberOfZones,  zoneIds, zoneIdsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_SET_BYPASSED_ZONE_LIST_COMMAND_ID, \
                           "ub", \
							  numberOfZones,							  zoneIds, zoneIdsLen);



/** @brief Used by the ACE client to request an update to the status of the ACE server
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetPanelStatus
*/
#define emberAfFillCommandIasAceClusterGetPanelStatus( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_PANEL_STATUS_COMMAND_ID, \
                           "" \
);



/** @brief Provides the response of the security panel to the request from the IAS ACE client to bypass zones via a Bypass command.
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: BypassResponse
* @param numberOfZones uint8_t

* @param bypassResult uint8_t *
* @param bypassResultLen uint16_t 
*/
#define emberAfFillCommandIasAceClusterBypassResponse( \
  numberOfZones,  bypassResult, bypassResultLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_BYPASS_RESPONSE_COMMAND_ID, \
                           "ub", \
							  numberOfZones,							  bypassResult, bypassResultLen);



/** @brief Used by the ACE client to retrieve the bypassed zones
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetBypassedZoneList
*/
#define emberAfFillCommandIasAceClusterGetBypassedZoneList( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_BYPASSED_ZONE_LIST_COMMAND_ID, \
                           "" \
);



/** @brief This command updates requesting IAS ACE clients in the system of changes to the IAS Zone server statuses recorded by the ACE server (e.g., IAS CIE device).
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneStatusResponse
* @param zoneStatusComplete uint8_t

* @param numberOfZones uint8_t

* @param zoneStatusResult uint8_t *
* @param zoneStatusResultLen uint16_t 
*/
#define emberAfFillCommandIasAceClusterGetZoneStatusResponse( \
  zoneStatusComplete,  numberOfZones,  zoneStatusResult, zoneStatusResultLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_STATUS_RESPONSE_COMMAND_ID, \
                           "uub", \
							  zoneStatusComplete,							  numberOfZones,							  zoneStatusResult, zoneStatusResultLen);



/** @brief Used by the ACE client to request an update to the zone status of the ACE server
* Cluster: IAS ACE, Attributes and commands for IAS Ancillary Control Equipment.
* Command: GetZoneStatus
* @param startingZoneId uint8_t

* @param maxNumberOfZoneIds uint8_t

* @param zoneStatusMaskFlag uint8_t

* @param zoneStatusMask uint16_t

*/
#define emberAfFillCommandIasAceClusterGetZoneStatus( \
  startingZoneId,  maxNumberOfZoneIds,  zoneStatusMaskFlag,  zoneStatusMask) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_ACE_CLUSTER_ID, \
                           ZCL_GET_ZONE_STATUS_COMMAND_ID, \
                           "uuuv", \
							  startingZoneId,							  maxNumberOfZoneIds,							  zoneStatusMaskFlag,							  zoneStatusMask);



/** @brief Command description for StartWarning
* Cluster: IAS WD, Attributes and commands for IAS Warning Devices.
* Command: StartWarning
* @param warningInfo uint8_t

* @param warningDuration uint16_t

* @param strobeDutyCycle uint8_t

* @param strobeLevel uint8_t

*/
#define emberAfFillCommandIasWdClusterStartWarning( \
  warningInfo,  warningDuration,  strobeDutyCycle,  strobeLevel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_WD_CLUSTER_ID, \
                           ZCL_START_WARNING_COMMAND_ID, \
                           "uvuu", \
							  warningInfo,							  warningDuration,							  strobeDutyCycle,							  strobeLevel);



/** @brief Command description for Squawk
* Cluster: IAS WD, Attributes and commands for IAS Warning Devices.
* Command: Squawk
* @param squawkInfo uint8_t

*/
#define emberAfFillCommandIasWdClusterSquawk( \
  squawkInfo) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_IAS_WD_CLUSTER_ID, \
                           ZCL_SQUAWK_COMMAND_ID, \
                           "u", \
							  squawkInfo);



/** @brief This command is generated when an application wishes to find the ZigBee address (node, endpoint) of the Generic Tunnel server cluster with a given ProtocolAddress attribute. The command is typically multicast to a group of inter-communicating Generic Tunnel clusters
* Cluster: Generic Tunnel, The minimum common commands and attributes required to tunnel any protocol.
* Command: MatchProtocolAddress
* @param protocolAddress uint8_t *

*/
#define emberAfFillCommandGenericTunnelClusterMatchProtocolAddress( \
  protocolAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GENERIC_TUNNEL_CLUSTER_ID, \
                           ZCL_MATCH_PROTOCOL_ADDRESS_COMMAND_ID, \
                           "s", \
							  protocolAddress);



/** @brief This command is generated upon receipt of a Match Protocol Address command to indicate that the Protocol Address was successfully matched.
* Cluster: Generic Tunnel, The minimum common commands and attributes required to tunnel any protocol.
* Command: MatchProtocolAddressResponse
* @param deviceIeeeAddress uint8_t *

* @param protocolAddress uint8_t *

*/
#define emberAfFillCommandGenericTunnelClusterMatchProtocolAddressResponse( \
  deviceIeeeAddress,  protocolAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GENERIC_TUNNEL_CLUSTER_ID, \
                           ZCL_MATCH_PROTOCOL_ADDRESS_RESPONSE_COMMAND_ID, \
                           "8s", \
							  deviceIeeeAddress,							  protocolAddress);



/** @brief This command is typically sent upon startup, and whenever the ProtocolAddress attribute changes. It is typically multicast to a group of inter-communicating Generic Tunnel clusters.
* Cluster: Generic Tunnel, The minimum common commands and attributes required to tunnel any protocol.
* Command: AdvertiseProtocolAddress
* @param protocolAddress uint8_t *

*/
#define emberAfFillCommandGenericTunnelClusterAdvertiseProtocolAddress( \
  protocolAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GENERIC_TUNNEL_CLUSTER_ID, \
                           ZCL_ADVERTISE_PROTOCOL_ADDRESS_COMMAND_ID, \
                           "s", \
							  protocolAddress);



/** @brief This command is generated when a BACnet network layer wishes to transfer a BACnet NPDU across a ZigBee tunnel to another BACnet network layer.
* Cluster: BACnet Protocol Tunnel, Commands and attributes required to tunnel the BACnet protocol.
* Command: TransferNpdu
* @param npdu uint8_t *
* @param npduLen uint16_t 
*/
#define emberAfFillCommandBacnetProtocolTunnelClusterTransferNpdu( \
  npdu, npduLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BACNET_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_TRANSFER_NPDU_COMMAND_ID, \
                           "b", \
							  npdu, npduLen);



/** @brief This command is generated when an 11073 network layer wishes to transfer an 11073 APDU across a ZigBee tunnel to another 11073 network layer.
* Cluster: 11073 Protocol Tunnel, Attributes and commands for the 11073 protocol tunnel used for ZigBee Health Care.
* Command: TransferAPDU
* @param apdu uint8_t *

*/
#define emberAfFillCommand11073ProtocolTunnelClusterTransferAPDU( \
  apdu) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_11073_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_TRANSFER_APDU_COMMAND_ID, \
                           "s", \
							  apdu);



/** @brief This command is generated when an Health Care client wishes to connect to a Health Care server for the purposes of transmitting 11073 APDUs across the 11073 tunnel.
* Cluster: 11073 Protocol Tunnel, Attributes and commands for the 11073 protocol tunnel used for ZigBee Health Care.
* Command: ConnectRequest
* @param connectControl uint8_t

* @param idleTimeout uint16_t

* @param managerTarget uint8_t *

* @param managerEndpoint uint8_t

*/
#define emberAfFillCommand11073ProtocolTunnelClusterConnectRequest( \
  connectControl,  idleTimeout,  managerTarget,  managerEndpoint) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_11073_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_CONNECT_REQUEST_COMMAND_ID, \
                           "uv8u", \
							  connectControl,							  idleTimeout,							  managerTarget,							  managerEndpoint);



/** @brief This command is generated when an Health Care client wishes to disconnect from a Health Care server.
* Cluster: 11073 Protocol Tunnel, Attributes and commands for the 11073 protocol tunnel used for ZigBee Health Care.
* Command: DisconnectRequest
* @param managerIEEEAddress uint8_t *

*/
#define emberAfFillCommand11073ProtocolTunnelClusterDisconnectRequest( \
  managerIEEEAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_11073_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_DISCONNECT_REQUEST_COMMAND_ID, \
                           "8", \
							  managerIEEEAddress);



/** @brief Generated in response to requests related to connection or any event that causes the tunnel to become disconnected.
* Cluster: 11073 Protocol Tunnel, Attributes and commands for the 11073 protocol tunnel used for ZigBee Health Care.
* Command: ConnectStatusNotification
* @param connectStatus uint8_t

*/
#define emberAfFillCommand11073ProtocolTunnelClusterConnectStatusNotification( \
  connectStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_11073_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_CONNECT_STATUS_NOTIFICATION_COMMAND_ID, \
                           "u", \
							  connectStatus);



/** @brief Command description for TransferApdu
* Cluster: ISO 7816 Protocol Tunnel, Commands and attributes for mobile office solutions including ZigBee devices.
* Command: TransferApduFromClient
* @param apdu uint8_t *

*/
#define emberAfFillCommandIso7816ProtocolTunnelClusterTransferApduFromClient( \
  apdu) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ISO7816_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_TRANSFER_APDU_FROM_CLIENT_COMMAND_ID, \
                           "s", \
							  apdu);



/** @brief Command description for TransferApdu
* Cluster: ISO 7816 Protocol Tunnel, Commands and attributes for mobile office solutions including ZigBee devices.
* Command: TransferApduFromServer
* @param apdu uint8_t *

*/
#define emberAfFillCommandIso7816ProtocolTunnelClusterTransferApduFromServer( \
  apdu) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ISO7816_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_TRANSFER_APDU_FROM_SERVER_COMMAND_ID, \
                           "s", \
							  apdu);



/** @brief Command description for InsertSmartCard
* Cluster: ISO 7816 Protocol Tunnel, Commands and attributes for mobile office solutions including ZigBee devices.
* Command: InsertSmartCard
*/
#define emberAfFillCommandIso7816ProtocolTunnelClusterInsertSmartCard( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ISO7816_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_INSERT_SMART_CARD_COMMAND_ID, \
                           "" \
);



/** @brief Command description for ExtractSmartCard
* Cluster: ISO 7816 Protocol Tunnel, Commands and attributes for mobile office solutions including ZigBee devices.
* Command: ExtractSmartCard
*/
#define emberAfFillCommandIso7816ProtocolTunnelClusterExtractSmartCard( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ISO7816_PROTOCOL_TUNNEL_CLUSTER_ID, \
                           ZCL_EXTRACT_SMART_CARD_COMMAND_ID, \
                           "" \
);



/** @brief The PublishPrice command is generated in response to receiving a Get Current Price command, in response to a Get Scheduled Prices command, and when an update to the pricing information is available from the commodity provider, either before or when a TOU price becomes active.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishPrice
* @param providerId uint32_t

* @param rateLabel uint8_t *

* @param issuerEventId uint32_t

* @param currentTime uint32_t

* @param unitOfMeasure uint8_t

* @param currency uint16_t

* @param priceTrailingDigitAndPriceTier uint8_t

* @param numberOfPriceTiersAndRegisterTier uint8_t

* @param startTime uint32_t

* @param durationInMinutes uint16_t

* @param price uint32_t

* @param priceRatio uint8_t

* @param generationPrice uint32_t

* @param generationPriceRatio uint8_t

* @param alternateCostDelivered uint32_t

* @param alternateCostUnit uint8_t

* @param alternateCostTrailingDigit uint8_t

* @param numberOfBlockThresholds uint8_t

* @param priceControl uint8_t

* @param numberOfGenerationTiers uint8_t

* @param generationTier uint8_t

* @param extendedNumberOfPriceTiers uint8_t

* @param extendedPriceTier uint8_t

* @param extendedRegisterTier uint8_t

*/
#define emberAfFillCommandPriceClusterPublishPrice( \
  providerId,  rateLabel,  issuerEventId,  currentTime,  unitOfMeasure,  currency,  priceTrailingDigitAndPriceTier,  numberOfPriceTiersAndRegisterTier,  startTime,  durationInMinutes,  price,  priceRatio,  generationPrice,  generationPriceRatio,  alternateCostDelivered,  alternateCostUnit,  alternateCostTrailingDigit,  numberOfBlockThresholds,  priceControl,  numberOfGenerationTiers,  generationTier,  extendedNumberOfPriceTiers,  extendedPriceTier,  extendedRegisterTier) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_PRICE_COMMAND_ID, \
                           "wswwuvuuwvwuwuwuuuuuuuuu", \
							  providerId,							  rateLabel,							  issuerEventId,							  currentTime,							  unitOfMeasure,							  currency,							  priceTrailingDigitAndPriceTier,							  numberOfPriceTiersAndRegisterTier,							  startTime,							  durationInMinutes,							  price,							  priceRatio,							  generationPrice,							  generationPriceRatio,							  alternateCostDelivered,							  alternateCostUnit,							  alternateCostTrailingDigit,							  numberOfBlockThresholds,							  priceControl,							  numberOfGenerationTiers,							  generationTier,							  extendedNumberOfPriceTiers,							  extendedPriceTier,							  extendedRegisterTier);



/** @brief The GetCurrentPrice command initiates a PublishPrice command for the current time.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetCurrentPrice
* @param commandOptions uint8_t

*/
#define emberAfFillCommandPriceClusterGetCurrentPrice( \
  commandOptions) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CURRENT_PRICE_COMMAND_ID, \
                           "u", \
							  commandOptions);



/** @brief The PublishBlockPeriod command is generated in response to receiving a GetBlockPeriod(s) command or when an update to the block tariff schedule is available from the commodity provider.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishBlockPeriod
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param blockPeriodStartTime uint32_t

* @param blockPeriodDuration uint32_t

* @param blockPeriodControl uint8_t

* @param blockPeriodDurationType uint8_t

* @param tariffType uint8_t

* @param tariffResolutionPeriod uint8_t

*/
#define emberAfFillCommandPriceClusterPublishBlockPeriod( \
  providerId,  issuerEventId,  blockPeriodStartTime,  blockPeriodDuration,  blockPeriodControl,  blockPeriodDurationType,  tariffType,  tariffResolutionPeriod) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_BLOCK_PERIOD_COMMAND_ID, \
                           "wwwxuuuu", \
							  providerId,							  issuerEventId,							  blockPeriodStartTime,							  blockPeriodDuration,							  blockPeriodControl,							  blockPeriodDurationType,							  tariffType,							  tariffResolutionPeriod);



/** @brief The GetScheduledPrices command initiates a PublishPrice command for available price events.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetScheduledPrices
* @param startTime uint32_t

* @param numberOfEvents uint8_t

*/
#define emberAfFillCommandPriceClusterGetScheduledPrices( \
  startTime,  numberOfEvents) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_SCHEDULED_PRICES_COMMAND_ID, \
                           "wu", \
							  startTime,							  numberOfEvents);



/** @brief The PublishConversionFactor command is sent in response to a GetConversionFactor command or if a new Conversion factor is available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishConversionFactor
* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param conversionFactor uint32_t

* @param conversionFactorTrailingDigit uint8_t

*/
#define emberAfFillCommandPriceClusterPublishConversionFactor( \
  issuerEventId,  startTime,  conversionFactor,  conversionFactorTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CONVERSION_FACTOR_COMMAND_ID, \
                           "wwwu", \
							  issuerEventId,							  startTime,							  conversionFactor,							  conversionFactorTrailingDigit);



/** @brief The PriceAcknowledgement command described provides the ability to acknowledge a previously sent PublishPrice command.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PriceAcknowledgement
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param priceAckTime uint32_t

* @param control uint8_t

*/
#define emberAfFillCommandPriceClusterPriceAcknowledgement( \
  providerId,  issuerEventId,  priceAckTime,  control) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PRICE_ACKNOWLEDGEMENT_COMMAND_ID, \
                           "wwwu", \
							  providerId,							  issuerEventId,							  priceAckTime,							  control);



/** @brief The PublishCalorificValue command is sent in response to a GetCalorificValue command or if a new calorific value is available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishCalorificValue
* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param calorificValue uint32_t

* @param calorificValueUnit uint8_t

* @param calorificValueTrailingDigit uint8_t

*/
#define emberAfFillCommandPriceClusterPublishCalorificValue( \
  issuerEventId,  startTime,  calorificValue,  calorificValueUnit,  calorificValueTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CALORIFIC_VALUE_COMMAND_ID, \
                           "wwwuu", \
							  issuerEventId,							  startTime,							  calorificValue,							  calorificValueUnit,							  calorificValueTrailingDigit);



/** @brief The GetBlockPeriods command initiates a PublishBlockPeriod command for the currently scheduled block periods.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetBlockPeriods
* @param startTime uint32_t

* @param numberOfEvents uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterGetBlockPeriods( \
  startTime,  numberOfEvents,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_BLOCK_PERIODS_COMMAND_ID, \
                           "wuu", \
							  startTime,							  numberOfEvents,							  tariffType);



/** @brief The PublishTariffInformation command is sent in response to a GetTariffInformation command or if new tariff information is available (including price matrix and block thresholds).
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishTariffInformation
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerTariffId uint32_t

* @param startTime uint32_t

* @param tariffTypeChargingScheme uint8_t

* @param tariffLabel uint8_t *

* @param numberOfPriceTiersInUse uint8_t

* @param numberOfBlockThresholdsInUse uint8_t

* @param unitOfMeasure uint8_t

* @param currency uint16_t

* @param priceTrailingDigit uint8_t

* @param standingCharge uint32_t

* @param tierBlockMode uint8_t

* @param blockThresholdMultiplier uint32_t

* @param blockThresholdDivisor uint32_t

*/
#define emberAfFillCommandPriceClusterPublishTariffInformation( \
  providerId,  issuerEventId,  issuerTariffId,  startTime,  tariffTypeChargingScheme,  tariffLabel,  numberOfPriceTiersInUse,  numberOfBlockThresholdsInUse,  unitOfMeasure,  currency,  priceTrailingDigit,  standingCharge,  tierBlockMode,  blockThresholdMultiplier,  blockThresholdDivisor) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_TARIFF_INFORMATION_COMMAND_ID, \
                           "wwwwusuuuvuwuxx", \
							  providerId,							  issuerEventId,							  issuerTariffId,							  startTime,							  tariffTypeChargingScheme,							  tariffLabel,							  numberOfPriceTiersInUse,							  numberOfBlockThresholdsInUse,							  unitOfMeasure,							  currency,							  priceTrailingDigit,							  standingCharge,							  tierBlockMode,							  blockThresholdMultiplier,							  blockThresholdDivisor);



/** @brief The GetConversionFactor command initiates a PublishConversionFactor command for the scheduled conversion factor updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetConversionFactor
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

*/
#define emberAfFillCommandPriceClusterGetConversionFactor( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CONVERSION_FACTOR_COMMAND_ID, \
                           "wwu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands);



/** @brief PublishPriceMatrix command is used to publish the Block Price Information Set (up to 15 tiers x 15 blocks) and the Extended Price Information Set (up to 48 tiers).  The PublishPriceMatrix command is sent in response to a GetPriceMatrix command.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishPriceMatrix
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param issuerTariffId uint32_t

* @param commandIndex uint8_t

* @param numberOfCommands uint8_t

* @param subPayloadControl uint8_t

* @param payload uint8_t *
* @param payloadLen uint16_t 
*/
#define emberAfFillCommandPriceClusterPublishPriceMatrix( \
  providerId,  issuerEventId,  startTime,  issuerTariffId,  commandIndex,  numberOfCommands,  subPayloadControl,  payload, payloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_PRICE_MATRIX_COMMAND_ID, \
                           "wwwwuuub", \
							  providerId,							  issuerEventId,							  startTime,							  issuerTariffId,							  commandIndex,							  numberOfCommands,							  subPayloadControl,							  payload, payloadLen);



/** @brief The GetCalorificValue command initiates a PublishCalorificValue command for the scheduled conversion factor updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetCalorificValue
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

*/
#define emberAfFillCommandPriceClusterGetCalorificValue( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CALORIFIC_VALUE_COMMAND_ID, \
                           "wwu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands);



/** @brief The PublishBlockThreshold command is sent in response to a GetBlockThreshold command.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishBlockThresholds
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param issuerTariffId uint32_t

* @param commandIndex uint8_t

* @param numberOfCommands uint8_t

* @param subPayloadControl uint8_t

* @param payload uint8_t *
* @param payloadLen uint16_t 
*/
#define emberAfFillCommandPriceClusterPublishBlockThresholds( \
  providerId,  issuerEventId,  startTime,  issuerTariffId,  commandIndex,  numberOfCommands,  subPayloadControl,  payload, payloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_BLOCK_THRESHOLDS_COMMAND_ID, \
                           "wwwwuuub", \
							  providerId,							  issuerEventId,							  startTime,							  issuerTariffId,							  commandIndex,							  numberOfCommands,							  subPayloadControl,							  payload, payloadLen);



/** @brief The GetTariffInformation command initiates a PublishTariffInformation command for the scheduled tariff updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetTariffInformation
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterGetTariffInformation( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_TARIFF_INFORMATION_COMMAND_ID, \
                           "wwuu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands,							  tariffType);



/** @brief The PublishCO2Value command is sent in response to a GetCO2Value command or if a new CO2 conversion factor is available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishCO2Value
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param tariffType uint8_t

* @param cO2Value uint32_t

* @param cO2ValueUnit uint8_t

* @param cO2ValueTrailingDigit uint8_t

*/
#define emberAfFillCommandPriceClusterPublishCO2Value( \
  providerId,  issuerEventId,  startTime,  tariffType,  cO2Value,  cO2ValueUnit,  cO2ValueTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CO2_VALUE_COMMAND_ID, \
                           "wwwuwuu", \
							  providerId,							  issuerEventId,							  startTime,							  tariffType,							  cO2Value,							  cO2ValueUnit,							  cO2ValueTrailingDigit);



/** @brief The GetPriceMatrix command initiates a PublishPriceMatrix command for the scheduled Price Matrix updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetPriceMatrix
* @param issuerTariffId uint32_t

*/
#define emberAfFillCommandPriceClusterGetPriceMatrix( \
  issuerTariffId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_PRICE_MATRIX_COMMAND_ID, \
                           "w", \
							  issuerTariffId);



/** @brief The PublishTierLabels command is generated in response to receiving a GetTierLabels command or when there is a tier label change.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishTierLabels
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerTariffId uint32_t

* @param commandIndex uint8_t

* @param numberOfCommands uint8_t

* @param numberOfLabels uint8_t

* @param tierLabelsPayload uint8_t *
* @param tierLabelsPayloadLen uint16_t 
*/
#define emberAfFillCommandPriceClusterPublishTierLabels( \
  providerId,  issuerEventId,  issuerTariffId,  commandIndex,  numberOfCommands,  numberOfLabels,  tierLabelsPayload, tierLabelsPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_TIER_LABELS_COMMAND_ID, \
                           "wwwuuub", \
							  providerId,							  issuerEventId,							  issuerTariffId,							  commandIndex,							  numberOfCommands,							  numberOfLabels,							  tierLabelsPayload, tierLabelsPayloadLen);



/** @brief The GetBlockThresholds command initiates a PublishBlockThreshold command for the scheduled Block Threshold updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetBlockThresholds
* @param issuerTariffId uint32_t

*/
#define emberAfFillCommandPriceClusterGetBlockThresholds( \
  issuerTariffId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_BLOCK_THRESHOLDS_COMMAND_ID, \
                           "w", \
							  issuerTariffId);



/** @brief The PublishBillingPeriod command is generated in response to receiving a GetBillingPeriod(s) command or when an update to the Billing schedule is available from the commodity Supplier.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishBillingPeriod
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param billingPeriodStartTime uint32_t

* @param billingPeriodDuration uint32_t

* @param billingPeriodDurationType uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterPublishBillingPeriod( \
  providerId,  issuerEventId,  billingPeriodStartTime,  billingPeriodDuration,  billingPeriodDurationType,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_BILLING_PERIOD_COMMAND_ID, \
                           "wwwxuu", \
							  providerId,							  issuerEventId,							  billingPeriodStartTime,							  billingPeriodDuration,							  billingPeriodDurationType,							  tariffType);



/** @brief The GetCO2Value command initiates a PublishCO2Value command for the scheduled CO2 conversion factor updates.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetCO2Value
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterGetCO2Value( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CO2_VALUE_COMMAND_ID, \
                           "wwuu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands,							  tariffType);



/** @brief The PublishConsolidatedBill command is used to make consolidated billing information of previous billing periods available to other end devices.  This command is issued in response to a GetConsolidatedBill command or if new billing information is available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishConsolidatedBill
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param billingPeriodStartTime uint32_t

* @param billingPeriodDuration uint32_t

* @param billingPeriodDurationType uint8_t

* @param tariffType uint8_t

* @param consolidatedBill uint32_t

* @param currency uint16_t

* @param billTrailingDigit uint8_t

*/
#define emberAfFillCommandPriceClusterPublishConsolidatedBill( \
  providerId,  issuerEventId,  billingPeriodStartTime,  billingPeriodDuration,  billingPeriodDurationType,  tariffType,  consolidatedBill,  currency,  billTrailingDigit) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CONSOLIDATED_BILL_COMMAND_ID, \
                           "wwwxuuwvu", \
							  providerId,							  issuerEventId,							  billingPeriodStartTime,							  billingPeriodDuration,							  billingPeriodDurationType,							  tariffType,							  consolidatedBill,							  currency,							  billTrailingDigit);



/** @brief The GetTierLabels command allows a client to retrieve the tier labels associated with a given tariff; this command initiates a PublishTierLabels command from the server.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetTierLabels
* @param issuerTariffId uint32_t

*/
#define emberAfFillCommandPriceClusterGetTierLabels( \
  issuerTariffId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_TIER_LABELS_COMMAND_ID, \
                           "w", \
							  issuerTariffId);



/** @brief The PublishCPPEvent command is sent from an ESI to its price clients to notify them of a Critical Peak Pricing event.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishCppEvent
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param durationInMinutes uint16_t

* @param tariffType uint8_t

* @param cppPriceTier uint8_t

* @param cppAuth uint8_t

*/
#define emberAfFillCommandPriceClusterPublishCppEvent( \
  providerId,  issuerEventId,  startTime,  durationInMinutes,  tariffType,  cppPriceTier,  cppAuth) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CPP_EVENT_COMMAND_ID, \
                           "wwwvuuu", \
							  providerId,							  issuerEventId,							  startTime,							  durationInMinutes,							  tariffType,							  cppPriceTier,							  cppAuth);



/** @brief The GetBillingPeriod command initiates one or more PublishBillingPeriod commands for the currently scheduled billing periods.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetBillingPeriod
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterGetBillingPeriod( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_BILLING_PERIOD_COMMAND_ID, \
                           "wwuu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands,							  tariffType);



/** @brief The PublishCreditPayment command is used to update the credit payment information is available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishCreditPayment
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param creditPaymentDueDate uint32_t

* @param creditPaymentOverDueAmount uint32_t

* @param creditPaymentStatus uint8_t

* @param creditPayment uint32_t

* @param creditPaymentDate uint32_t

* @param creditPaymentRef uint8_t *

*/
#define emberAfFillCommandPriceClusterPublishCreditPayment( \
  providerId,  issuerEventId,  creditPaymentDueDate,  creditPaymentOverDueAmount,  creditPaymentStatus,  creditPayment,  creditPaymentDate,  creditPaymentRef) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CREDIT_PAYMENT_COMMAND_ID, \
                           "wwwwuwws", \
							  providerId,							  issuerEventId,							  creditPaymentDueDate,							  creditPaymentOverDueAmount,							  creditPaymentStatus,							  creditPayment,							  creditPaymentDate,							  creditPaymentRef);



/** @brief The GetConsolidatedBill command initiates one or more PublishConsolidatedBill commands with the requested billing information.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetConsolidatedBill
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCommands uint8_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterGetConsolidatedBill( \
  earliestStartTime,  minIssuerEventId,  numberOfCommands,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CONSOLIDATED_BILL_COMMAND_ID, \
                           "wwuu", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCommands,							  tariffType);



/** @brief The PublishCurrencyConversion command is sent in response to a GetCurrencyConversion command or when a new currency becomes available.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: PublishCurrencyConversion
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param oldCurrency uint16_t

* @param newCurrency uint16_t

* @param conversionFactor uint32_t

* @param conversionFactorTrailingDigit uint8_t

* @param currencyChangeControlFlags uint32_t

*/
#define emberAfFillCommandPriceClusterPublishCurrencyConversion( \
  providerId,  issuerEventId,  startTime,  oldCurrency,  newCurrency,  conversionFactor,  conversionFactorTrailingDigit,  currencyChangeControlFlags) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_PUBLISH_CURRENCY_CONVERSION_COMMAND_ID, \
                           "wwwvvwuw", \
							  providerId,							  issuerEventId,							  startTime,							  oldCurrency,							  newCurrency,							  conversionFactor,							  conversionFactorTrailingDigit,							  currencyChangeControlFlags);



/** @brief The CPPEventResponse command is sent from a Client (IHD) to the ESI to notify it of a Critical Peak Pricing event authorization.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: CppEventResponse
* @param issuerEventId uint32_t

* @param cppAuth uint8_t

*/
#define emberAfFillCommandPriceClusterCppEventResponse( \
  issuerEventId,  cppAuth) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_CPP_EVENT_RESPONSE_COMMAND_ID, \
                           "wu", \
							  issuerEventId,							  cppAuth);



/** @brief The CancelTariff command indicates that all data associated with a particular tariff instance should be discarded.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: CancelTariff
* @param providerId uint32_t

* @param issuerTariffId uint32_t

* @param tariffType uint8_t

*/
#define emberAfFillCommandPriceClusterCancelTariff( \
  providerId,  issuerTariffId,  tariffType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_CANCEL_TARIFF_COMMAND_ID, \
                           "wwu", \
							  providerId,							  issuerTariffId,							  tariffType);



/** @brief The GetCreditPayment command initiates PublishCreditPayment commands for the requested credit payment information.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetCreditPayment
* @param latestEndTime uint32_t

* @param numberOfRecords uint8_t

*/
#define emberAfFillCommandPriceClusterGetCreditPayment( \
  latestEndTime,  numberOfRecords) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CREDIT_PAYMENT_COMMAND_ID, \
                           "wu", \
							  latestEndTime,							  numberOfRecords);



/** @brief The GetCurrencyConversionCommand command initiates a PublishCurrencyConversion command for the currency conversion factor updates. A server shall be capable of storing both the old and the new currencies.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetCurrencyConversionCommand
*/
#define emberAfFillCommandPriceClusterGetCurrencyConversionCommand( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_CURRENCY_CONVERSION_COMMAND_COMMAND_ID, \
                           "" \
);



/** @brief The GetTariffCancellation command initiates the return of the last CancelTariff command held on the associated server.
* Cluster: Price, The Price Cluster provides the mechanism for communicating Gas, Energy, or Water pricing information within the premises.
* Command: GetTariffCancellation
*/
#define emberAfFillCommandPriceClusterGetTariffCancellation( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PRICE_CLUSTER_ID, \
                           ZCL_GET_TARIFF_CANCELLATION_COMMAND_ID, \
                           "" \
);



/** @brief Command description for LoadControlEvent
* Cluster: Demand Response and Load Control, This cluster provides an interface to the functionality of Smart Energy Demand Response and Load Control. Devices targeted by this cluster include thermostats and devices that support load control.
* Command: LoadControlEvent
* @param issuerEventId uint32_t

* @param deviceClass uint16_t

* @param utilityEnrollmentGroup uint8_t

* @param startTime uint32_t

* @param durationInMinutes uint16_t

* @param criticalityLevel uint8_t

* @param coolingTemperatureOffset uint8_t

* @param heatingTemperatureOffset uint8_t

* @param coolingTemperatureSetPoint int16_t

* @param heatingTemperatureSetPoint int16_t

* @param averageLoadAdjustmentPercentage int8_t

* @param dutyCycle uint8_t

* @param eventControl uint8_t

*/
#define emberAfFillCommandDemandResponseLoadControlClusterLoadControlEvent( \
  issuerEventId,  deviceClass,  utilityEnrollmentGroup,  startTime,  durationInMinutes,  criticalityLevel,  coolingTemperatureOffset,  heatingTemperatureOffset,  coolingTemperatureSetPoint,  heatingTemperatureSetPoint,  averageLoadAdjustmentPercentage,  dutyCycle,  eventControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, \
                           ZCL_LOAD_CONTROL_EVENT_COMMAND_ID, \
                           "wvuwvuuuvvuuu", \
							  issuerEventId,							  deviceClass,							  utilityEnrollmentGroup,							  startTime,							  durationInMinutes,							  criticalityLevel,							  coolingTemperatureOffset,							  heatingTemperatureOffset,							  coolingTemperatureSetPoint,							  heatingTemperatureSetPoint,							  averageLoadAdjustmentPercentage,							  dutyCycle,							  eventControl);



/** @brief Command description for ReportEventStatus
* Cluster: Demand Response and Load Control, This cluster provides an interface to the functionality of Smart Energy Demand Response and Load Control. Devices targeted by this cluster include thermostats and devices that support load control.
* Command: ReportEventStatus
* @param issuerEventId uint32_t

* @param eventStatus uint8_t

* @param eventStatusTime uint32_t

* @param criticalityLevelApplied uint8_t

* @param coolingTemperatureSetPointApplied uint16_t

* @param heatingTemperatureSetPointApplied uint16_t

* @param averageLoadAdjustmentPercentageApplied int8_t

* @param dutyCycleApplied uint8_t

* @param eventControl uint8_t

* @param signatureType uint8_t

* @param signature Signature

*/
#define emberAfFillCommandDemandResponseLoadControlClusterReportEventStatus( \
  issuerEventId,  eventStatus,  eventStatusTime,  criticalityLevelApplied,  coolingTemperatureSetPointApplied,  heatingTemperatureSetPointApplied,  averageLoadAdjustmentPercentageApplied,  dutyCycleApplied,  eventControl,  signatureType,  signature) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, \
                           ZCL_REPORT_EVENT_STATUS_COMMAND_ID, \
                           "wuwuvvuuuub", \
							  issuerEventId,							  eventStatus,							  eventStatusTime,							  criticalityLevelApplied,							  coolingTemperatureSetPointApplied,							  heatingTemperatureSetPointApplied,							  averageLoadAdjustmentPercentageApplied,							  dutyCycleApplied,							  eventControl,							  signatureType,							  signature);



/** @brief Command description for CancelLoadControlEvent
* Cluster: Demand Response and Load Control, This cluster provides an interface to the functionality of Smart Energy Demand Response and Load Control. Devices targeted by this cluster include thermostats and devices that support load control.
* Command: CancelLoadControlEvent
* @param issuerEventId uint32_t

* @param deviceClass uint16_t

* @param utilityEnrollmentGroup uint8_t

* @param cancelControl uint8_t

* @param effectiveTime uint32_t

*/
#define emberAfFillCommandDemandResponseLoadControlClusterCancelLoadControlEvent( \
  issuerEventId,  deviceClass,  utilityEnrollmentGroup,  cancelControl,  effectiveTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, \
                           ZCL_CANCEL_LOAD_CONTROL_EVENT_COMMAND_ID, \
                           "wvuuw", \
							  issuerEventId,							  deviceClass,							  utilityEnrollmentGroup,							  cancelControl,							  effectiveTime);



/** @brief Command description for GetScheduledEvents
* Cluster: Demand Response and Load Control, This cluster provides an interface to the functionality of Smart Energy Demand Response and Load Control. Devices targeted by this cluster include thermostats and devices that support load control.
* Command: GetScheduledEvents
* @param startTime uint32_t

* @param numberOfEvents uint8_t

* @param issuerEventId uint32_t

*/
#define emberAfFillCommandDemandResponseLoadControlClusterGetScheduledEvents( \
  startTime,  numberOfEvents,  issuerEventId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, \
                           ZCL_GET_SCHEDULED_EVENTS_COMMAND_ID, \
                           "wuw", \
							  startTime,							  numberOfEvents,							  issuerEventId);



/** @brief Command description for CancelAllLoadControlEvents
* Cluster: Demand Response and Load Control, This cluster provides an interface to the functionality of Smart Energy Demand Response and Load Control. Devices targeted by this cluster include thermostats and devices that support load control.
* Command: CancelAllLoadControlEvents
* @param cancelControl uint8_t

*/
#define emberAfFillCommandDemandResponseLoadControlClusterCancelAllLoadControlEvents( \
  cancelControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER_ID, \
                           ZCL_CANCEL_ALL_LOAD_CONTROL_EVENTS_COMMAND_ID, \
                           "u", \
							  cancelControl);



/** @brief This command is generated when the Client command GetProfile is received.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetProfileResponse
* @param endTime uint32_t

* @param status uint8_t

* @param profileIntervalPeriod uint8_t

* @param numberOfPeriodsDelivered uint8_t

* @param intervals uint8_t *
* @param intervalsLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterGetProfileResponse( \
  endTime,  status,  profileIntervalPeriod,  numberOfPeriodsDelivered,  intervals, intervalsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_PROFILE_RESPONSE_COMMAND_ID, \
                           "wuuub", \
							  endTime,							  status,							  profileIntervalPeriod,							  numberOfPeriodsDelivered,							  intervals, intervalsLen);



/** @brief The GetProfile command is generated when a client device wishes to retrieve a list of captured Energy, Gas or water consumption for profiling purposes.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetProfile
* @param intervalChannel uint8_t

* @param endTime uint32_t

* @param numberOfPeriods uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterGetProfile( \
  intervalChannel,  endTime,  numberOfPeriods) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_PROFILE_COMMAND_ID, \
                           "uwu", \
							  intervalChannel,							  endTime,							  numberOfPeriods);



/** @brief This command is used to request the ESI to mirror Metering Device data.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: RequestMirror
*/
#define emberAfFillCommandSimpleMeteringClusterRequestMirror( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_REQUEST_MIRROR_COMMAND_ID, \
                           "" \
);



/** @brief The Request Mirror Response Command allows the ESI to inform a sleepy Metering Device it has the ability to store and mirror its data.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: RequestMirrorResponse
* @param endpointId uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterRequestMirrorResponse( \
  endpointId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_REQUEST_MIRROR_RESPONSE_COMMAND_ID, \
                           "v", \
							  endpointId);



/** @brief This command is used to request the ESI to remove its mirror of Metering Device data.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: RemoveMirror
*/
#define emberAfFillCommandSimpleMeteringClusterRemoveMirror( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_REMOVE_MIRROR_COMMAND_ID, \
                           "" \
);



/** @brief The Mirror Removed Command allows the ESI to inform a sleepy Metering Device mirroring support has been removed or halted.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: MirrorRemoved
* @param endpointId uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterMirrorRemoved( \
  endpointId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_MIRROR_REMOVED_COMMAND_ID, \
                           "v", \
							  endpointId);



/** @brief This command is generated when the client command Request Fast Poll Mode is received.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: RequestFastPollModeResponse
* @param appliedUpdatePeriod uint8_t

* @param fastPollModeEndtime uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterRequestFastPollModeResponse( \
  appliedUpdatePeriod,  fastPollModeEndtime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_REQUEST_FAST_POLL_MODE_RESPONSE_COMMAND_ID, \
                           "uw", \
							  appliedUpdatePeriod,							  fastPollModeEndtime);



/** @brief The Request Fast Poll Mode command is generated when the metering client wishes to receive near real-time updates of InstantaneousDemand.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: RequestFastPollMode
* @param fastPollUpdatePeriod uint8_t

* @param duration uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterRequestFastPollMode( \
  fastPollUpdatePeriod,  duration) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_REQUEST_FAST_POLL_MODE_COMMAND_ID, \
                           "uu", \
							  fastPollUpdatePeriod,							  duration);



/** @brief This command is generated in response to a ScheduleSnapshot command, and is sent to confirm whether the requested snapshot schedule has been set up.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ScheduleSnapshotResponse
* @param issuerEventId uint32_t

* @param snapshotResponsePayload uint8_t *
* @param snapshotResponsePayloadLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterScheduleSnapshotResponse( \
  issuerEventId,  snapshotResponsePayload, snapshotResponsePayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_SCHEDULE_SNAPSHOT_RESPONSE_COMMAND_ID, \
                           "wb", \
							  issuerEventId,							  snapshotResponsePayload, snapshotResponsePayloadLen);



/** @brief This command is used to set up a schedule of when the device shall create snapshot data.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ScheduleSnapshot
* @param issuerEventId uint32_t

* @param commandIndex uint8_t

* @param commandCount uint8_t

* @param snapshotSchedulePayload uint8_t *
* @param snapshotSchedulePayloadLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterScheduleSnapshot( \
  issuerEventId,  commandIndex,  commandCount,  snapshotSchedulePayload, snapshotSchedulePayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_SCHEDULE_SNAPSHOT_COMMAND_ID, \
                           "wuub", \
							  issuerEventId,							  commandIndex,							  commandCount,							  snapshotSchedulePayload, snapshotSchedulePayloadLen);



/** @brief This command is generated in response to a TakeSnapshot command, and is sent to confirm whether the requested snapshot has been accepted and successfully taken.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: TakeSnapshotResponse
* @param snapshotId uint32_t

* @param snapshotConfirmation uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterTakeSnapshotResponse( \
  snapshotId,  snapshotConfirmation) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_TAKE_SNAPSHOT_RESPONSE_COMMAND_ID, \
                           "wu", \
							  snapshotId,							  snapshotConfirmation);



/** @brief This command is used to instruct the cluster server to take a single snapshot.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: TakeSnapshot
* @param snapshotCause uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterTakeSnapshot( \
  snapshotCause) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_TAKE_SNAPSHOT_COMMAND_ID, \
                           "w", \
							  snapshotCause);



/** @brief This command is generated in response to a GetSnapshot command. It is used to return a single snapshot to the client.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: PublishSnapshot
* @param snapshotId uint32_t

* @param snapshotTime uint32_t

* @param totalSnapshotsFound uint8_t

* @param commandIndex uint8_t

* @param totalCommands uint8_t

* @param snapshotCause uint32_t

* @param snapshotPayloadType uint8_t

* @param snapshotPayload uint8_t *
* @param snapshotPayloadLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterPublishSnapshot( \
  snapshotId,  snapshotTime,  totalSnapshotsFound,  commandIndex,  totalCommands,  snapshotCause,  snapshotPayloadType,  snapshotPayload, snapshotPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_PUBLISH_SNAPSHOT_COMMAND_ID, \
                           "wwuuuwub", \
							  snapshotId,							  snapshotTime,							  totalSnapshotsFound,							  commandIndex,							  totalCommands,							  snapshotCause,							  snapshotPayloadType,							  snapshotPayload, snapshotPayloadLen);



/** @brief This command is used to request snapshot data from the cluster server.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetSnapshot
* @param earliestStartTime uint32_t

* @param latestEndTime uint32_t

* @param snapshotOffset uint8_t

* @param snapshotCause uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterGetSnapshot( \
  earliestStartTime,  latestEndTime,  snapshotOffset,  snapshotCause) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_SNAPSHOT_COMMAND_ID, \
                           "wwuw", \
							  earliestStartTime,							  latestEndTime,							  snapshotOffset,							  snapshotCause);



/** @brief This command is used to send the requested sample data to the client. It is generated in response to a GetSampledData command.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetSampledDataResponse
* @param sampleId uint16_t

* @param sampleStartTime uint32_t

* @param sampleType uint8_t

* @param sampleRequestInterval uint16_t

* @param numberOfSamples uint16_t

* @param samples uint8_t *
* @param samplesLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterGetSampledDataResponse( \
  sampleId,  sampleStartTime,  sampleType,  sampleRequestInterval,  numberOfSamples,  samples, samplesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_SAMPLED_DATA_RESPONSE_COMMAND_ID, \
                           "vwuvvb", \
							  sampleId,							  sampleStartTime,							  sampleType,							  sampleRequestInterval,							  numberOfSamples,							  samples, samplesLen);



/** @brief The sampling mechanism allows a set of samples of the specified type of data to be taken, commencing at the stipulated start time. This mechanism may run concurrently with the capturing of profile data, and may refer the same parameters, albeit possibly at a different sampling rate.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: StartSampling
* @param issuerEventId uint32_t

* @param startSamplingTime uint32_t

* @param sampleType uint8_t

* @param sampleRequestInterval uint16_t

* @param maxNumberOfSamples uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterStartSampling( \
  issuerEventId,  startSamplingTime,  sampleType,  sampleRequestInterval,  maxNumberOfSamples) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_START_SAMPLING_COMMAND_ID, \
                           "wwuvv", \
							  issuerEventId,							  startSamplingTime,							  sampleType,							  sampleRequestInterval,							  maxNumberOfSamples);



/** @brief ConfigureMirror is sent to the mirror once the mirror has been created. The command deals with the operational configuration of the Mirror.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ConfigureMirror
* @param issuerEventId uint32_t

* @param reportingInterval uint32_t

* @param mirrorNotificationReporting uint8_t

* @param notificationScheme uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterConfigureMirror( \
  issuerEventId,  reportingInterval,  mirrorNotificationReporting,  notificationScheme) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_CONFIGURE_MIRROR_COMMAND_ID, \
                           "wxuu", \
							  issuerEventId,							  reportingInterval,							  mirrorNotificationReporting,							  notificationScheme);



/** @brief This command is used to request sampled data from the server. Note that it is the responsibility of the client to ensure that it does not request more samples than can be held in a single command payload.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetSampledData
* @param sampleId uint16_t

* @param earliestSampleTime uint32_t

* @param sampleType uint8_t

* @param numberOfSamples uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterGetSampledData( \
  sampleId,  earliestSampleTime,  sampleType,  numberOfSamples) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_SAMPLED_DATA_COMMAND_ID, \
                           "vwuv", \
							  sampleId,							  earliestSampleTime,							  sampleType,							  numberOfSamples);



/** @brief The ConfigureNotificationScheme is sent to the mirror once the mirror has been created. The command deals with the operational configuration of the Mirror and the device that reports to the mirror. No default schemes are allowed to be overwritten.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ConfigureNotificationScheme
* @param issuerEventId uint32_t

* @param notificationScheme uint8_t

* @param notificationFlagOrder uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterConfigureNotificationScheme( \
  issuerEventId,  notificationScheme,  notificationFlagOrder) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_CONFIGURE_NOTIFICATION_SCHEME_COMMAND_ID, \
                           "wuw", \
							  issuerEventId,							  notificationScheme,							  notificationFlagOrder);



/** @brief This command is sent in response to the ReportAttribute command when the MirrorReporting attribute is set.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: MirrorReportAttributeResponse
* @param notificationScheme uint8_t

* @param notificationFlags uint8_t *
* @param notificationFlagsLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterMirrorReportAttributeResponse( \
  notificationScheme,  notificationFlags, notificationFlagsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_ID, \
                           "ub", \
							  notificationScheme,							  notificationFlags, notificationFlagsLen);



/** @brief The ConfigureNotificationFlags command is used to set the commands relating to the bit value for each NotificationFlags attribute that the scheme is proposing to use.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ConfigureNotificationFlags
* @param issuerEventId uint32_t

* @param notificationScheme uint8_t

* @param notificationFlagAttributeId uint16_t

* @param clusterId uint16_t

* @param manufacturerCode uint16_t

* @param numberOfCommands uint8_t

* @param commandIds uint8_t *
* @param commandIdsLen uint16_t 
*/
#define emberAfFillCommandSimpleMeteringClusterConfigureNotificationFlags( \
  issuerEventId,  notificationScheme,  notificationFlagAttributeId,  clusterId,  manufacturerCode,  numberOfCommands,  commandIds, commandIdsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_CONFIGURE_NOTIFICATION_FLAGS_COMMAND_ID, \
                           "wuvvvub", \
							  issuerEventId,							  notificationScheme,							  notificationFlagAttributeId,							  clusterId,							  manufacturerCode,							  numberOfCommands,							  commandIds, commandIdsLen);



/** @brief The ResetLoadLimitCounter command shall cause the LoadLimitCounter attribute to be reset.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ResetLoadLimitCounter
* @param providerId uint32_t

* @param issuerEventId uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterResetLoadLimitCounter( \
  providerId,  issuerEventId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_RESET_LOAD_LIMIT_COUNTER_COMMAND_ID, \
                           "ww", \
							  providerId,							  issuerEventId);



/** @brief The GetNotifiedMessage command is used only when a BOMD is being mirrored. This command provides a method for the BOMD to notify the Mirror message queue that it wants to receive commands that the Mirror has queued. The Notification flags set within the command shall inform the mirror of the commands that the BOMD is requesting.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: GetNotifiedMessage
* @param notificationScheme uint8_t

* @param notificationFlagAttributeId uint16_t

* @param notificationFlagsN uint32_t

*/
#define emberAfFillCommandSimpleMeteringClusterGetNotifiedMessage( \
  notificationScheme,  notificationFlagAttributeId,  notificationFlagsN) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_GET_NOTIFIED_MESSAGE_COMMAND_ID, \
                           "uvw", \
							  notificationScheme,							  notificationFlagAttributeId,							  notificationFlagsN);



/** @brief This command is sent from the Head-end or ESI to the Metering Device to instruct it to change the status of the valve or load switch, i.e. the supply.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: ChangeSupply
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param requestDateTime uint32_t

* @param implementationDateTime uint32_t

* @param proposedSupplyStatus uint8_t

* @param supplyControlBits uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterChangeSupply( \
  providerId,  issuerEventId,  requestDateTime,  implementationDateTime,  proposedSupplyStatus,  supplyControlBits) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_CHANGE_SUPPLY_COMMAND_ID, \
                           "wwwwuu", \
							  providerId,							  issuerEventId,							  requestDateTime,							  implementationDateTime,							  proposedSupplyStatus,							  supplyControlBits);



/** @brief This command is transmitted by a Metering Device in response to a ChangeSupply command.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: SupplyStatusResponse
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param implementationDateTime uint32_t

* @param supplyStatus uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterSupplyStatusResponse( \
  providerId,  issuerEventId,  implementationDateTime,  supplyStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_SUPPLY_STATUS_RESPONSE_COMMAND_ID, \
                           "wwwu", \
							  providerId,							  issuerEventId,							  implementationDateTime,							  supplyStatus);



/** @brief This command is a simplified version of the ChangeSupply command, intended to be sent from an IHD to a meter as the consequence of a user action on the IHD. Its purpose is to provide a local disconnection/reconnection button on the IHD in addition to the one on the meter.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: LocalChangeSupply
* @param proposedSupplyStatus uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterLocalChangeSupply( \
  proposedSupplyStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_LOCAL_CHANGE_SUPPLY_COMMAND_ID, \
                           "u", \
							  proposedSupplyStatus);



/** @brief This command is transmitted by a Metering Device in response to a StartSampling command.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: StartSamplingResponse
* @param sampleId uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterStartSamplingResponse( \
  sampleId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_START_SAMPLING_RESPONSE_COMMAND_ID, \
                           "v", \
							  sampleId);



/** @brief This command is used to specify the required status of the supply following the occurance of certain events on the meter.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: SetSupplyStatus
* @param issuerEventId uint32_t

* @param supplyTamperState uint8_t

* @param supplyDepletionState uint8_t

* @param supplyUncontrolledFlowState uint8_t

* @param loadLimitSupplyState uint8_t

*/
#define emberAfFillCommandSimpleMeteringClusterSetSupplyStatus( \
  issuerEventId,  supplyTamperState,  supplyDepletionState,  supplyUncontrolledFlowState,  loadLimitSupplyState) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_SET_SUPPLY_STATUS_COMMAND_ID, \
                           "wuuuu", \
							  issuerEventId,							  supplyTamperState,							  supplyDepletionState,							  supplyUncontrolledFlowState,							  loadLimitSupplyState);



/** @brief This command is used to update the 'Uncontrolled Flow Rate' configuration data used by flow meters.
* Cluster: Simple Metering, The Metering Cluster provides a mechanism to retrieve usage information from Electric, Gas, Water, and potentially Thermal metering devices.
* Command: SetUncontrolledFlowThreshold
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param uncontrolledFlowThreshold uint16_t

* @param unitOfMeasure uint8_t

* @param multiplier uint16_t

* @param divisor uint16_t

* @param stabilisationPeriod uint8_t

* @param measurementPeriod uint16_t

*/
#define emberAfFillCommandSimpleMeteringClusterSetUncontrolledFlowThreshold( \
  providerId,  issuerEventId,  uncontrolledFlowThreshold,  unitOfMeasure,  multiplier,  divisor,  stabilisationPeriod,  measurementPeriod) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SIMPLE_METERING_CLUSTER_ID, \
                           ZCL_SET_UNCONTROLLED_FLOW_THRESHOLD_COMMAND_ID, \
                           "wwvuvvuv", \
							  providerId,							  issuerEventId,							  uncontrolledFlowThreshold,							  unitOfMeasure,							  multiplier,							  divisor,							  stabilisationPeriod,							  measurementPeriod);



/** @brief Command description for DisplayMessage
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: DisplayMessage
* @param messageId uint32_t

* @param messageControl uint8_t

* @param startTime uint32_t

* @param durationInMinutes uint16_t

* @param message uint8_t *

* @param optionalExtendedMessageControl uint8_t

*/
#define emberAfFillCommandMessagingClusterDisplayMessage( \
  messageId,  messageControl,  startTime,  durationInMinutes,  message,  optionalExtendedMessageControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_DISPLAY_MESSAGE_COMMAND_ID, \
                           "wuwvsu", \
							  messageId,							  messageControl,							  startTime,							  durationInMinutes,							  message,							  optionalExtendedMessageControl);



/** @brief Command description for GetLastMessage
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: GetLastMessage
*/
#define emberAfFillCommandMessagingClusterGetLastMessage( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_GET_LAST_MESSAGE_COMMAND_ID, \
                           "" \
);



/** @brief The CancelMessage command provides the ability to cancel the sending or acceptance of previously sent messages.
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: CancelMessage
* @param messageId uint32_t

* @param messageControl uint8_t

*/
#define emberAfFillCommandMessagingClusterCancelMessage( \
  messageId,  messageControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_CANCEL_MESSAGE_COMMAND_ID, \
                           "wu", \
							  messageId,							  messageControl);



/** @brief The Message Confirmation command provides an indication that a Utility Customer has acknowledged and/or accepted the contents of a previously sent message.  Enhanced Message Confirmation commands shall contain an answer of 'NO', 'YES' and/or a message confirmation string.
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: MessageConfirmation
* @param messageId uint32_t

* @param confirmationTime uint32_t

* @param messageConfirmationControl uint8_t

* @param messageResponse uint8_t *

*/
#define emberAfFillCommandMessagingClusterMessageConfirmation( \
  messageId,  confirmationTime,  messageConfirmationControl,  messageResponse) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_MESSAGE_CONFIRMATION_COMMAND_ID, \
                           "wwus", \
							  messageId,							  confirmationTime,							  messageConfirmationControl,							  messageResponse);



/** @brief The DisplayProtected Message command is for use with messages that are protected by a password or PIN.
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: DisplayProtectedMessage
* @param messageId uint32_t

* @param messageControl uint8_t

* @param startTime uint32_t

* @param durationInMinutes uint16_t

* @param message uint8_t *

* @param optionalExtendedMessageControl uint8_t

*/
#define emberAfFillCommandMessagingClusterDisplayProtectedMessage( \
  messageId,  messageControl,  startTime,  durationInMinutes,  message,  optionalExtendedMessageControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_DISPLAY_PROTECTED_MESSAGE_COMMAND_ID, \
                           "wuwvsu", \
							  messageId,							  messageControl,							  startTime,							  durationInMinutes,							  message,							  optionalExtendedMessageControl);



/** @brief This command initiates the return of the first (and maybe only) Cancel All Messages command held on the associated server, and which has an implementation time equal to or later than the value indicated in the payload.
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: GetMessageCancellation
* @param earliestImplementationTime uint32_t

*/
#define emberAfFillCommandMessagingClusterGetMessageCancellation( \
  earliestImplementationTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_GET_MESSAGE_CANCELLATION_COMMAND_ID, \
                           "w", \
							  earliestImplementationTime);



/** @brief The CancelAllMessages command indicates to a client device that it should cancel all display messages currently held by it.
* Cluster: Messaging, This cluster provides an interface for passing text messages between SE devices.
* Command: CancelAllMessages
* @param implementationDateTime uint32_t

*/
#define emberAfFillCommandMessagingClusterCancelAllMessages( \
  implementationDateTime) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_MESSAGING_CLUSTER_ID, \
                           ZCL_CANCEL_ALL_MESSAGES_COMMAND_ID, \
                           "w", \
							  implementationDateTime);



/** @brief RequestTunnel is the client command used to setup a tunnel association with the server. The request payload specifies the protocol identifier for the requested tunnel, a manufacturer code in case of proprietary protocols and the use of flow control for streaming protocols.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: RequestTunnel
* @param protocolId uint8_t

* @param manufacturerCode uint16_t

* @param flowControlSupport uint8_t

* @param maximumIncomingTransferSize uint16_t

*/
#define emberAfFillCommandTunnelingClusterRequestTunnel( \
  protocolId,  manufacturerCode,  flowControlSupport,  maximumIncomingTransferSize) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_REQUEST_TUNNEL_COMMAND_ID, \
                           "uvuv", \
							  protocolId,							  manufacturerCode,							  flowControlSupport,							  maximumIncomingTransferSize);



/** @brief RequestTunnelResponse is sent by the server in response to a RequestTunnel command previously received from the client. The response contains the status of the RequestTunnel command and a tunnel identifier corresponding to the tunnel that has been set-up in the server in case of success.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: RequestTunnelResponse
* @param tunnelId uint16_t

* @param tunnelStatus uint8_t

* @param maximumIncomingTransferSize uint16_t

*/
#define emberAfFillCommandTunnelingClusterRequestTunnelResponse( \
  tunnelId,  tunnelStatus,  maximumIncomingTransferSize) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_REQUEST_TUNNEL_RESPONSE_COMMAND_ID, \
                           "vuv", \
							  tunnelId,							  tunnelStatus,							  maximumIncomingTransferSize);



/** @brief Client command used to close the tunnel with the server. The parameter in the payload specifies the tunnel identifier of the tunnel that has to be closed. The server leaves the tunnel open and the assigned resources allocated until the client sends the CloseTunnel command or the CloseTunnelTimeout fires.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: CloseTunnel
* @param tunnelId uint16_t

*/
#define emberAfFillCommandTunnelingClusterCloseTunnel( \
  tunnelId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_CLOSE_TUNNEL_COMMAND_ID, \
                           "v", \
							  tunnelId);



/** @brief Command that transfers data from server to the client. The data itself has to be placed within the payload.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: TransferDataServerToClient
* @param tunnelId uint16_t

* @param data uint8_t *
* @param dataLen uint16_t 
*/
#define emberAfFillCommandTunnelingClusterTransferDataServerToClient( \
  tunnelId,  data, dataLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_TRANSFER_DATA_SERVER_TO_CLIENT_COMMAND_ID, \
                           "vb", \
							  tunnelId,							  data, dataLen);



/** @brief Command that indicates (if received) that the client has sent data to the server. The data itself is contained within the payload.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: TransferDataClientToServer
* @param tunnelId uint16_t

* @param data uint8_t *
* @param dataLen uint16_t 
*/
#define emberAfFillCommandTunnelingClusterTransferDataClientToServer( \
  tunnelId,  data, dataLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_TRANSFER_DATA_CLIENT_TO_SERVER_COMMAND_ID, \
                           "vb", \
							  tunnelId,							  data, dataLen);



/** @brief This command is generated by the receiver of a TransferData command if the tunnel status indicates that something is wrong. There are two three cases in which TransferDataError is sent: (1) The TransferData received contains a TunnelID that does not match to any of the active tunnels of the receiving device. This could happen if a (sleeping) device sends a TransferData command to a tunnel that has been closed by the server after the CloseTunnelTimeout.  (2) The TransferData received contains a proper TunnelID of an active tunnel, but the device sending the data does not match to it.  (3) The TransferData received contains more data than indicated by the MaximumIncomingTransferSize of the receiving device.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: TransferDataErrorServerToClient
* @param tunnelId uint16_t

* @param transferDataStatus uint8_t

*/
#define emberAfFillCommandTunnelingClusterTransferDataErrorServerToClient( \
  tunnelId,  transferDataStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_TRANSFER_DATA_ERROR_SERVER_TO_CLIENT_COMMAND_ID, \
                           "vu", \
							  tunnelId,							  transferDataStatus);



/** @brief This command is generated by the receiver of a TransferData command if the tunnel status indicates that something is wrong. There are two three cases in which TransferDataError is sent: (1) The TransferData received contains a TunnelID that does not match to any of the active tunnels of the receiving device. This could happen if a (sleeping) device sends a TransferData command to a tunnel that has been closed by the server after the CloseTunnelTimeout.  (2) The TransferData received contains a proper TunnelID of an active tunnel, but the device sending the data does not match to it.  (3) The TransferData received contains more data than indicated by the MaximumIncomingTransferSize of the receiving device.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: TransferDataErrorClientToServer
* @param tunnelId uint16_t

* @param transferDataStatus uint8_t

*/
#define emberAfFillCommandTunnelingClusterTransferDataErrorClientToServer( \
  tunnelId,  transferDataStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_TRANSFER_DATA_ERROR_CLIENT_TO_SERVER_COMMAND_ID, \
                           "vu", \
							  tunnelId,							  transferDataStatus);



/** @brief Command sent in response to each TransferData command in case - and only in case - flow control has been requested by the client in the TunnelRequest command and is supported by both tunnel endpoints. The response payload indicates the number of octets that may still be received by the receiver.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: AckTransferDataServerToClient
* @param tunnelId uint16_t

* @param numberOfBytesLeft uint16_t

*/
#define emberAfFillCommandTunnelingClusterAckTransferDataServerToClient( \
  tunnelId,  numberOfBytesLeft) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_ACK_TRANSFER_DATA_SERVER_TO_CLIENT_COMMAND_ID, \
                           "vv", \
							  tunnelId,							  numberOfBytesLeft);



/** @brief Command sent in response to each TransferData command in case - and only in case - flow control has been requested by the client in the TunnelRequest command and is supported by both tunnel endpoints. The response payload indicates the number of octets that may still be received by the receiver.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: AckTransferDataClientToServer
* @param tunnelId uint16_t

* @param numberOfBytesLeft uint16_t

*/
#define emberAfFillCommandTunnelingClusterAckTransferDataClientToServer( \
  tunnelId,  numberOfBytesLeft) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_ACK_TRANSFER_DATA_CLIENT_TO_SERVER_COMMAND_ID, \
                           "vv", \
							  tunnelId,							  numberOfBytesLeft);



/** @brief The ReadyData command is generated - after a receiver had to stop the dataflow using the AckTransferData(0) command - to indicate that the device is now ready to continue receiving data. The parameter NumberOfOctetsLeft gives a hint on how much space is left for the next data transfer. The ReadyData command is only issued if flow control is enabled.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: ReadyDataServerToClient
* @param tunnelId uint16_t

* @param numberOfOctetsLeft uint16_t

*/
#define emberAfFillCommandTunnelingClusterReadyDataServerToClient( \
  tunnelId,  numberOfOctetsLeft) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_READY_DATA_SERVER_TO_CLIENT_COMMAND_ID, \
                           "vv", \
							  tunnelId,							  numberOfOctetsLeft);



/** @brief The ReadyData command is generated - after a receiver had to stop the dataflow using the AckTransferData(0) command - to indicate that the device is now ready to continue receiving data. The parameter NumberOfOctetsLeft gives a hint on how much space is left for the next data transfer. The ReadyData command is only issued if flow control is enabled.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: ReadyDataClientToServer
* @param tunnelId uint16_t

* @param numberOfOctetsLeft uint16_t

*/
#define emberAfFillCommandTunnelingClusterReadyDataClientToServer( \
  tunnelId,  numberOfOctetsLeft) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_READY_DATA_CLIENT_TO_SERVER_COMMAND_ID, \
                           "vv", \
							  tunnelId,							  numberOfOctetsLeft);



/** @brief Supported Tunnel Protocol Response is sent in response to a Get Supported Tunnel Protocols command previously received. The response contains a list of Tunnel protocols supported by the device; the payload of the response should be capable of holding up to 16 protocols.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: SupportedTunnelProtocolsResponse
* @param protocolListComplete uint8_t

* @param protocolCount uint8_t

* @param protocolList uint8_t *
* @param protocolListLen uint16_t 
*/
#define emberAfFillCommandTunnelingClusterSupportedTunnelProtocolsResponse( \
  protocolListComplete,  protocolCount,  protocolList, protocolListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_SUPPORTED_TUNNEL_PROTOCOLS_RESPONSE_COMMAND_ID, \
                           "uub", \
							  protocolListComplete,							  protocolCount,							  protocolList, protocolListLen);



/** @brief Get Supported Tunnel Protocols is the client command used to determine the Tunnel protocols supported on another device.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: GetSupportedTunnelProtocols
* @param protocolOffset uint8_t

*/
#define emberAfFillCommandTunnelingClusterGetSupportedTunnelProtocols( \
  protocolOffset) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_GET_SUPPORTED_TUNNEL_PROTOCOLS_COMMAND_ID, \
                           "u", \
							  protocolOffset);



/** @brief TunnelClosureNotification is sent by the server to indicate that a tunnel has been closed due to expiration of a CloseTunnelTimeout.
* Cluster: Tunneling, The tunneling cluster provides an interface for tunneling protocols.
* Command: TunnelClosureNotification
* @param tunnelId uint16_t

*/
#define emberAfFillCommandTunnelingClusterTunnelClosureNotification( \
  tunnelId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_TUNNELING_CLUSTER_ID, \
                           ZCL_TUNNEL_CLOSURE_NOTIFICATION_COMMAND_ID, \
                           "v", \
							  tunnelId);



/** @brief This command is sent to the Metering Device to activate the use of any Emergency Credit available on the Metering Device.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: SelectAvailableEmergencyCredit
* @param commandIssueDateTime uint32_t

* @param originatingDevice uint8_t

*/
#define emberAfFillCommandPrepaymentClusterSelectAvailableEmergencyCredit( \
  commandIssueDateTime,  originatingDevice) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_SELECT_AVAILABLE_EMERGENCY_CREDIT_COMMAND_ID, \
                           "wu", \
							  commandIssueDateTime,							  originatingDevice);



/** @brief This command is generated in response to a GetPrepaySnapshot command. It is used to return a single snapshot to the client.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: PublishPrepaySnapshot
* @param snapshotId uint32_t

* @param snapshotTime uint32_t

* @param totalSnapshotsFound uint8_t

* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param snapshotCause uint32_t

* @param snapshotPayloadType uint8_t

* @param snapshotPayload uint8_t *
* @param snapshotPayloadLen uint16_t 
*/
#define emberAfFillCommandPrepaymentClusterPublishPrepaySnapshot( \
  snapshotId,  snapshotTime,  totalSnapshotsFound,  commandIndex,  totalNumberOfCommands,  snapshotCause,  snapshotPayloadType,  snapshotPayload, snapshotPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_PUBLISH_PREPAY_SNAPSHOT_COMMAND_ID, \
                           "wwuuuwub", \
							  snapshotId,							  snapshotTime,							  totalSnapshotsFound,							  commandIndex,							  totalNumberOfCommands,							  snapshotCause,							  snapshotPayloadType,							  snapshotPayload, snapshotPayloadLen);



/** @brief The ChangeDebt command is send to the Metering Device to change the fuel or Non fuel debt values.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: ChangeDebt
* @param issuerEventId uint32_t

* @param debtLabel uint8_t *

* @param debtAmount uint32_t

* @param debtRecoveryMethod uint8_t

* @param debtAmountType uint8_t

* @param debtRecoveryStartTime uint32_t

* @param debtRecoveryCollectionTime uint16_t

* @param debtRecoveryFrequency uint8_t

* @param debtRecoveryAmount uint32_t

* @param debtRecoveryBalancePercentage uint16_t

*/
#define emberAfFillCommandPrepaymentClusterChangeDebt( \
  issuerEventId,  debtLabel,  debtAmount,  debtRecoveryMethod,  debtAmountType,  debtRecoveryStartTime,  debtRecoveryCollectionTime,  debtRecoveryFrequency,  debtRecoveryAmount,  debtRecoveryBalancePercentage) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CHANGE_DEBT_COMMAND_ID, \
                           "wswuuwvuwv", \
							  issuerEventId,							  debtLabel,							  debtAmount,							  debtRecoveryMethod,							  debtAmountType,							  debtRecoveryStartTime,							  debtRecoveryCollectionTime,							  debtRecoveryFrequency,							  debtRecoveryAmount,							  debtRecoveryBalancePercentage);



/** @brief This command is send in response to the ChangePaymentMode Command.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: ChangePaymentModeResponse
* @param friendlyCredit uint8_t

* @param friendlyCreditCalendarId uint32_t

* @param emergencyCreditLimit uint32_t

* @param emergencyCreditThreshold uint32_t

*/
#define emberAfFillCommandPrepaymentClusterChangePaymentModeResponse( \
  friendlyCredit,  friendlyCreditCalendarId,  emergencyCreditLimit,  emergencyCreditThreshold) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CHANGE_PAYMENT_MODE_RESPONSE_COMMAND_ID, \
                           "uwww", \
							  friendlyCredit,							  friendlyCreditCalendarId,							  emergencyCreditLimit,							  emergencyCreditThreshold);



/** @brief This command is a method to set up the parameters for the emergency credit.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: EmergencyCreditSetup
* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param emergencyCreditLimit uint32_t

* @param emergencyCreditThreshold uint32_t

*/
#define emberAfFillCommandPrepaymentClusterEmergencyCreditSetup( \
  issuerEventId,  startTime,  emergencyCreditLimit,  emergencyCreditThreshold) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_EMERGENCY_CREDIT_SETUP_COMMAND_ID, \
                           "wwww", \
							  issuerEventId,							  startTime,							  emergencyCreditLimit,							  emergencyCreditThreshold);



/** @brief This command is send in response to the ConsumerTopUp Command.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: ConsumerTopUpResponse
* @param resultType uint8_t

* @param topUpValue uint32_t

* @param sourceOfTopUp uint8_t

* @param creditRemaining uint32_t

*/
#define emberAfFillCommandPrepaymentClusterConsumerTopUpResponse( \
  resultType,  topUpValue,  sourceOfTopUp,  creditRemaining) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CONSUMER_TOP_UP_RESPONSE_COMMAND_ID, \
                           "uwuw", \
							  resultType,							  topUpValue,							  sourceOfTopUp,							  creditRemaining);



/** @brief The ConsumerTopUp command is used by the IPD and the ESI as a method of applying credit top up values to the prepayment meter.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: ConsumerTopUp
* @param originatingDevice uint8_t

* @param topUpCode uint8_t *

*/
#define emberAfFillCommandPrepaymentClusterConsumerTopUp( \
  originatingDevice,  topUpCode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CONSUMER_TOP_UP_COMMAND_ID, \
                           "us", \
							  originatingDevice,							  topUpCode);



/** @brief The CreditAdjustment command is sent to update the accounting base for the Prepayment meter.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: CreditAdjustment
* @param issuerEventId uint32_t

* @param startTime uint32_t

* @param creditAdjustmentType uint8_t

* @param creditAdjustmentValue uint32_t

*/
#define emberAfFillCommandPrepaymentClusterCreditAdjustment( \
  issuerEventId,  startTime,  creditAdjustmentType,  creditAdjustmentValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CREDIT_ADJUSTMENT_COMMAND_ID, \
                           "wwuw", \
							  issuerEventId,							  startTime,							  creditAdjustmentType,							  creditAdjustmentValue);



/** @brief This command is used to send the Top Up Code Log entries to the client.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: PublishTopUpLog
* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param topUpPayload uint8_t *
* @param topUpPayloadLen uint16_t 
*/
#define emberAfFillCommandPrepaymentClusterPublishTopUpLog( \
  commandIndex,  totalNumberOfCommands,  topUpPayload, topUpPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_PUBLISH_TOP_UP_LOG_COMMAND_ID, \
                           "uub", \
							  commandIndex,							  totalNumberOfCommands,							  topUpPayload, topUpPayloadLen);



/** @brief This command is sent to a Metering Device to instruct it to change its mode of operation. i.e. from Credit to Prepayment.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: ChangePaymentMode
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param implementationDateTime uint32_t

* @param proposedPaymentControlConfiguration uint16_t

* @param cutOffValue uint32_t

*/
#define emberAfFillCommandPrepaymentClusterChangePaymentMode( \
  providerId,  issuerEventId,  implementationDateTime,  proposedPaymentControlConfiguration,  cutOffValue) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_CHANGE_PAYMENT_MODE_COMMAND_ID, \
                           "wwwvw", \
							  providerId,							  issuerEventId,							  implementationDateTime,							  proposedPaymentControlConfiguration,							  cutOffValue);



/** @brief This command is used to send the contents of the Repayment Log.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: PublishDebtLog
* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param debtPayload uint8_t *
* @param debtPayloadLen uint16_t 
*/
#define emberAfFillCommandPrepaymentClusterPublishDebtLog( \
  commandIndex,  totalNumberOfCommands,  debtPayload, debtPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_PUBLISH_DEBT_LOG_COMMAND_ID, \
                           "uub", \
							  commandIndex,							  totalNumberOfCommands,							  debtPayload, debtPayloadLen);



/** @brief This command is used to request the cluster server for snapshot data.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: GetPrepaySnapshot
* @param earliestStartTime uint32_t

* @param latestEndTime uint32_t

* @param snapshotOffset uint8_t

* @param snapshotCause uint32_t

*/
#define emberAfFillCommandPrepaymentClusterGetPrepaySnapshot( \
  earliestStartTime,  latestEndTime,  snapshotOffset,  snapshotCause) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_GET_PREPAY_SNAPSHOT_COMMAND_ID, \
                           "wwuw", \
							  earliestStartTime,							  latestEndTime,							  snapshotOffset,							  snapshotCause);



/** @brief This command is sent to the Metering Device to retrieve the log of Top Up codes received by the meter.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: GetTopUpLog
* @param latestEndTime uint32_t

* @param numberOfRecords uint8_t

*/
#define emberAfFillCommandPrepaymentClusterGetTopUpLog( \
  latestEndTime,  numberOfRecords) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_GET_TOP_UP_LOG_COMMAND_ID, \
                           "wu", \
							  latestEndTime,							  numberOfRecords);



/** @brief This command is sent from client to a Prepayment server to set the warning level for low credit.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: SetLowCreditWarningLevel
* @param lowCreditWarningLevel uint32_t

*/
#define emberAfFillCommandPrepaymentClusterSetLowCreditWarningLevel( \
  lowCreditWarningLevel) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_SET_LOW_CREDIT_WARNING_LEVEL_COMMAND_ID, \
                           "w", \
							  lowCreditWarningLevel);



/** @brief This command is used to request the contents of the repayment log.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: GetDebtRepaymentLog
* @param latestEndTime uint32_t

* @param numberOfDebts uint8_t

* @param debtType uint8_t

*/
#define emberAfFillCommandPrepaymentClusterGetDebtRepaymentLog( \
  latestEndTime,  numberOfDebts,  debtType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_GET_DEBT_REPAYMENT_LOG_COMMAND_ID, \
                           "wuu", \
							  latestEndTime,							  numberOfDebts,							  debtType);



/** @brief This command is sent from a client to the Prepayment server to set the maximum credit level allowed in the meter.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: SetMaximumCreditLimit
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param implementationDateTime uint32_t

* @param maximumCreditLevel uint32_t

* @param maximumCreditPerTopUp uint32_t

*/
#define emberAfFillCommandPrepaymentClusterSetMaximumCreditLimit( \
  providerId,  issuerEventId,  implementationDateTime,  maximumCreditLevel,  maximumCreditPerTopUp) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_SET_MAXIMUM_CREDIT_LIMIT_COMMAND_ID, \
                           "wwwww", \
							  providerId,							  issuerEventId,							  implementationDateTime,							  maximumCreditLevel,							  maximumCreditPerTopUp);



/** @brief This command is sent from a client to the Prepayment server to set the overall debt cap allowed in the meter.
* Cluster: Prepayment, The Prepayment Cluster provides the facility to pass messages relating to prepayment between devices on the HAN.
* Command: SetOverallDebtCap
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param implementationDateTime uint32_t

* @param overallDebtCap uint32_t

*/
#define emberAfFillCommandPrepaymentClusterSetOverallDebtCap( \
  providerId,  issuerEventId,  implementationDateTime,  overallDebtCap) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PREPAYMENT_CLUSTER_ID, \
                           ZCL_SET_OVERALL_DEBT_CAP_COMMAND_ID, \
                           "wwww", \
							  providerId,							  issuerEventId,							  implementationDateTime,							  overallDebtCap);



/** @brief This command is reused from the DRLC cluster. This command is generated in response to the Manage Event command.
* Cluster: Energy Management, This cluster provides attributes and commands to assist applications in creating resource monitoring protocols.
* Command: ReportEventStatus
* @param issuerEventId uint32_t

* @param eventStatus uint8_t

* @param eventStatusTime uint32_t

* @param criticalityLevelApplied uint8_t

* @param coolingTemperatureSetPointApplied uint16_t

* @param heatingTemperatureSetPointApplied uint16_t

* @param averageLoadAdjustmentPercentageApplied int8_t

* @param dutyCycleApplied uint8_t

* @param eventControl uint8_t

*/
#define emberAfFillCommandEnergyManagementClusterReportEventStatus( \
  issuerEventId,  eventStatus,  eventStatusTime,  criticalityLevelApplied,  coolingTemperatureSetPointApplied,  heatingTemperatureSetPointApplied,  averageLoadAdjustmentPercentageApplied,  dutyCycleApplied,  eventControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ENERGY_MANAGEMENT_CLUSTER_ID, \
                           ZCL_REPORT_EVENT_STATUS_COMMAND_ID, \
                           "wuwuvvuuu", \
							  issuerEventId,							  eventStatus,							  eventStatusTime,							  criticalityLevelApplied,							  coolingTemperatureSetPointApplied,							  heatingTemperatureSetPointApplied,							  averageLoadAdjustmentPercentageApplied,							  dutyCycleApplied,							  eventControl);



/** @brief The Manage Event command allows a remote device (such as an IHD or web portal) to change the behavior of a DRLC cluster client when responding to a DRLC Load Control Event.
* Cluster: Energy Management, This cluster provides attributes and commands to assist applications in creating resource monitoring protocols.
* Command: ManageEvent
* @param issuerEventId uint32_t

* @param deviceClass uint16_t

* @param utilityEnrollmentGroup uint8_t

* @param actionRequired uint8_t

*/
#define emberAfFillCommandEnergyManagementClusterManageEvent( \
  issuerEventId,  deviceClass,  utilityEnrollmentGroup,  actionRequired) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ENERGY_MANAGEMENT_CLUSTER_ID, \
                           ZCL_MANAGE_EVENT_COMMAND_ID, \
                           "wvuu", \
							  issuerEventId,							  deviceClass,							  utilityEnrollmentGroup,							  actionRequired);



/** @brief The PublishCalendar command is published in response to a GetCalendar command or if new calendar information is available.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: PublishCalendar
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerCalendarId uint32_t

* @param startTime uint32_t

* @param calendarType uint8_t

* @param calendarTimeReference uint8_t

* @param calendarName uint8_t *

* @param numberOfSeasons uint8_t

* @param numberOfWeekProfiles uint8_t

* @param numberOfDayProfiles uint8_t

*/
#define emberAfFillCommandCalendarClusterPublishCalendar( \
  providerId,  issuerEventId,  issuerCalendarId,  startTime,  calendarType,  calendarTimeReference,  calendarName,  numberOfSeasons,  numberOfWeekProfiles,  numberOfDayProfiles) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_PUBLISH_CALENDAR_COMMAND_ID, \
                           "wwwwuusuuu", \
							  providerId,							  issuerEventId,							  issuerCalendarId,							  startTime,							  calendarType,							  calendarTimeReference,							  calendarName,							  numberOfSeasons,							  numberOfWeekProfiles,							  numberOfDayProfiles);



/** @brief This command initiates PublishCalendar command(s) for scheduled Calendar updates.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetCalendar
* @param earliestStartTime uint32_t

* @param minIssuerEventId uint32_t

* @param numberOfCalendars uint8_t

* @param calendarType uint8_t

* @param providerId uint32_t

*/
#define emberAfFillCommandCalendarClusterGetCalendar( \
  earliestStartTime,  minIssuerEventId,  numberOfCalendars,  calendarType,  providerId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_CALENDAR_COMMAND_ID, \
                           "wwuuw", \
							  earliestStartTime,							  minIssuerEventId,							  numberOfCalendars,							  calendarType,							  providerId);



/** @brief The PublishDayProfile command is published in response to a GetDayProfile command.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: PublishDayProfile
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerCalendarId uint32_t

* @param dayId uint8_t

* @param totalNumberOfScheduleEntries uint8_t

* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param calendarType uint8_t

* @param dayScheduleEntries uint8_t *
* @param dayScheduleEntriesLen uint16_t 
*/
#define emberAfFillCommandCalendarClusterPublishDayProfile( \
  providerId,  issuerEventId,  issuerCalendarId,  dayId,  totalNumberOfScheduleEntries,  commandIndex,  totalNumberOfCommands,  calendarType,  dayScheduleEntries, dayScheduleEntriesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_PUBLISH_DAY_PROFILE_COMMAND_ID, \
                           "wwwuuuuub", \
							  providerId,							  issuerEventId,							  issuerCalendarId,							  dayId,							  totalNumberOfScheduleEntries,							  commandIndex,							  totalNumberOfCommands,							  calendarType,							  dayScheduleEntries, dayScheduleEntriesLen);



/** @brief This command initiates one or more PublishDayProfile commands for the referenced Calendar.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetDayProfiles
* @param providerId uint32_t

* @param issuerCalendarId uint32_t

* @param startDayId uint8_t

* @param numberOfDays uint8_t

*/
#define emberAfFillCommandCalendarClusterGetDayProfiles( \
  providerId,  issuerCalendarId,  startDayId,  numberOfDays) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_DAY_PROFILES_COMMAND_ID, \
                           "wwuu", \
							  providerId,							  issuerCalendarId,							  startDayId,							  numberOfDays);



/** @brief The PublishWeekProfile command is published in response to a GetWeekProfile command.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: PublishWeekProfile
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerCalendarId uint32_t

* @param weekId uint8_t

* @param dayIdRefMonday uint8_t

* @param dayIdRefTuesday uint8_t

* @param dayIdRefWednesday uint8_t

* @param dayIdRefThursday uint8_t

* @param dayIdRefFriday uint8_t

* @param dayIdRefSaturday uint8_t

* @param dayIdRefSunday uint8_t

*/
#define emberAfFillCommandCalendarClusterPublishWeekProfile( \
  providerId,  issuerEventId,  issuerCalendarId,  weekId,  dayIdRefMonday,  dayIdRefTuesday,  dayIdRefWednesday,  dayIdRefThursday,  dayIdRefFriday,  dayIdRefSaturday,  dayIdRefSunday) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_PUBLISH_WEEK_PROFILE_COMMAND_ID, \
                           "wwwuuuuuuuu", \
							  providerId,							  issuerEventId,							  issuerCalendarId,							  weekId,							  dayIdRefMonday,							  dayIdRefTuesday,							  dayIdRefWednesday,							  dayIdRefThursday,							  dayIdRefFriday,							  dayIdRefSaturday,							  dayIdRefSunday);



/** @brief This command initiates one or more PublishWeekProfile commands for the referenced Calendar.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetWeekProfiles
* @param providerId uint32_t

* @param issuerCalendarId uint32_t

* @param startWeekId uint8_t

* @param numberOfWeeks uint8_t

*/
#define emberAfFillCommandCalendarClusterGetWeekProfiles( \
  providerId,  issuerCalendarId,  startWeekId,  numberOfWeeks) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_WEEK_PROFILES_COMMAND_ID, \
                           "wwuu", \
							  providerId,							  issuerCalendarId,							  startWeekId,							  numberOfWeeks);



/** @brief The PublishSeasons command is published in response to a GetSeason command.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: PublishSeasons
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerCalendarId uint32_t

* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param seasonEntries uint8_t *
* @param seasonEntriesLen uint16_t 
*/
#define emberAfFillCommandCalendarClusterPublishSeasons( \
  providerId,  issuerEventId,  issuerCalendarId,  commandIndex,  totalNumberOfCommands,  seasonEntries, seasonEntriesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_PUBLISH_SEASONS_COMMAND_ID, \
                           "wwwuub", \
							  providerId,							  issuerEventId,							  issuerCalendarId,							  commandIndex,							  totalNumberOfCommands,							  seasonEntries, seasonEntriesLen);



/** @brief This command initiates one or more PublishSeasons commands for the referenced Calendar.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetSeasons
* @param providerId uint32_t

* @param issuerCalendarId uint32_t

*/
#define emberAfFillCommandCalendarClusterGetSeasons( \
  providerId,  issuerCalendarId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_SEASONS_COMMAND_ID, \
                           "ww", \
							  providerId,							  issuerCalendarId);



/** @brief The PublishSpecialDays command is published in response to a GetSpecialDays command or if a calendar update is available.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: PublishSpecialDays
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param issuerCalendarId uint32_t

* @param startTime uint32_t

* @param calendarType uint8_t

* @param totalNumberOfSpecialDays uint8_t

* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param specialDayEntries uint8_t *
* @param specialDayEntriesLen uint16_t 
*/
#define emberAfFillCommandCalendarClusterPublishSpecialDays( \
  providerId,  issuerEventId,  issuerCalendarId,  startTime,  calendarType,  totalNumberOfSpecialDays,  commandIndex,  totalNumberOfCommands,  specialDayEntries, specialDayEntriesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_PUBLISH_SPECIAL_DAYS_COMMAND_ID, \
                           "wwwwuuuub", \
							  providerId,							  issuerEventId,							  issuerCalendarId,							  startTime,							  calendarType,							  totalNumberOfSpecialDays,							  commandIndex,							  totalNumberOfCommands,							  specialDayEntries, specialDayEntriesLen);



/** @brief This command initiates one or more PublishSpecialDays commands for the scheduled Special Day Table updates.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetSpecialDays
* @param startTime uint32_t

* @param numberOfEvents uint8_t

* @param calendarType uint8_t

* @param providerId uint32_t

* @param issuerCalendarId uint32_t

*/
#define emberAfFillCommandCalendarClusterGetSpecialDays( \
  startTime,  numberOfEvents,  calendarType,  providerId,  issuerCalendarId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_SPECIAL_DAYS_COMMAND_ID, \
                           "wuuww", \
							  startTime,							  numberOfEvents,							  calendarType,							  providerId,							  issuerCalendarId);



/** @brief The CancelCalendar command indicates that all data associated with a particular calendar instance should be discarded.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: CancelCalendar
* @param providerId uint32_t

* @param issuerCalendarId uint32_t

* @param calendarType uint8_t

*/
#define emberAfFillCommandCalendarClusterCancelCalendar( \
  providerId,  issuerCalendarId,  calendarType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_CANCEL_CALENDAR_COMMAND_ID, \
                           "wwu", \
							  providerId,							  issuerCalendarId,							  calendarType);



/** @brief This command initiates the return of the last CancelCalendar command held on the associated server.
* Cluster: Calendar, This cluster provides attributes and commands to assist applications in developing time and date based protocol.
* Command: GetCalendarCancellation
*/
#define emberAfFillCommandCalendarClusterGetCalendarCancellation( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CALENDAR_CLUSTER_ID, \
                           ZCL_GET_CALENDAR_CANCELLATION_COMMAND_ID, \
                           "" \
);



/** @brief This command is used to request the ESI to respond with information regarding any available change of tenancy.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: GetChangeOfTenancy
*/
#define emberAfFillCommandDeviceManagementClusterGetChangeOfTenancy( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_GET_CHANGE_OF_TENANCY_COMMAND_ID, \
                           "" \
);



/** @brief This command is used to change the tenancy of a meter.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: PublishChangeOfTenancy
* @param providerId uint32_t

* @param issuerEventId uint32_t

* @param tariffType uint8_t

* @param implementationDateTime uint32_t

* @param proposedTenancyChangeControl uint32_t

*/
#define emberAfFillCommandDeviceManagementClusterPublishChangeOfTenancy( \
  providerId,  issuerEventId,  tariffType,  implementationDateTime,  proposedTenancyChangeControl) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_PUBLISH_CHANGE_OF_TENANCY_COMMAND_ID, \
                           "wwuww", \
							  providerId,							  issuerEventId,							  tariffType,							  implementationDateTime,							  proposedTenancyChangeControl);



/** @brief This command is used to request the ESI to respond with information regarding any available change of supplier.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: GetChangeOfSupplier
*/
#define emberAfFillCommandDeviceManagementClusterGetChangeOfSupplier( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_GET_CHANGE_OF_SUPPLIER_COMMAND_ID, \
                           "" \
);



/** @brief This command is used to change the Supplier (energy supplier) that is supplying the meter (s).
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: PublishChangeOfSupplier
* @param currentProviderId uint32_t

* @param issuerEventId uint32_t

* @param tariffType uint8_t

* @param proposedProviderId uint32_t

* @param providerChangeImplementationTime uint32_t

* @param providerChangeControl uint32_t

* @param proposedProviderName uint8_t *

* @param proposedProviderContactDetails uint8_t *

*/
#define emberAfFillCommandDeviceManagementClusterPublishChangeOfSupplier( \
  currentProviderId,  issuerEventId,  tariffType,  proposedProviderId,  providerChangeImplementationTime,  providerChangeControl,  proposedProviderName,  proposedProviderContactDetails) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_PUBLISH_CHANGE_OF_SUPPLIER_COMMAND_ID, \
                           "wwuwwwss", \
							  currentProviderId,							  issuerEventId,							  tariffType,							  proposedProviderId,							  providerChangeImplementationTime,							  providerChangeControl,							  proposedProviderName,							  proposedProviderContactDetails);



/** @brief This command is used to request the current password from the server.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: RequestNewPassword
* @param passwordType uint8_t

*/
#define emberAfFillCommandDeviceManagementClusterRequestNewPassword( \
  passwordType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_REQUEST_NEW_PASSWORD_COMMAND_ID, \
                           "u", \
							  passwordType);



/** @brief This command is used to send the current password to the client.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: RequestNewPasswordResponse
* @param issuerEventId uint32_t

* @param implementationDateTime uint32_t

* @param durationInMinutes uint16_t

* @param passwordType uint8_t

* @param password uint8_t *

*/
#define emberAfFillCommandDeviceManagementClusterRequestNewPasswordResponse( \
  issuerEventId,  implementationDateTime,  durationInMinutes,  passwordType,  password) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_REQUEST_NEW_PASSWORD_RESPONSE_COMMAND_ID, \
                           "wwvus", \
							  issuerEventId,							  implementationDateTime,							  durationInMinutes,							  passwordType,							  password);



/** @brief This command is used to request the ESI to respond with information regarding any pending change of Site ID.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: GetSiteId
*/
#define emberAfFillCommandDeviceManagementClusterGetSiteId( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_GET_SITE_ID_COMMAND_ID, \
                           "" \
);



/** @brief This command is used to set the siteID.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: UpdateSiteId
* @param issuerEventId uint32_t

* @param siteIdTime uint32_t

* @param providerId uint32_t

* @param siteId uint8_t *

*/
#define emberAfFillCommandDeviceManagementClusterUpdateSiteId( \
  issuerEventId,  siteIdTime,  providerId,  siteId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_UPDATE_SITE_ID_COMMAND_ID, \
                           "wwws", \
							  issuerEventId,							  siteIdTime,							  providerId,							  siteId);



/** @brief This command is sent in response to a GetEventConfiguration command.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: ReportEventConfiguration
* @param commandIndex uint8_t

* @param totalCommands uint8_t

* @param eventConfigurationPayload uint8_t *
* @param eventConfigurationPayloadLen uint16_t 
*/
#define emberAfFillCommandDeviceManagementClusterReportEventConfiguration( \
  commandIndex,  totalCommands,  eventConfigurationPayload, eventConfigurationPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_REPORT_EVENT_CONFIGURATION_COMMAND_ID, \
                           "uub", \
							  commandIndex,							  totalCommands,							  eventConfigurationPayload, eventConfigurationPayloadLen);



/** @brief This command provides a method to set the event configuration attributes, held in a client device.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: SetEventConfiguration
* @param issuerEventId uint32_t

* @param startDateTime uint32_t

* @param eventConfiguration uint8_t

* @param configurationControl uint8_t

* @param eventConfigurationPayload uint8_t *
* @param eventConfigurationPayloadLen uint16_t 
*/
#define emberAfFillCommandDeviceManagementClusterSetEventConfiguration( \
  issuerEventId,  startDateTime,  eventConfiguration,  configurationControl,  eventConfigurationPayload, eventConfigurationPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_SET_EVENT_CONFIGURATION_COMMAND_ID, \
                           "wwuub", \
							  issuerEventId,							  startDateTime,							  eventConfiguration,							  configurationControl,							  eventConfigurationPayload, eventConfigurationPayloadLen);



/** @brief This command is used to request the ESI to respond with information regarding any pending change of Customer ID Number.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: GetCIN
*/
#define emberAfFillCommandDeviceManagementClusterGetCIN( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_GET_CIN_COMMAND_ID, \
                           "" \
);



/** @brief This command allows the server to request details of event configurations.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: GetEventConfiguration
* @param eventId uint16_t

*/
#define emberAfFillCommandDeviceManagementClusterGetEventConfiguration( \
  eventId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_GET_EVENT_CONFIGURATION_COMMAND_ID, \
                           "v", \
							  eventId);



/** @brief This command is used to set the CustomerIDNumber attribute held in the Metering cluster.
* Cluster: Device Management, This cluster provides attributes and commands to support device-cognisant application layer protocols.
* Command: UpdateCIN
* @param issuerEventId uint32_t

* @param implementationTime uint32_t

* @param providerId uint32_t

* @param customerIdNumber uint8_t *

*/
#define emberAfFillCommandDeviceManagementClusterUpdateCIN( \
  issuerEventId,  implementationTime,  providerId,  customerIdNumber) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DEVICE_MANAGEMENT_CLUSTER_ID, \
                           ZCL_UPDATE_CIN_COMMAND_ID, \
                           "wwws", \
							  issuerEventId,							  implementationTime,							  providerId,							  customerIdNumber);



/** @brief The GetEventLog command allows a client to request events from a server's event logs. One or more PublishEventLog commands are returned on receipt of this command.
* Cluster: Events, This cluster provides an interface on which applications can use event-based protocols.
* Command: GetEventLog
* @param eventControlLogId uint8_t

* @param eventId uint16_t

* @param startTime uint32_t

* @param endTime uint32_t

* @param numberOfEvents uint8_t

* @param eventOffset uint16_t

*/
#define emberAfFillCommandEventsClusterGetEventLog( \
  eventControlLogId,  eventId,  startTime,  endTime,  numberOfEvents,  eventOffset) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_EVENTS_CLUSTER_ID, \
                           ZCL_GET_EVENT_LOG_COMMAND_ID, \
                           "uvwwuv", \
							  eventControlLogId,							  eventId,							  startTime,							  endTime,							  numberOfEvents,							  eventOffset);



/** @brief The PublishEvent command is generated upon an event trigger from within the reporting device and, if supported, the associated Event Configuration attribute in the Device Management cluster.
* Cluster: Events, This cluster provides an interface on which applications can use event-based protocols.
* Command: PublishEvent
* @param logId uint8_t

* @param eventId uint16_t

* @param eventTime uint32_t

* @param eventControl uint8_t

* @param eventData uint8_t *

*/
#define emberAfFillCommandEventsClusterPublishEvent( \
  logId,  eventId,  eventTime,  eventControl,  eventData) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_EVENTS_CLUSTER_ID, \
                           ZCL_PUBLISH_EVENT_COMMAND_ID, \
                           "uvwus", \
							  logId,							  eventId,							  eventTime,							  eventControl,							  eventData);



/** @brief The ClearEventLogRequest command requests that an Events server device clear the specified event log(s).
* Cluster: Events, This cluster provides an interface on which applications can use event-based protocols.
* Command: ClearEventLogRequest
* @param logId uint8_t

*/
#define emberAfFillCommandEventsClusterClearEventLogRequest( \
  logId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_EVENTS_CLUSTER_ID, \
                           ZCL_CLEAR_EVENT_LOG_REQUEST_COMMAND_ID, \
                           "u", \
							  logId);



/** @brief This command is generated on receipt of a GetEventLog command. The command returns the most recent event first and up to the number of events requested.
* Cluster: Events, This cluster provides an interface on which applications can use event-based protocols.
* Command: PublishEventLog
* @param totalNumberOfEvents uint16_t

* @param commandIndex uint8_t

* @param totalCommands uint8_t

* @param logPayloadControl uint8_t

* @param logPayload uint8_t *
* @param logPayloadLen uint16_t 
*/
#define emberAfFillCommandEventsClusterPublishEventLog( \
  totalNumberOfEvents,  commandIndex,  totalCommands,  logPayloadControl,  logPayload, logPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_EVENTS_CLUSTER_ID, \
                           ZCL_PUBLISH_EVENT_LOG_COMMAND_ID, \
                           "vuuub", \
							  totalNumberOfEvents,							  commandIndex,							  totalCommands,							  logPayloadControl,							  logPayload, logPayloadLen);



/** @brief This command is generated on receipt of a Clear Event Log Request command.
* Cluster: Events, This cluster provides an interface on which applications can use event-based protocols.
* Command: ClearEventLogResponse
* @param clearedEventsLogs uint8_t

*/
#define emberAfFillCommandEventsClusterClearEventLogResponse( \
  clearedEventsLogs) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_EVENTS_CLUSTER_ID, \
                           ZCL_CLEAR_EVENT_LOG_RESPONSE_COMMAND_ID, \
                           "u", \
							  clearedEventsLogs);



/** @brief The Pairing Response command provides a device joining a MDU network with a list of the devices that will constitute the 'virtual HAN' for the household in which the joining device is to operate.
* Cluster: MDU Pairing, This cluster seeks to assist in the commissioning of networks that include multi-dwelling units (MDUs).
* Command: PairingResponse
* @param pairingInformationVersion uint32_t

* @param totalNumberOfDevices uint8_t

* @param commandIndex uint8_t

* @param totalNumberOfCommands uint8_t

* @param eui64s uint8_t *
* @param eui64sLen uint16_t 
*/
#define emberAfFillCommandMduPairingClusterPairingResponse( \
  pairingInformationVersion,  totalNumberOfDevices,  commandIndex,  totalNumberOfCommands,  eui64s, eui64sLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_MDU_PAIRING_CLUSTER_ID, \
                           ZCL_PAIRING_RESPONSE_COMMAND_ID, \
                           "wuuub", \
							  pairingInformationVersion,							  totalNumberOfDevices,							  commandIndex,							  totalNumberOfCommands,							  eui64s, eui64sLen);



/** @brief The Pairing Request command allows a device joining a MDU network to determine the devices that will constitute the 'virtual HAN' for the household in which it is to operate.
* Cluster: MDU Pairing, This cluster seeks to assist in the commissioning of networks that include multi-dwelling units (MDUs).
* Command: PairingRequest
* @param localPairingInformationVersion uint32_t

* @param eui64OfRequestingDevice uint8_t *

*/
#define emberAfFillCommandMduPairingClusterPairingRequest( \
  localPairingInformationVersion,  eui64OfRequestingDevice) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MDU_PAIRING_CLUSTER_ID, \
                           ZCL_PAIRING_REQUEST_COMMAND_ID, \
                           "w8", \
							  localPairingInformationVersion,							  eui64OfRequestingDevice);



/** @brief The server sends it to temporarily suspend ZCL messages from clients it identifies as causing too much traffic.
* Cluster: Sub-GHz, Used by the Smart Energy profile for duty cycle monitoring and frequency agility.
* Command: SuspendZclMessages
* @param period uint8_t

*/
#define emberAfFillCommandSubGhzClusterSuspendZclMessages( \
  period) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SUB_GHZ_CLUSTER_ID, \
                           ZCL_SUSPEND_ZCL_MESSAGES_COMMAND_ID, \
                           "u", \
							  period);



/** @brief The client sends it to determine the current status of its ZCL communications from the server.
* Cluster: Sub-GHz, Used by the Smart Energy profile for duty cycle monitoring and frequency agility.
* Command: GetSuspendZclMessagesStatus
*/
#define emberAfFillCommandSubGhzClusterGetSuspendZclMessagesStatus( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SUB_GHZ_CLUSTER_ID, \
                           ZCL_GET_SUSPEND_ZCL_MESSAGES_STATUS_COMMAND_ID, \
                           "" \
);



/** @brief Command description for InitiateKeyEstablishmentRequest
* Cluster: Key Establishment, Key Establishment cluster
* Command: InitiateKeyEstablishmentRequest
* @param keyEstablishmentSuite uint16_t

* @param ephemeralDataGenerateTime uint8_t

* @param confirmKeyGenerateTime uint8_t

* @param identity Identity

*/
#define emberAfFillCommandKeyEstablishmentClusterInitiateKeyEstablishmentRequest( \
  keyEstablishmentSuite,  ephemeralDataGenerateTime,  confirmKeyGenerateTime,  identity) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_INITIATE_KEY_ESTABLISHMENT_REQUEST_COMMAND_ID, \
                           "vuub", \
							  keyEstablishmentSuite,							  ephemeralDataGenerateTime,							  confirmKeyGenerateTime,							  identity);



/** @brief Command description for InitiateKeyEstablishmentResponse
* Cluster: Key Establishment, Key Establishment cluster
* Command: InitiateKeyEstablishmentResponse
* @param requestedKeyEstablishmentSuite uint16_t

* @param ephemeralDataGenerateTime uint8_t

* @param confirmKeyGenerateTime uint8_t

* @param identity Identity

*/
#define emberAfFillCommandKeyEstablishmentClusterInitiateKeyEstablishmentResponse( \
  requestedKeyEstablishmentSuite,  ephemeralDataGenerateTime,  confirmKeyGenerateTime,  identity) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_INITIATE_KEY_ESTABLISHMENT_RESPONSE_COMMAND_ID, \
                           "vuub", \
							  requestedKeyEstablishmentSuite,							  ephemeralDataGenerateTime,							  confirmKeyGenerateTime,							  identity);



/** @brief Command description for EphemeralDataRequest
* Cluster: Key Establishment, Key Establishment cluster
* Command: EphemeralDataRequest
* @param ephemeralData EphemeralData

*/
#define emberAfFillCommandKeyEstablishmentClusterEphemeralDataRequest( \
  ephemeralData) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_EPHEMERAL_DATA_REQUEST_COMMAND_ID, \
                           "b", \
							  ephemeralData);



/** @brief Command description for EphemeralDataResponse
* Cluster: Key Establishment, Key Establishment cluster
* Command: EphemeralDataResponse
* @param ephemeralData EphemeralData

*/
#define emberAfFillCommandKeyEstablishmentClusterEphemeralDataResponse( \
  ephemeralData) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_EPHEMERAL_DATA_RESPONSE_COMMAND_ID, \
                           "b", \
							  ephemeralData);



/** @brief Command description for ConfirmKeyDataRequest
* Cluster: Key Establishment, Key Establishment cluster
* Command: ConfirmKeyDataRequest
* @param secureMessageAuthenticationCode Smac

*/
#define emberAfFillCommandKeyEstablishmentClusterConfirmKeyDataRequest( \
  secureMessageAuthenticationCode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_CONFIRM_KEY_DATA_REQUEST_COMMAND_ID, \
                           "b", \
							  secureMessageAuthenticationCode);



/** @brief Command description for ConfirmKeyDataResponse
* Cluster: Key Establishment, Key Establishment cluster
* Command: ConfirmKeyDataResponse
* @param secureMessageAuthenticationCode Smac

*/
#define emberAfFillCommandKeyEstablishmentClusterConfirmKeyDataResponse( \
  secureMessageAuthenticationCode) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_CONFIRM_KEY_DATA_RESPONSE_COMMAND_ID, \
                           "b", \
							  secureMessageAuthenticationCode);



/** @brief Command description for TerminateKeyEstablishment
* Cluster: Key Establishment, Key Establishment cluster
* Command: TerminateKeyEstablishmentFromClient
* @param statusCode uint8_t

* @param waitTime uint8_t

* @param keyEstablishmentSuite uint16_t

*/
#define emberAfFillCommandKeyEstablishmentClusterTerminateKeyEstablishmentFromClient( \
  statusCode,  waitTime,  keyEstablishmentSuite) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_TERMINATE_KEY_ESTABLISHMENT_FROM_CLIENT_COMMAND_ID, \
                           "uuv", \
							  statusCode,							  waitTime,							  keyEstablishmentSuite);



/** @brief Command description for TerminateKeyEstablishment
* Cluster: Key Establishment, Key Establishment cluster
* Command: TerminateKeyEstablishmentFromServer
* @param statusCode uint8_t

* @param waitTime uint8_t

* @param keyEstablishmentSuite uint16_t

*/
#define emberAfFillCommandKeyEstablishmentClusterTerminateKeyEstablishmentFromServer( \
  statusCode,  waitTime,  keyEstablishmentSuite) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_KEY_ESTABLISHMENT_CLUSTER_ID, \
                           ZCL_TERMINATE_KEY_ESTABLISHMENT_FROM_SERVER_COMMAND_ID, \
                           "uuv", \
							  statusCode,							  waitTime,							  keyEstablishmentSuite);



/** @brief Command description for RequestInformation
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: RequestInformation
* @param inquiryId uint8_t

* @param dataTypeId uint8_t

* @param requestInformationPayload uint8_t *
* @param requestInformationPayloadLen uint16_t 
*/
#define emberAfFillCommandInformationClusterRequestInformation( \
  inquiryId,  dataTypeId,  requestInformationPayload, requestInformationPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_REQUEST_INFORMATION_COMMAND_ID, \
                           "uub", \
							  inquiryId,							  dataTypeId,							  requestInformationPayload, requestInformationPayloadLen);



/** @brief Command description for RequestInformationResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: RequestInformationResponse
* @param number uint8_t

* @param buffer uint8_t *
* @param bufferLen uint16_t 
*/
#define emberAfFillCommandInformationClusterRequestInformationResponse( \
  number,  buffer, bufferLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_REQUEST_INFORMATION_RESPONSE_COMMAND_ID, \
                           "ub", \
							  number,							  buffer, bufferLen);



/** @brief Command description for PushInformationResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: PushInformationResponse
* @param notificationList uint8_t *
* @param notificationListLen uint16_t 
*/
#define emberAfFillCommandInformationClusterPushInformationResponse( \
  notificationList, notificationListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_PUSH_INFORMATION_RESPONSE_COMMAND_ID, \
                           "b", \
							  notificationList, notificationListLen);



/** @brief Command description for PushInformation
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: PushInformation
* @param contents uint8_t *
* @param contentsLen uint16_t 
*/
#define emberAfFillCommandInformationClusterPushInformation( \
  contents, contentsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_PUSH_INFORMATION_COMMAND_ID, \
                           "b", \
							  contents, contentsLen);



/** @brief Command description for SendPreference
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: SendPreference
* @param preferenceType uint16_t

* @param preferencePayload uint8_t *
* @param preferencePayloadLen uint16_t 
*/
#define emberAfFillCommandInformationClusterSendPreference( \
  preferenceType,  preferencePayload, preferencePayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_SEND_PREFERENCE_COMMAND_ID, \
                           "vb", \
							  preferenceType,							  preferencePayload, preferencePayloadLen);



/** @brief Command description for SendPreferenceResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: SendPreferenceResponse
* @param statusFeedbackList uint8_t *
* @param statusFeedbackListLen uint16_t 
*/
#define emberAfFillCommandInformationClusterSendPreferenceResponse( \
  statusFeedbackList, statusFeedbackListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_SEND_PREFERENCE_RESPONSE_COMMAND_ID, \
                           "b", \
							  statusFeedbackList, statusFeedbackListLen);



/** @brief Command description for RequestPreferenceResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: RequestPreferenceResponse
* @param statusFeedback uint8_t

* @param preferenceType uint16_t

* @param preferencePayload uint8_t *
* @param preferencePayloadLen uint16_t 
*/
#define emberAfFillCommandInformationClusterRequestPreferenceResponse( \
  statusFeedback,  preferenceType,  preferencePayload, preferencePayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_REQUEST_PREFERENCE_RESPONSE_COMMAND_ID, \
                           "uvb", \
							  statusFeedback,							  preferenceType,							  preferencePayload, preferencePayloadLen);



/** @brief Command description for ServerRequestPreference
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: ServerRequestPreference
*/
#define emberAfFillCommandInformationClusterServerRequestPreference( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_SERVER_REQUEST_PREFERENCE_COMMAND_ID, \
                           "" \
);



/** @brief Command description for Update
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: Update
* @param accessControl uint8_t

* @param option uint8_t

* @param contents uint8_t *
* @param contentsLen uint16_t 
*/
#define emberAfFillCommandInformationClusterUpdate( \
  accessControl,  option,  contents, contentsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_UPDATE_COMMAND_ID, \
                           "uub", \
							  accessControl,							  option,							  contents, contentsLen);



/** @brief Command description for RequestPreferenceConfirmation
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: RequestPreferenceConfirmation
* @param statusFeedbackList uint8_t *
* @param statusFeedbackListLen uint16_t 
*/
#define emberAfFillCommandInformationClusterRequestPreferenceConfirmation( \
  statusFeedbackList, statusFeedbackListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_REQUEST_PREFERENCE_CONFIRMATION_COMMAND_ID, \
                           "b", \
							  statusFeedbackList, statusFeedbackListLen);



/** @brief Command description for Delete
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: Delete
* @param deletionOptions uint8_t

* @param contentIds uint8_t *
* @param contentIdsLen uint16_t 
*/
#define emberAfFillCommandInformationClusterDelete( \
  deletionOptions,  contentIds, contentIdsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_DELETE_COMMAND_ID, \
                           "ub", \
							  deletionOptions,							  contentIds, contentIdsLen);



/** @brief Command description for UpdateResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: UpdateResponse
* @param notificationList uint8_t *
* @param notificationListLen uint16_t 
*/
#define emberAfFillCommandInformationClusterUpdateResponse( \
  notificationList, notificationListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_UPDATE_RESPONSE_COMMAND_ID, \
                           "b", \
							  notificationList, notificationListLen);



/** @brief Command description for ConfigureNodeDescription
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: ConfigureNodeDescription
* @param description uint8_t *

*/
#define emberAfFillCommandInformationClusterConfigureNodeDescription( \
  description) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_CONFIGURE_NODE_DESCRIPTION_COMMAND_ID, \
                           "s", \
							  description);



/** @brief Command description for DeleteResponse
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: DeleteResponse
* @param notificationList uint8_t *
* @param notificationListLen uint16_t 
*/
#define emberAfFillCommandInformationClusterDeleteResponse( \
  notificationList, notificationListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_DELETE_RESPONSE_COMMAND_ID, \
                           "b", \
							  notificationList, notificationListLen);



/** @brief Command description for ConfigureDeliveryEnable
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: ConfigureDeliveryEnable
* @param enable uint8_t

*/
#define emberAfFillCommandInformationClusterConfigureDeliveryEnable( \
  enable) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_CONFIGURE_DELIVERY_ENABLE_COMMAND_ID, \
                           "u", \
							  enable);



/** @brief Command description for ConfigurePushInformationTimer
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: ConfigurePushInformationTimer
* @param timer uint32_t

*/
#define emberAfFillCommandInformationClusterConfigurePushInformationTimer( \
  timer) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_CONFIGURE_PUSH_INFORMATION_TIMER_COMMAND_ID, \
                           "w", \
							  timer);



/** @brief Command description for ConfigureSetRootId
* Cluster: Information, Provides commands and attributes for information delivery service on ZigBee networks.
* Command: ConfigureSetRootId
* @param rootId uint16_t

*/
#define emberAfFillCommandInformationClusterConfigureSetRootId( \
  rootId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_INFORMATION_CLUSTER_ID, \
                           ZCL_CONFIGURE_SET_ROOT_ID_COMMAND_ID, \
                           "v", \
							  rootId);



/** @brief Command description for ReadFileRequest
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: ReadFileRequest
* @param fileIndex uint16_t

* @param fileStartPositionAndRequestedOctetCount uint8_t *
* @param fileStartPositionAndRequestedOctetCountLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterReadFileRequest( \
  fileIndex,  fileStartPositionAndRequestedOctetCount, fileStartPositionAndRequestedOctetCountLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_READ_FILE_REQUEST_COMMAND_ID, \
                           "vb", \
							  fileIndex,							  fileStartPositionAndRequestedOctetCount, fileStartPositionAndRequestedOctetCountLen);



/** @brief Command description for WriteFileRequest
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: WriteFileRequest
* @param writeOptions uint8_t

* @param fileSize uint8_t *
* @param fileSizeLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterWriteFileRequest( \
  writeOptions,  fileSize, fileSizeLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_WRITE_FILE_REQUEST_COMMAND_ID, \
                           "ub", \
							  writeOptions,							  fileSize, fileSizeLen);



/** @brief Command description for ReadRecordRequest
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: ReadRecordRequest
* @param fileIndex uint16_t

* @param fileStartRecordAndRequestedRecordCount uint8_t *
* @param fileStartRecordAndRequestedRecordCountLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterReadRecordRequest( \
  fileIndex,  fileStartRecordAndRequestedRecordCount, fileStartRecordAndRequestedRecordCountLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_READ_RECORD_REQUEST_COMMAND_ID, \
                           "vb", \
							  fileIndex,							  fileStartRecordAndRequestedRecordCount, fileStartRecordAndRequestedRecordCountLen);



/** @brief Command description for ModifyFileRequest
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: ModifyFileRequest
* @param fileIndex uint16_t

* @param fileStartPosition uint32_t

* @param octetCount uint32_t

*/
#define emberAfFillCommandDataSharingClusterModifyFileRequest( \
  fileIndex,  fileStartPosition,  octetCount) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_MODIFY_FILE_REQUEST_COMMAND_ID, \
                           "vww", \
							  fileIndex,							  fileStartPosition,							  octetCount);



/** @brief Command description for WriteFileResponse
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: WriteFileResponse
* @param status uint8_t

* @param fileIndex uint8_t *
* @param fileIndexLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterWriteFileResponse( \
  status,  fileIndex, fileIndexLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_WRITE_FILE_RESPONSE_COMMAND_ID, \
                           "ub", \
							  status,							  fileIndex, fileIndexLen);



/** @brief Command description for ModifyRecordRequest
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: ModifyRecordRequest
* @param fileIndex uint16_t

* @param fileStartRecord uint16_t

* @param recordCount uint16_t

*/
#define emberAfFillCommandDataSharingClusterModifyRecordRequest( \
  fileIndex,  fileStartRecord,  recordCount) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_MODIFY_RECORD_REQUEST_COMMAND_ID, \
                           "vvv", \
							  fileIndex,							  fileStartRecord,							  recordCount);



/** @brief Command description for FileTransmission
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: FileTransmission
* @param transmitOptions uint8_t

* @param buffer uint8_t *
* @param bufferLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterFileTransmission( \
  transmitOptions,  buffer, bufferLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_FILE_TRANSMISSION_COMMAND_ID, \
                           "ub", \
							  transmitOptions,							  buffer, bufferLen);



/** @brief Command description for RecordTransmission
* Cluster: Data Sharing, Commands and attributes for small data sharing among ZigBee devices.
* Command: RecordTransmission
* @param transmitOptions uint8_t

* @param buffer uint8_t *
* @param bufferLen uint16_t 
*/
#define emberAfFillCommandDataSharingClusterRecordTransmission( \
  transmitOptions,  buffer, bufferLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_SHARING_CLUSTER_ID, \
                           ZCL_RECORD_TRANSMISSION_COMMAND_ID, \
                           "ub", \
							  transmitOptions,							  buffer, bufferLen);



/** @brief Command description for SearchGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: SearchGame
* @param specificGame uint8_t

* @param gameId uint16_t

*/
#define emberAfFillCommandGamingClusterSearchGame( \
  specificGame,  gameId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_SEARCH_GAME_COMMAND_ID, \
                           "uv", \
							  specificGame,							  gameId);



/** @brief Command description for GameAnnouncement
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: GameAnnouncement
* @param gameId uint16_t

* @param gameMaster uint8_t

* @param listOfGame uint8_t *

*/
#define emberAfFillCommandGamingClusterGameAnnouncement( \
  gameId,  gameMaster,  listOfGame) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_GAME_ANNOUNCEMENT_COMMAND_ID, \
                           "vus", \
							  gameId,							  gameMaster,							  listOfGame);



/** @brief Command description for JoinGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: JoinGame
* @param gameId uint16_t

* @param joinAsMaster uint8_t

* @param nameOfGame uint8_t *

*/
#define emberAfFillCommandGamingClusterJoinGame( \
  gameId,  joinAsMaster,  nameOfGame) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_JOIN_GAME_COMMAND_ID, \
                           "vus", \
							  gameId,							  joinAsMaster,							  nameOfGame);



/** @brief Command description for GeneralResponse
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: GeneralResponse
* @param commandId uint8_t

* @param status uint8_t

* @param message uint8_t *

*/
#define emberAfFillCommandGamingClusterGeneralResponse( \
  commandId,  status,  message) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_GENERAL_RESPONSE_COMMAND_ID, \
                           "uus", \
							  commandId,							  status,							  message);



/** @brief Command description for StartGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: StartGame
*/
#define emberAfFillCommandGamingClusterStartGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_START_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for PauseGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: PauseGame
*/
#define emberAfFillCommandGamingClusterPauseGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_PAUSE_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for ResumeGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: ResumeGame
*/
#define emberAfFillCommandGamingClusterResumeGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_RESUME_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for QuitGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: QuitGame
*/
#define emberAfFillCommandGamingClusterQuitGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_QUIT_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for EndGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: EndGame
*/
#define emberAfFillCommandGamingClusterEndGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_END_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for StartOver
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: StartOver
*/
#define emberAfFillCommandGamingClusterStartOver( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_START_OVER_COMMAND_ID, \
                           "" \
);



/** @brief Command description for ActionControl
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: ActionControl
* @param actions uint32_t

*/
#define emberAfFillCommandGamingClusterActionControl( \
  actions) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_ACTION_CONTROL_COMMAND_ID, \
                           "w", \
							  actions);



/** @brief Command description for DownloadGame
* Cluster: Gaming, Attributes and commands to support gaming functions of ZigBee-enabled mobile terminals.
* Command: DownloadGame
*/
#define emberAfFillCommandGamingClusterDownloadGame( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_GAMING_CLUSTER_ID, \
                           ZCL_DOWNLOAD_GAME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for PathCreation
* Cluster: Data Rate Control, This cluster seeks to give applications a means to managing data rate. It provides commands and attributes which form this interface.
* Command: PathCreation
* @param originatorAddress uint16_t

* @param destinationAddress uint16_t

* @param dataRate uint8_t

*/
#define emberAfFillCommandDataRateControlClusterPathCreation( \
  originatorAddress,  destinationAddress,  dataRate) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_RATE_CONTROL_CLUSTER_ID, \
                           ZCL_PATH_CREATION_COMMAND_ID, \
                           "vvu", \
							  originatorAddress,							  destinationAddress,							  dataRate);



/** @brief Command description for DataRateControl
* Cluster: Data Rate Control, This cluster seeks to give applications a means to managing data rate. It provides commands and attributes which form this interface.
* Command: DataRateControl
* @param originatorAddress uint16_t

* @param destinationAddress uint16_t

* @param dataRate uint8_t

*/
#define emberAfFillCommandDataRateControlClusterDataRateControl( \
  originatorAddress,  destinationAddress,  dataRate) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_DATA_RATE_CONTROL_CLUSTER_ID, \
                           ZCL_DATA_RATE_CONTROL_COMMAND_ID, \
                           "vvu", \
							  originatorAddress,							  destinationAddress,							  dataRate);



/** @brief Command description for DataRateNotification
* Cluster: Data Rate Control, This cluster seeks to give applications a means to managing data rate. It provides commands and attributes which form this interface.
* Command: DataRateNotification
* @param originatorAddress uint16_t

* @param destinationAddress uint16_t

* @param dataRate uint8_t

*/
#define emberAfFillCommandDataRateControlClusterDataRateNotification( \
  originatorAddress,  destinationAddress,  dataRate) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_RATE_CONTROL_CLUSTER_ID, \
                           ZCL_DATA_RATE_NOTIFICATION_COMMAND_ID, \
                           "vvu", \
							  originatorAddress,							  destinationAddress,							  dataRate);



/** @brief Command description for PathDeletion
* Cluster: Data Rate Control, This cluster seeks to give applications a means to managing data rate. It provides commands and attributes which form this interface.
* Command: PathDeletion
* @param originatorAddress uint16_t

* @param destinationAddress uint16_t

*/
#define emberAfFillCommandDataRateControlClusterPathDeletion( \
  originatorAddress,  destinationAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_DATA_RATE_CONTROL_CLUSTER_ID, \
                           ZCL_PATH_DELETION_COMMAND_ID, \
                           "vv", \
							  originatorAddress,							  destinationAddress);



/** @brief Command description for EstablishmentRequest
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: EstablishmentRequest
* @param flag uint8_t

* @param codecType uint8_t

* @param sampFreq uint8_t

* @param codecRate uint8_t

* @param serviceType uint8_t

* @param buffer uint8_t *
* @param bufferLen uint16_t 
*/
#define emberAfFillCommandVoiceOverZigbeeClusterEstablishmentRequest( \
  flag,  codecType,  sampFreq,  codecRate,  serviceType,  buffer, bufferLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_ESTABLISHMENT_REQUEST_COMMAND_ID, \
                           "uuuuub", \
							  flag,							  codecType,							  sampFreq,							  codecRate,							  serviceType,							  buffer, bufferLen);



/** @brief Command description for EstablishmentResponse
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: EstablishmentResponse
* @param ackNack uint8_t

* @param codecType uint8_t

*/
#define emberAfFillCommandVoiceOverZigbeeClusterEstablishmentResponse( \
  ackNack,  codecType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_ESTABLISHMENT_RESPONSE_COMMAND_ID, \
                           "uu", \
							  ackNack,							  codecType);



/** @brief Command description for VoiceTransmission
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: VoiceTransmission
* @param voiceData uint8_t *
* @param voiceDataLen uint16_t 
*/
#define emberAfFillCommandVoiceOverZigbeeClusterVoiceTransmission( \
  voiceData, voiceDataLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_VOICE_TRANSMISSION_COMMAND_ID, \
                           "b", \
							  voiceData, voiceDataLen);



/** @brief Command description for VoiceTransmissionResponse
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: VoiceTransmissionResponse
* @param sequenceNumber uint8_t

* @param errorFlag uint8_t

*/
#define emberAfFillCommandVoiceOverZigbeeClusterVoiceTransmissionResponse( \
  sequenceNumber,  errorFlag) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_VOICE_TRANSMISSION_RESPONSE_COMMAND_ID, \
                           "uu", \
							  sequenceNumber,							  errorFlag);



/** @brief Command description for VoiceTransmissionCompletion
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: VoiceTransmissionCompletion
*/
#define emberAfFillCommandVoiceOverZigbeeClusterVoiceTransmissionCompletion( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_VOICE_TRANSMISSION_COMPLETION_COMMAND_ID, \
                           "" \
);



/** @brief Command description for Control
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: Control
* @param controlType uint8_t

*/
#define emberAfFillCommandVoiceOverZigbeeClusterControl( \
  controlType) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_CONTROL_COMMAND_ID, \
                           "u", \
							  controlType);



/** @brief Command description for ControlResponse
* Cluster: Voice over ZigBee, This cluster seeks to provide an interface to a voice over ZigBee protocol.
* Command: ControlResponse
* @param ackNack uint8_t

*/
#define emberAfFillCommandVoiceOverZigbeeClusterControlResponse( \
  ackNack) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_VOICE_OVER_ZIGBEE_CLUSTER_ID, \
                           ZCL_CONTROL_RESPONSE_COMMAND_ID, \
                           "u", \
							  ackNack);



/** @brief Command description for JoinChatRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: JoinChatRequest
* @param uid uint16_t

* @param nickname uint8_t *

* @param cid uint16_t

*/
#define emberAfFillCommandChattingClusterJoinChatRequest( \
  uid,  nickname,  cid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_JOIN_CHAT_REQUEST_COMMAND_ID, \
                           "vsv", \
							  uid,							  nickname,							  cid);



/** @brief Command description for StartChatResponse
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: StartChatResponse
* @param status uint8_t

* @param cid uint16_t

*/
#define emberAfFillCommandChattingClusterStartChatResponse( \
  status,  cid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_START_CHAT_RESPONSE_COMMAND_ID, \
                           "uv", \
							  status,							  cid);



/** @brief Command description for LeaveChatRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: LeaveChatRequest
* @param cid uint16_t

* @param uid uint16_t

*/
#define emberAfFillCommandChattingClusterLeaveChatRequest( \
  cid,  uid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_LEAVE_CHAT_REQUEST_COMMAND_ID, \
                           "vv", \
							  cid,							  uid);



/** @brief Command description for JoinChatResponse
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: JoinChatResponse
* @param status uint8_t

* @param cid uint16_t

* @param chatParticipantList uint8_t *
* @param chatParticipantListLen uint16_t 
*/
#define emberAfFillCommandChattingClusterJoinChatResponse( \
  status,  cid,  chatParticipantList, chatParticipantListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_JOIN_CHAT_RESPONSE_COMMAND_ID, \
                           "uvb", \
							  status,							  cid,							  chatParticipantList, chatParticipantListLen);



/** @brief Command description for SearchChatRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SearchChatRequest
*/
#define emberAfFillCommandChattingClusterSearchChatRequest( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SEARCH_CHAT_REQUEST_COMMAND_ID, \
                           "" \
);



/** @brief Command description for UserLeft
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: UserLeft
* @param cid uint16_t

* @param uid uint16_t

* @param nickname uint8_t *

*/
#define emberAfFillCommandChattingClusterUserLeft( \
  cid,  uid,  nickname) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_USER_LEFT_COMMAND_ID, \
                           "vvs", \
							  cid,							  uid,							  nickname);



/** @brief Command description for SwitchChairmanResponse
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SwitchChairmanResponse
* @param cid uint16_t

* @param uid uint16_t

*/
#define emberAfFillCommandChattingClusterSwitchChairmanResponse( \
  cid,  uid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SWITCH_CHAIRMAN_RESPONSE_COMMAND_ID, \
                           "vv", \
							  cid,							  uid);



/** @brief Command description for UserJoined
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: UserJoined
* @param cid uint16_t

* @param uid uint16_t

* @param nickname uint8_t *

*/
#define emberAfFillCommandChattingClusterUserJoined( \
  cid,  uid,  nickname) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_USER_JOINED_COMMAND_ID, \
                           "vvs", \
							  cid,							  uid,							  nickname);



/** @brief Command description for StartChatRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: StartChatRequest
* @param name uint8_t *

* @param uid uint16_t

* @param nickname uint8_t *

*/
#define emberAfFillCommandChattingClusterStartChatRequest( \
  name,  uid,  nickname) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_START_CHAT_REQUEST_COMMAND_ID, \
                           "svs", \
							  name,							  uid,							  nickname);



/** @brief Command description for SearchChatResponse
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SearchChatResponse
* @param options uint8_t

* @param chatRoomList uint8_t *
* @param chatRoomListLen uint16_t 
*/
#define emberAfFillCommandChattingClusterSearchChatResponse( \
  options,  chatRoomList, chatRoomListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SEARCH_CHAT_RESPONSE_COMMAND_ID, \
                           "ub", \
							  options,							  chatRoomList, chatRoomListLen);



/** @brief Command description for ChatMessage
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: ChatMessage
* @param destinationUid uint16_t

* @param sourceUid uint16_t

* @param cid uint16_t

* @param nickname uint8_t *

* @param message uint8_t *

*/
#define emberAfFillCommandChattingClusterChatMessage( \
  destinationUid,  sourceUid,  cid,  nickname,  message) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_CHAT_MESSAGE_COMMAND_ID, \
                           "vvvss", \
							  destinationUid,							  sourceUid,							  cid,							  nickname,							  message);



/** @brief Command description for SwitchChairmanRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SwitchChairmanRequest
* @param cid uint16_t

*/
#define emberAfFillCommandChattingClusterSwitchChairmanRequest( \
  cid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SWITCH_CHAIRMAN_REQUEST_COMMAND_ID, \
                           "v", \
							  cid);



/** @brief Command description for GetNodeInformationRequest
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: GetNodeInformationRequest
* @param cid uint16_t

* @param uid uint16_t

*/
#define emberAfFillCommandChattingClusterGetNodeInformationRequest( \
  cid,  uid) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_GET_NODE_INFORMATION_REQUEST_COMMAND_ID, \
                           "vv", \
							  cid,							  uid);



/** @brief Command description for SwitchChairmanConfirm
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SwitchChairmanConfirm
* @param cid uint16_t

* @param nodeInformationList uint8_t *
* @param nodeInformationListLen uint16_t 
*/
#define emberAfFillCommandChattingClusterSwitchChairmanConfirm( \
  cid,  nodeInformationList, nodeInformationListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SWITCH_CHAIRMAN_CONFIRM_COMMAND_ID, \
                           "vb", \
							  cid,							  nodeInformationList, nodeInformationListLen);



/** @brief Command description for SwitchChairmanNotification
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: SwitchChairmanNotification
* @param cid uint16_t

* @param uid uint16_t

* @param address uint16_t

* @param endpoint uint8_t

*/
#define emberAfFillCommandChattingClusterSwitchChairmanNotification( \
  cid,  uid,  address,  endpoint) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_SWITCH_CHAIRMAN_NOTIFICATION_COMMAND_ID, \
                           "vvvu", \
							  cid,							  uid,							  address,							  endpoint);



/** @brief Command description for GetNodeInformationResponse
* Cluster: Chatting, Commands and attributes for sending chat messages among ZigBee devices.
* Command: GetNodeInformationResponse
* @param status uint8_t

* @param cid uint16_t

* @param uid uint16_t

* @param addressEndpointAndNickname uint8_t *
* @param addressEndpointAndNicknameLen uint16_t 
*/
#define emberAfFillCommandChattingClusterGetNodeInformationResponse( \
  status,  cid,  uid,  addressEndpointAndNickname, addressEndpointAndNicknameLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_CHATTING_CLUSTER_ID, \
                           ZCL_GET_NODE_INFORMATION_RESPONSE_COMMAND_ID, \
                           "uvvb", \
							  status,							  cid,							  uid,							  addressEndpointAndNickname, addressEndpointAndNicknameLen);



/** @brief Command description for BuyRequest
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: BuyRequest
* @param userId uint8_t *

* @param userType uint16_t

* @param serviceId uint16_t

* @param goodId uint8_t *

*/
#define emberAfFillCommandPaymentClusterBuyRequest( \
  userId,  userType,  serviceId,  goodId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_BUY_REQUEST_COMMAND_ID, \
                           "svvs", \
							  userId,							  userType,							  serviceId,							  goodId);



/** @brief Command description for BuyConfirm
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: BuyConfirm
* @param serialNumber uint8_t *

* @param currency uint32_t

* @param priceTrailingDigit uint8_t

* @param price uint32_t

* @param timestamp uint8_t *

* @param transId uint16_t

* @param transStatus uint8_t

*/
#define emberAfFillCommandPaymentClusterBuyConfirm( \
  serialNumber,  currency,  priceTrailingDigit,  price,  timestamp,  transId,  transStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_BUY_CONFIRM_COMMAND_ID, \
                           "swuwsvu", \
							  serialNumber,							  currency,							  priceTrailingDigit,							  price,							  timestamp,							  transId,							  transStatus);



/** @brief Command description for AcceptPayment
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: AcceptPayment
* @param userId uint8_t *

* @param userType uint16_t

* @param serviceId uint16_t

* @param goodId uint8_t *

*/
#define emberAfFillCommandPaymentClusterAcceptPayment( \
  userId,  userType,  serviceId,  goodId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_ACCEPT_PAYMENT_COMMAND_ID, \
                           "svvs", \
							  userId,							  userType,							  serviceId,							  goodId);



/** @brief Command description for ReceiptDelivery
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: ReceiptDelivery
* @param serialNumber uint8_t *

* @param currency uint32_t

* @param priceTrailingDigit uint8_t

* @param price uint32_t

* @param timestamp uint8_t *

*/
#define emberAfFillCommandPaymentClusterReceiptDelivery( \
  serialNumber,  currency,  priceTrailingDigit,  price,  timestamp) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_RECEIPT_DELIVERY_COMMAND_ID, \
                           "swuws", \
							  serialNumber,							  currency,							  priceTrailingDigit,							  price,							  timestamp);



/** @brief Command description for PaymentConfirm
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: PaymentConfirm
* @param serialNumber uint8_t *

* @param transId uint16_t

* @param transStatus uint8_t

*/
#define emberAfFillCommandPaymentClusterPaymentConfirm( \
  serialNumber,  transId,  transStatus) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_PAYMENT_CONFIRM_COMMAND_ID, \
                           "svu", \
							  serialNumber,							  transId,							  transStatus);



/** @brief Command description for TransactionEnd
* Cluster: Payment, Commands and attributes for payment scenarios including ZigBee devices.
* Command: TransactionEnd
* @param serialNumber uint8_t *

* @param status uint8_t

*/
#define emberAfFillCommandPaymentClusterTransactionEnd( \
  serialNumber,  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_PAYMENT_CLUSTER_ID, \
                           ZCL_TRANSACTION_END_COMMAND_ID, \
                           "su", \
							  serialNumber,							  status);



/** @brief Command description for Subscribe
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: Subscribe
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterSubscribe( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_SUBSCRIBE_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief Command description for CheckBillStatus
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: CheckBillStatus
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterCheckBillStatus( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_CHECK_BILL_STATUS_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief Command description for Unsubscribe
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: Unsubscribe
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterUnsubscribe( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_UNSUBSCRIBE_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief Command description for SendBillRecord
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: SendBillRecord
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

* @param timestamp uint8_t *

* @param duration uint16_t

*/
#define emberAfFillCommandBillingClusterSendBillRecord( \
  userId,  serviceId,  serviceProviderId,  timestamp,  duration) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_SEND_BILL_RECORD_COMMAND_ID, \
                           "svvsv", \
							  userId,							  serviceId,							  serviceProviderId,							  timestamp,							  duration);



/** @brief Command description for StartBillingSession
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: StartBillingSession
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterStartBillingSession( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_START_BILLING_SESSION_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief Command description for StopBillingSession
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: StopBillingSession
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterStopBillingSession( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_STOP_BILLING_SESSION_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief Command description for BillStatusNotification
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: BillStatusNotification
* @param userId uint8_t *

* @param status uint8_t

*/
#define emberAfFillCommandBillingClusterBillStatusNotification( \
  userId,  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_BILL_STATUS_NOTIFICATION_COMMAND_ID, \
                           "su", \
							  userId,							  status);



/** @brief Command description for SessionKeepAlive
* Cluster: Billing, Attributes and commands to enable billing of users for provided services through the use of a billing platform.
* Command: SessionKeepAlive
* @param userId uint8_t *

* @param serviceId uint16_t

* @param serviceProviderId uint16_t

*/
#define emberAfFillCommandBillingClusterSessionKeepAlive( \
  userId,  serviceId,  serviceProviderId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_BILLING_CLUSTER_ID, \
                           ZCL_SESSION_KEEP_ALIVE_COMMAND_ID, \
                           "svv", \
							  userId,							  serviceId,							  serviceProviderId);



/** @brief This basic message is used to retrieve Household Appliance current alerts.
* Cluster: Appliance Events and Alert, Attributes and commands for transmitting or notifying the occurrence of an event, such as "temperature reached" and of an alert such as alarm, fault or warning.
* Command: GetAlerts
*/
#define emberAfFillCommandApplianceEventsAndAlertClusterGetAlerts( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_ID, \
                           ZCL_GET_ALERTS_COMMAND_ID, \
                           "" \
);



/** @brief This message is used to return household appliance current alerts.
* Cluster: Appliance Events and Alert, Attributes and commands for transmitting or notifying the occurrence of an event, such as "temperature reached" and of an alert such as alarm, fault or warning.
* Command: GetAlertsResponse
* @param alertsCount uint8_t

* @param alertStructures uint8_t *
* @param alertStructuresLen uint16_t 
*/
#define emberAfFillCommandApplianceEventsAndAlertClusterGetAlertsResponse( \
  alertsCount,  alertStructures, alertStructuresLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_ID, \
                           ZCL_GET_ALERTS_RESPONSE_COMMAND_ID, \
                           "ub", \
							  alertsCount,							  alertStructures, alertStructuresLen);



/** @brief This message is used to notify the current modification of warning and/or fault conditions.
* Cluster: Appliance Events and Alert, Attributes and commands for transmitting or notifying the occurrence of an event, such as "temperature reached" and of an alert such as alarm, fault or warning.
* Command: AlertsNotification
* @param alertsCount uint8_t

* @param alertStructures uint8_t *
* @param alertStructuresLen uint16_t 
*/
#define emberAfFillCommandApplianceEventsAndAlertClusterAlertsNotification( \
  alertsCount,  alertStructures, alertStructuresLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_ID, \
                           ZCL_ALERTS_NOTIFICATION_COMMAND_ID, \
                           "ub", \
							  alertsCount,							  alertStructures, alertStructuresLen);



/** @brief This message is used to notify an event occurred during the normal working of the appliance.
* Cluster: Appliance Events and Alert, Attributes and commands for transmitting or notifying the occurrence of an event, such as "temperature reached" and of an alert such as alarm, fault or warning.
* Command: EventsNotification
* @param eventHeader uint8_t

* @param eventId uint8_t

*/
#define emberAfFillCommandApplianceEventsAndAlertClusterEventsNotification( \
  eventHeader,  eventId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_EVENTS_AND_ALERT_CLUSTER_ID, \
                           ZCL_EVENTS_NOTIFICATION_COMMAND_ID, \
                           "uu", \
							  eventHeader,							  eventId);



/** @brief The Appliance Statistics Cluster server occasionally sends out a Log Notification command to the devices to which it needs to log information related to statistics (e.g., home gateways) which implement the client side of Appliance Statistics Cluster.
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: LogNotification
* @param timeStamp uint32_t

* @param logId uint32_t

* @param logLength uint32_t

* @param logPayload uint8_t *
* @param logPayloadLen uint16_t 
*/
#define emberAfFillCommandApplianceStatisticsClusterLogNotification( \
  timeStamp,  logId,  logLength,  logPayload, logPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_LOG_NOTIFICATION_COMMAND_ID, \
                           "wwwb", \
							  timeStamp,							  logId,							  logLength,							  logPayload, logPayloadLen);



/** @brief The Log request command is sent from a device supporting the client side of the Appliance Statistics cluster (e.g., Home Gateway) to retrieve the log from the device supporting the server side (e.g., appliance).
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: LogRequest
* @param logId uint32_t

*/
#define emberAfFillCommandApplianceStatisticsClusterLogRequest( \
  logId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_LOG_REQUEST_COMMAND_ID, \
                           "w", \
							  logId);



/** @brief The Appliance Statistics Cluster server sends out a Log Response command to respond to a Log Request command generated by the client side of the Appliance Statistics cluster.
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: LogResponse
* @param timeStamp uint32_t

* @param logId uint32_t

* @param logLength uint32_t

* @param logPayload uint8_t *
* @param logPayloadLen uint16_t 
*/
#define emberAfFillCommandApplianceStatisticsClusterLogResponse( \
  timeStamp,  logId,  logLength,  logPayload, logPayloadLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_LOG_RESPONSE_COMMAND_ID, \
                           "wwwb", \
							  timeStamp,							  logId,							  logLength,							  logPayload, logPayloadLen);



/** @brief The Log Queue Request command is send from a device supporting the client side of the Appliance Statistics cluster (e.g. Home Gateway) to retrieve the information about the logs inserted in the queue, from the device supporting the server side (e.g. appliance).
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: LogQueueRequest
*/
#define emberAfFillCommandApplianceStatisticsClusterLogQueueRequest( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_LOG_QUEUE_REQUEST_COMMAND_ID, \
                           "" \
);



/** @brief The Log Queue Response command is generated as a response to a LogQueueRequest command in order to notify the client side of the Appliance statistics cluster about the logs stored in the server side (queue) that can be retrieved by the client side of this cluster through a LogRequest command.
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: LogQueueResponse
* @param logQueueSize uint8_t

* @param logIds uint8_t *
* @param logIdsLen uint16_t 
*/
#define emberAfFillCommandApplianceStatisticsClusterLogQueueResponse( \
  logQueueSize,  logIds, logIdsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_LOG_QUEUE_RESPONSE_COMMAND_ID, \
                           "ub", \
							  logQueueSize,							  logIds, logIdsLen);



/** @brief The Appliance Statistics Cluster server sends out a Statistic Available command to notify the client side of the Appliance Statistics cluster that there are statistics that can be retrieved by using the Log Request command.
* Cluster: Appliance Statistics, This cluster provides a mechanism for the transmitting appliance statistics to a collection unit (gateway). The statistics can be in format of data logs. In case of statistic information that will not fit the single ZigBee payload, the Partition cluster should be used.
* Command: StatisticsAvailable
* @param logQueueSize uint8_t

* @param logIds uint8_t *
* @param logIdsLen uint16_t 
*/
#define emberAfFillCommandApplianceStatisticsClusterStatisticsAvailable( \
  logQueueSize,  logIds, logIdsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_APPLIANCE_STATISTICS_CLUSTER_ID, \
                           ZCL_STATISTICS_AVAILABLE_COMMAND_ID, \
                           "ub", \
							  logQueueSize,							  logIds, logIdsLen);



/** @brief A function which returns the power profiling information requested in the GetProfileInfo command. The power profiling information consists of a list of attributes which are profiled along with the period used to profile them.
* Cluster: Electrical Measurement, Attributes related to the electrical properties of a device. This cluster is used by power outlets and other devices that need to provide instantaneous data as opposed to metrology data which should be retrieved from the metering cluster..
* Command: GetProfileInfoResponseCommand
* @param profileCount uint8_t

* @param profileIntervalPeriod uint8_t

* @param maxNumberOfIntervals uint8_t

* @param listOfAttributes uint8_t *
* @param listOfAttributesLen uint16_t 
*/
#define emberAfFillCommandElectricalMeasurementClusterGetProfileInfoResponseCommand( \
  profileCount,  profileIntervalPeriod,  maxNumberOfIntervals,  listOfAttributes, listOfAttributesLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ELECTRICAL_MEASUREMENT_CLUSTER_ID, \
                           ZCL_GET_PROFILE_INFO_RESPONSE_COMMAND_COMMAND_ID, \
                           "uuub", \
							  profileCount,							  profileIntervalPeriod,							  maxNumberOfIntervals,							  listOfAttributes, listOfAttributesLen);



/** @brief A function which retrieves the power profiling information from the electrical measurement server.
* Cluster: Electrical Measurement, Attributes related to the electrical properties of a device. This cluster is used by power outlets and other devices that need to provide instantaneous data as opposed to metrology data which should be retrieved from the metering cluster..
* Command: GetProfileInfoCommand
*/
#define emberAfFillCommandElectricalMeasurementClusterGetProfileInfoCommand( \
) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ELECTRICAL_MEASUREMENT_CLUSTER_ID, \
                           ZCL_GET_PROFILE_INFO_COMMAND_COMMAND_ID, \
                           "" \
);



/** @brief A function which returns the electricity measurement profile. The electricity measurement profile includes information regarding the amount of time used to capture data related to the flow of electricity as well as the intervals thes
* Cluster: Electrical Measurement, Attributes related to the electrical properties of a device. This cluster is used by power outlets and other devices that need to provide instantaneous data as opposed to metrology data which should be retrieved from the metering cluster..
* Command: GetMeasurementProfileResponseCommand
* @param startTime uint32_t

* @param status uint8_t

* @param profileIntervalPeriod uint8_t

* @param numberOfIntervalsDelivered uint8_t

* @param attributeId uint16_t

* @param intervals uint8_t *
* @param intervalsLen uint16_t 
*/
#define emberAfFillCommandElectricalMeasurementClusterGetMeasurementProfileResponseCommand( \
  startTime,  status,  profileIntervalPeriod,  numberOfIntervalsDelivered,  attributeId,  intervals, intervalsLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ELECTRICAL_MEASUREMENT_CLUSTER_ID, \
                           ZCL_GET_MEASUREMENT_PROFILE_RESPONSE_COMMAND_COMMAND_ID, \
                           "wuuuvb", \
							  startTime,							  status,							  profileIntervalPeriod,							  numberOfIntervalsDelivered,							  attributeId,							  intervals, intervalsLen);



/** @brief A function which retrieves an electricity measurement profile from the electricity measurement server for a specific attribute Id requested.
* Cluster: Electrical Measurement, Attributes related to the electrical properties of a device. This cluster is used by power outlets and other devices that need to provide instantaneous data as opposed to metrology data which should be retrieved from the metering cluster..
* Command: GetMeasurementProfileCommand
* @param attributeId uint16_t

* @param startTime uint32_t

* @param numberOfIntervals uint8_t

*/
#define emberAfFillCommandElectricalMeasurementClusterGetMeasurementProfileCommand( \
  attributeId,  startTime,  numberOfIntervals) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ELECTRICAL_MEASUREMENT_CLUSTER_ID, \
                           ZCL_GET_MEASUREMENT_PROFILE_COMMAND_COMMAND_ID, \
                           "vwu", \
							  attributeId,							  startTime,							  numberOfIntervals);



/** @brief Command description for ScanRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: ScanRequest
* @param transaction uint32_t

* @param zigbeeInformation uint8_t

* @param zllInformation uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterScanRequest( \
  transaction,  zigbeeInformation,  zllInformation) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_SCAN_REQUEST_COMMAND_ID, \
                           "wuu", \
							  transaction,							  zigbeeInformation,							  zllInformation);



/** @brief Command description for ScanResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: ScanResponse
* @param transaction uint32_t

* @param rssiCorrection uint8_t

* @param zigbeeInformation uint8_t

* @param zllInformation uint8_t

* @param keyBitmask uint16_t

* @param responseId uint32_t

* @param extendedPanId uint8_t *

* @param networkUpdateId uint8_t

* @param logicalChannel uint8_t

* @param panId uint16_t

* @param networkAddress uint16_t

* @param numberOfSubDevices uint8_t

* @param totalGroupIds uint8_t

* @param endpointId uint8_t

* @param profileId uint16_t

* @param deviceId uint16_t

* @param version uint8_t

* @param groupIdCount uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterScanResponse( \
  transaction,  rssiCorrection,  zigbeeInformation,  zllInformation,  keyBitmask,  responseId,  extendedPanId,  networkUpdateId,  logicalChannel,  panId,  networkAddress,  numberOfSubDevices,  totalGroupIds,  endpointId,  profileId,  deviceId,  version,  groupIdCount) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_SCAN_RESPONSE_COMMAND_ID, \
                           "wuuuvw8uuvvuuuvvuu", \
							  transaction,							  rssiCorrection,							  zigbeeInformation,							  zllInformation,							  keyBitmask,							  responseId,							  extendedPanId,							  networkUpdateId,							  logicalChannel,							  panId,							  networkAddress,							  numberOfSubDevices,							  totalGroupIds,							  endpointId,							  profileId,							  deviceId,							  version,							  groupIdCount);



/** @brief Command description for DeviceInformationRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: DeviceInformationRequest
* @param transaction uint32_t

* @param startIndex uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterDeviceInformationRequest( \
  transaction,  startIndex) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_DEVICE_INFORMATION_REQUEST_COMMAND_ID, \
                           "wu", \
							  transaction,							  startIndex);



/** @brief Command description for DeviceInformationResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: DeviceInformationResponse
* @param transaction uint32_t

* @param numberOfSubDevices uint8_t

* @param startIndex uint8_t

* @param deviceInformationRecordCount uint8_t

* @param deviceInformationRecordList uint8_t *
* @param deviceInformationRecordListLen uint16_t 
*/
#define emberAfFillCommandZllCommissioningClusterDeviceInformationResponse( \
  transaction,  numberOfSubDevices,  startIndex,  deviceInformationRecordCount,  deviceInformationRecordList, deviceInformationRecordListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_DEVICE_INFORMATION_RESPONSE_COMMAND_ID, \
                           "wuuub", \
							  transaction,							  numberOfSubDevices,							  startIndex,							  deviceInformationRecordCount,							  deviceInformationRecordList, deviceInformationRecordListLen);



/** @brief Command description for IdentifyRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: IdentifyRequest
* @param transaction uint32_t

* @param identifyDuration uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterIdentifyRequest( \
  transaction,  identifyDuration) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_IDENTIFY_REQUEST_COMMAND_ID, \
                           "wv", \
							  transaction,							  identifyDuration);



/** @brief Command description for ResetToFactoryNewRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: ResetToFactoryNewRequest
* @param transaction uint32_t

*/
#define emberAfFillCommandZllCommissioningClusterResetToFactoryNewRequest( \
  transaction) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_RESET_TO_FACTORY_NEW_REQUEST_COMMAND_ID, \
                           "w", \
							  transaction);



/** @brief Command description for NetworkStartRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkStartRequest
* @param transaction uint32_t

* @param extendedPanId uint8_t *

* @param keyIndex uint8_t

* @param encryptedNetworkKey uint8_t *

* @param logicalChannel uint8_t

* @param panId uint16_t

* @param networkAddress uint16_t

* @param groupIdentifiersBegin uint16_t

* @param groupIdentifiersEnd uint16_t

* @param freeNetworkAddressRangeBegin uint16_t

* @param freeNetworkAddressRangeEnd uint16_t

* @param freeGroupIdentifierRangeBegin uint16_t

* @param freeGroupIdentifierRangeEnd uint16_t

* @param initiatorIeeeAddress uint8_t *

* @param initiatorNetworkAddress uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkStartRequest( \
  transaction,  extendedPanId,  keyIndex,  encryptedNetworkKey,  logicalChannel,  panId,  networkAddress,  groupIdentifiersBegin,  groupIdentifiersEnd,  freeNetworkAddressRangeBegin,  freeNetworkAddressRangeEnd,  freeGroupIdentifierRangeBegin,  freeGroupIdentifierRangeEnd,  initiatorIeeeAddress,  initiatorNetworkAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_START_REQUEST_COMMAND_ID, \
                           "w8uGuvvvvvvvv8v", \
							  transaction,							  extendedPanId,							  keyIndex,							  encryptedNetworkKey,							  logicalChannel,							  panId,							  networkAddress,							  groupIdentifiersBegin,							  groupIdentifiersEnd,							  freeNetworkAddressRangeBegin,							  freeNetworkAddressRangeEnd,							  freeGroupIdentifierRangeBegin,							  freeGroupIdentifierRangeEnd,							  initiatorIeeeAddress,							  initiatorNetworkAddress);



/** @brief Command description for NetworkStartResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkStartResponse
* @param transaction uint32_t

* @param status uint8_t

* @param extendedPanId uint8_t *

* @param networkUpdateId uint8_t

* @param logicalChannel uint8_t

* @param panId uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkStartResponse( \
  transaction,  status,  extendedPanId,  networkUpdateId,  logicalChannel,  panId) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_START_RESPONSE_COMMAND_ID, \
                           "wu8uuv", \
							  transaction,							  status,							  extendedPanId,							  networkUpdateId,							  logicalChannel,							  panId);



/** @brief Command description for NetworkJoinRouterRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkJoinRouterRequest
* @param transaction uint32_t

* @param extendedPanId uint8_t *

* @param keyIndex uint8_t

* @param encryptedNetworkKey uint8_t *

* @param networkUpdateId uint8_t

* @param logicalChannel uint8_t

* @param panId uint16_t

* @param networkAddress uint16_t

* @param groupIdentifiersBegin uint16_t

* @param groupIdentifiersEnd uint16_t

* @param freeNetworkAddressRangeBegin uint16_t

* @param freeNetworkAddressRangeEnd uint16_t

* @param freeGroupIdentifierRangeBegin uint16_t

* @param freeGroupIdentifierRangeEnd uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkJoinRouterRequest( \
  transaction,  extendedPanId,  keyIndex,  encryptedNetworkKey,  networkUpdateId,  logicalChannel,  panId,  networkAddress,  groupIdentifiersBegin,  groupIdentifiersEnd,  freeNetworkAddressRangeBegin,  freeNetworkAddressRangeEnd,  freeGroupIdentifierRangeBegin,  freeGroupIdentifierRangeEnd) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_JOIN_ROUTER_REQUEST_COMMAND_ID, \
                           "w8uGuuvvvvvvvv", \
							  transaction,							  extendedPanId,							  keyIndex,							  encryptedNetworkKey,							  networkUpdateId,							  logicalChannel,							  panId,							  networkAddress,							  groupIdentifiersBegin,							  groupIdentifiersEnd,							  freeNetworkAddressRangeBegin,							  freeNetworkAddressRangeEnd,							  freeGroupIdentifierRangeBegin,							  freeGroupIdentifierRangeEnd);



/** @brief Command description for NetworkJoinRouterResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkJoinRouterResponse
* @param transaction uint32_t

* @param status uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkJoinRouterResponse( \
  transaction,  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_JOIN_ROUTER_RESPONSE_COMMAND_ID, \
                           "wu", \
							  transaction,							  status);



/** @brief Command description for NetworkJoinEndDeviceRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkJoinEndDeviceRequest
* @param transaction uint32_t

* @param extendedPanId uint8_t *

* @param keyIndex uint8_t

* @param encryptedNetworkKey uint8_t *

* @param networkUpdateId uint8_t

* @param logicalChannel uint8_t

* @param panId uint16_t

* @param networkAddress uint16_t

* @param groupIdentifiersBegin uint16_t

* @param groupIdentifiersEnd uint16_t

* @param freeNetworkAddressRangeBegin uint16_t

* @param freeNetworkAddressRangeEnd uint16_t

* @param freeGroupIdentifierRangeBegin uint16_t

* @param freeGroupIdentifierRangeEnd uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkJoinEndDeviceRequest( \
  transaction,  extendedPanId,  keyIndex,  encryptedNetworkKey,  networkUpdateId,  logicalChannel,  panId,  networkAddress,  groupIdentifiersBegin,  groupIdentifiersEnd,  freeNetworkAddressRangeBegin,  freeNetworkAddressRangeEnd,  freeGroupIdentifierRangeBegin,  freeGroupIdentifierRangeEnd) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_JOIN_END_DEVICE_REQUEST_COMMAND_ID, \
                           "w8uGuuvvvvvvvv", \
							  transaction,							  extendedPanId,							  keyIndex,							  encryptedNetworkKey,							  networkUpdateId,							  logicalChannel,							  panId,							  networkAddress,							  groupIdentifiersBegin,							  groupIdentifiersEnd,							  freeNetworkAddressRangeBegin,							  freeNetworkAddressRangeEnd,							  freeGroupIdentifierRangeBegin,							  freeGroupIdentifierRangeEnd);



/** @brief Command description for NetworkJoinEndDeviceResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkJoinEndDeviceResponse
* @param transaction uint32_t

* @param status uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkJoinEndDeviceResponse( \
  transaction,  status) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_JOIN_END_DEVICE_RESPONSE_COMMAND_ID, \
                           "wu", \
							  transaction,							  status);



/** @brief Command description for NetworkUpdateRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: NetworkUpdateRequest
* @param transaction uint32_t

* @param extendedPanId uint8_t *

* @param networkUpdateId uint8_t

* @param logicalChannel uint8_t

* @param panId uint16_t

* @param networkAddress uint16_t

*/
#define emberAfFillCommandZllCommissioningClusterNetworkUpdateRequest( \
  transaction,  extendedPanId,  networkUpdateId,  logicalChannel,  panId,  networkAddress) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_NETWORK_UPDATE_REQUEST_COMMAND_ID, \
                           "w8uuvv", \
							  transaction,							  extendedPanId,							  networkUpdateId,							  logicalChannel,							  panId,							  networkAddress);



/** @brief Command description for EndpointInformation
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: EndpointInformation
* @param ieeeAddress uint8_t *

* @param networkAddress uint16_t

* @param endpointId uint8_t

* @param profileId uint16_t

* @param deviceId uint16_t

* @param version uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterEndpointInformation( \
  ieeeAddress,  networkAddress,  endpointId,  profileId,  deviceId,  version) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_ENDPOINT_INFORMATION_COMMAND_ID, \
                           "8vuvvu", \
							  ieeeAddress,							  networkAddress,							  endpointId,							  profileId,							  deviceId,							  version);



/** @brief Command description for GetGroupIdentifiersRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: GetGroupIdentifiersRequest
* @param startIndex uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterGetGroupIdentifiersRequest( \
  startIndex) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_GET_GROUP_IDENTIFIERS_REQUEST_COMMAND_ID, \
                           "u", \
							  startIndex);



/** @brief Command description for GetGroupIdentifiersResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: GetGroupIdentifiersResponse
* @param total uint8_t

* @param startIndex uint8_t

* @param count uint8_t

* @param groupInformationRecordList uint8_t *
* @param groupInformationRecordListLen uint16_t 
*/
#define emberAfFillCommandZllCommissioningClusterGetGroupIdentifiersResponse( \
  total,  startIndex,  count,  groupInformationRecordList, groupInformationRecordListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_GET_GROUP_IDENTIFIERS_RESPONSE_COMMAND_ID, \
                           "uuub", \
							  total,							  startIndex,							  count,							  groupInformationRecordList, groupInformationRecordListLen);



/** @brief Command description for GetEndpointListRequest
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: GetEndpointListRequest
* @param startIndex uint8_t

*/
#define emberAfFillCommandZllCommissioningClusterGetEndpointListRequest( \
  startIndex) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_GET_ENDPOINT_LIST_REQUEST_COMMAND_ID, \
                           "u", \
							  startIndex);



/** @brief Command description for GetEndpointListResponse
* Cluster: ZLL Commissioning, The ZLL commissioning cluster provides commands to support touch link commissioning.
* Command: GetEndpointListResponse
* @param total uint8_t

* @param startIndex uint8_t

* @param count uint8_t

* @param endpointInformationRecordList uint8_t *
* @param endpointInformationRecordListLen uint16_t 
*/
#define emberAfFillCommandZllCommissioningClusterGetEndpointListResponse( \
  total,  startIndex,  count,  endpointInformationRecordList, endpointInformationRecordListLen) \
emberAfFillExternalBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_ZLL_COMMISSIONING_CLUSTER_ID, \
                           ZCL_GET_ENDPOINT_LIST_RESPONSE_COMMAND_ID, \
                           "uuub", \
							  total,							  startIndex,							  count,							  endpointInformationRecordList, endpointInformationRecordListLen);



/** @brief A sample manufacturer specific command within the sample manufacturer specific
        cluster.
* Cluster: Sample Mfg Specific Cluster, This cluster provides an example of how the Application 
      Framework can be extended to include manufacturer specific clusters.
* Command: CommandOne
* @param argOne uint8_t

*/
#define emberAfFillCommandSampleMfgSpecificClusterCommandOne( \
  argOne) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SAMPLE_MFG_SPECIFIC_CLUSTER_ID, \
4098, \
                           ZCL_COMMAND_ONE_COMMAND_ID, \
                           "u", \
							  argOne);



/** @brief A sample manufacturer specific command within the sample manufacturer specific
        cluster.
* Cluster: Sample Mfg Specific Cluster 2, This cluster provides an example of how the Application 
      Framework can be extended to include manufacturer specific clusters.
* Command: CommandTwo
* @param argOne uint8_t

*/
#define emberAfFillCommandSampleMfgSpecificCluster2CommandTwo( \
  argOne) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SAMPLE_MFG_SPECIFIC_CLUSTER_2_ID, \
4169, \
                           ZCL_COMMAND_TWO_COMMAND_ID, \
                           "u", \
							  argOne);



/** @brief Command to write a token value over the air.
* Cluster: Configuration Cluster, This cluster allows for the OTA configuration of firmware
	  parameters.
* Command: SetToken
* @param token uint16_t

* @param data uint8_t *

*/
#define emberAfFillCommandOtaConfigurationClusterSetToken( \
  token,  data) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_CONFIGURATION_CLUSTER_ID, \
4098, \
                           ZCL_SET_TOKEN_COMMAND_ID, \
                           "vs", \
							  token,							  data);



/** @brief Response to a token value read.
* Cluster: Configuration Cluster, This cluster allows for the OTA configuration of firmware
	  parameters.
* Command: ReturnToken
* @param token uint16_t

* @param data uint8_t *

*/
#define emberAfFillCommandOtaConfigurationClusterReturnToken( \
  token,  data) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_OTA_CONFIGURATION_CLUSTER_ID, \
4098, \
                           ZCL_RETURN_TOKEN_COMMAND_ID, \
                           "vs", \
							  token,							  data);



/** @brief Command to lock the token values.
* Cluster: Configuration Cluster, This cluster allows for the OTA configuration of firmware
	  parameters.
* Command: LockTokens
*/
#define emberAfFillCommandOtaConfigurationClusterLockTokens( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_CONFIGURATION_CLUSTER_ID, \
4098, \
                           ZCL_LOCK_TOKENS_COMMAND_ID, \
                           "" \
);



/** @brief Command to read a token value.
* Cluster: Configuration Cluster, This cluster allows for the OTA configuration of firmware
	  parameters.
* Command: ReadTokens
* @param token uint16_t

*/
#define emberAfFillCommandOtaConfigurationClusterReadTokens( \
  token) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_CONFIGURATION_CLUSTER_ID, \
4098, \
                           ZCL_READ_TOKENS_COMMAND_ID, \
                           "v", \
							  token);



/** @brief Command to unlock tokens with a device-specific password (if allowed).
* Cluster: Configuration Cluster, This cluster allows for the OTA configuration of firmware
	  parameters.
* Command: UnlockTokens
* @param data uint8_t *

*/
#define emberAfFillCommandOtaConfigurationClusterUnlockTokens( \
  data) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_OTA_CONFIGURATION_CLUSTER_ID, \
4098, \
                           ZCL_UNLOCK_TOKENS_COMMAND_ID, \
                           "s", \
							  data);



/** @brief Command to put the device into streaming mode.
* Cluster: MFGLIB Cluster, This cluster provides commands to kick off MFGLIB actions 
	  over the air.
* Command: stream
* @param channel uint8_t

* @param power int8_t

* @param time uint16_t

*/
#define emberAfFillCommandMfglibClusterstream( \
  channel,  power,  time) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MFGLIB_CLUSTER_ID, \
4098, \
                           ZCL_STREAM_COMMAND_ID, \
                           "uuv", \
							  channel,							  power,							  time);



/** @brief Command to put the device into tone mode.
* Cluster: MFGLIB Cluster, This cluster provides commands to kick off MFGLIB actions 
	  over the air.
* Command: tone
* @param channel uint8_t

* @param power int8_t

* @param time uint16_t

*/
#define emberAfFillCommandMfglibClustertone( \
  channel,  power,  time) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MFGLIB_CLUSTER_ID, \
4098, \
                           ZCL_TONE_COMMAND_ID, \
                           "uuv", \
							  channel,							  power,							  time);



/** @brief Command to put the device into RX mode.
* Cluster: MFGLIB Cluster, This cluster provides commands to kick off MFGLIB actions 
	  over the air.
* Command: rxMode
* @param channel uint8_t

* @param power int8_t

* @param time uint16_t

*/
#define emberAfFillCommandMfglibClusterrxMode( \
  channel,  power,  time) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_MFGLIB_CLUSTER_ID, \
4098, \
                           ZCL_RX_MODE_COMMAND_ID, \
                           "uuv", \
							  channel,							  power,							  time);



/** @brief Enable enforcement of APS-level security for all cluster commands.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableApsLinkKeyAuthorization
* @param numberExemptClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterEnableApsLinkKeyAuthorization( \
  numberExemptClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID, \
                           "ub", \
							  numberExemptClusters,							  clusterId, clusterIdLen);



/** @brief Command description for SlAPSLinkKeyAuthorizationQueryResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ApsLinkKeyAuthorizationQueryResponse
* @param clusterId uint16_t

* @param apsLinkKeyAuthStatus uint8_t

*/
#define emberAfFillCommandSlWwahClusterApsLinkKeyAuthorizationQueryResponse( \
  clusterId,  apsLinkKeyAuthStatus) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_APS_LINK_KEY_AUTHORIZATION_QUERY_RESPONSE_COMMAND_ID, \
                           "vu", \
							  clusterId,							  apsLinkKeyAuthStatus);



/** @brief Disable enforcement of APS-level security for all cluster commands.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableApsLinkKeyAuthorization
* @param numberExemptClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterDisableApsLinkKeyAuthorization( \
  numberExemptClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID, \
                           "ub", \
							  numberExemptClusters,							  clusterId, clusterIdLen);



/** @brief Command description for SlPoweringOffNotification
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: PoweringOffNotification
* @param powerNotificationReason uint8_t

* @param manufacturerId uint16_t

* @param manufacturerReasonLength uint8_t

* @param manufacturerReason uint8_t *
* @param manufacturerReasonLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterPoweringOffNotification( \
  powerNotificationReason,  manufacturerId,  manufacturerReasonLength,  manufacturerReason, manufacturerReasonLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_POWERING_OFF_NOTIFICATION_COMMAND_ID, \
                           "uvub", \
							  powerNotificationReason,							  manufacturerId,							  manufacturerReasonLength,							  manufacturerReason, manufacturerReasonLen);



/** @brief Query status of APS-level security enforcement for a specified cluster.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ApsLinkKeyAuthorizationQuery
* @param clusterId uint16_t

*/
#define emberAfFillCommandSlWwahClusterApsLinkKeyAuthorizationQuery( \
  clusterId) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_APS_LINK_KEY_AUTHORIZATION_QUERY_COMMAND_ID, \
                           "v", \
							  clusterId);



/** @brief Command description for SlPoweringOnNotification
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: PoweringOnNotification
* @param powerNotificationReason uint8_t

* @param manufacturerId uint16_t

* @param manufacturerReasonLength uint8_t

* @param manufacturerReason uint8_t *
* @param manufacturerReasonLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterPoweringOnNotification( \
  powerNotificationReason,  manufacturerId,  manufacturerReasonLength,  manufacturerReason, manufacturerReasonLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_POWERING_ON_NOTIFICATION_COMMAND_ID, \
                           "uvub", \
							  powerNotificationReason,							  manufacturerId,							  manufacturerReasonLength,							  manufacturerReason, manufacturerReasonLen);



/** @brief Trigger device to request a new APS link key from the Trust Center.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: RequestNewApsLinkKey
*/
#define emberAfFillCommandSlWwahClusterRequestNewApsLinkKey( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_REQUEST_NEW_APS_LINK_KEY_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SlShortAddressChange
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ShortAddressChange
* @param deviceEui64 uint8_t *

* @param deviceShort uint16_t

*/
#define emberAfFillCommandSlWwahClusterShortAddressChange( \
  deviceEui64,  deviceShort) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SHORT_ADDRESS_CHANGE_COMMAND_ID, \
                           "8v", \
							  deviceEui64,							  deviceShort);



/** @brief Enable WWAH App Event retry algorithm.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableWwahAppEventRetryAlgorithm
* @param firstBackoffTimeSeconds uint8_t

* @param backoffSeqCommonRatio uint8_t

* @param maxBackoffTimeSeconds uint32_t

* @param maxRedeliveryAttempts uint8_t

*/
#define emberAfFillCommandSlWwahClusterEnableWwahAppEventRetryAlgorithm( \
  firstBackoffTimeSeconds,  backoffSeqCommonRatio,  maxBackoffTimeSeconds,  maxRedeliveryAttempts) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID, \
                           "uuwu", \
							  firstBackoffTimeSeconds,							  backoffSeqCommonRatio,							  maxBackoffTimeSeconds,							  maxRedeliveryAttempts);



/** @brief Command description for SlAPSAckEnablementQueryResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ApsAckEnablementQueryResponse
* @param numberExemptClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterApsAckEnablementQueryResponse( \
  numberExemptClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_APS_ACK_ENABLEMENT_QUERY_RESPONSE_COMMAND_ID, \
                           "ub", \
							  numberExemptClusters,							  clusterId, clusterIdLen);



/** @brief Disable WWAH App Event retry algorithm.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableWwahAppEventRetryAlgorithm
*/
#define emberAfFillCommandSlWwahClusterDisableWwahAppEventRetryAlgorithm( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SlPowerDescriptorChange
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: PowerDescriptorChange
* @param currentPowerMode uint32_t

* @param availablePowerSources uint32_t

* @param currentPowerSource uint32_t

* @param currentPowerSourceLevel uint32_t

*/
#define emberAfFillCommandSlWwahClusterPowerDescriptorChange( \
  currentPowerMode,  availablePowerSources,  currentPowerSource,  currentPowerSourceLevel) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_POWER_DESCRIPTOR_CHANGE_COMMAND_ID, \
                           "wwww", \
							  currentPowerMode,							  availablePowerSources,							  currentPowerSource,							  currentPowerSourceLevel);



/** @brief Trigger device to request current attribute values from Time Cluster server.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: RequestTime
*/
#define emberAfFillCommandSlWwahClusterRequestTime( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_REQUEST_TIME_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SlNewDebugReportNotification
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: NewDebugReportNotification
* @param debugReportId uint8_t

* @param debugReportSize uint32_t

*/
#define emberAfFillCommandSlWwahClusterNewDebugReportNotification( \
  debugReportId,  debugReportSize) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_NEW_DEBUG_REPORT_NOTIFICATION_COMMAND_ID, \
                           "uw", \
							  debugReportId,							  debugReportSize);



/** @brief Enable WWAH rejoin algorithm.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableWwahRejoinAlgorithm
* @param fastRejoinTimeoutSeconds uint16_t

* @param durationBetweenRejoinsSeconds uint16_t

* @param fastRejoinFirstBackoffSeconds uint16_t

* @param maxBackoffTimeSeconds uint16_t

* @param maxBackoffIterations uint16_t

*/
#define emberAfFillCommandSlWwahClusterEnableWwahRejoinAlgorithm( \
  fastRejoinTimeoutSeconds,  durationBetweenRejoinsSeconds,  fastRejoinFirstBackoffSeconds,  maxBackoffTimeSeconds,  maxBackoffIterations) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID, \
                           "vvvvv", \
							  fastRejoinTimeoutSeconds,							  durationBetweenRejoinsSeconds,							  fastRejoinFirstBackoffSeconds,							  maxBackoffTimeSeconds,							  maxBackoffIterations);



/** @brief Command description for SlDebugReportQueryResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DebugReportQueryResponse
* @param debugReportId uint8_t

* @param debugReportData uint8_t *
* @param debugReportDataLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterDebugReportQueryResponse( \
  debugReportId,  debugReportData, debugReportDataLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DEBUG_REPORT_QUERY_RESPONSE_COMMAND_ID, \
                           "ub", \
							  debugReportId,							  debugReportData, debugReportDataLen);



/** @brief Disable WWAH rejoin algorithm.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableWwahRejoinAlgorithm
*/
#define emberAfFillCommandSlWwahClusterDisableWwahRejoinAlgorithm( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SlTrustCenterForClusterServerQueryResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: TrustCenterForClusterServerQueryResponse
* @param numberOfClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterTrustCenterForClusterServerQueryResponse( \
  numberOfClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_TRUST_CENTER_FOR_CLUSTER_SERVER_QUERY_RESPONSE_COMMAND_ID, \
                           "ub", \
							  numberOfClusters,							  clusterId, clusterIdLen);



/** @brief Set the enrollment method of an IAS Zone server.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: SetIasZoneEnrollmentMethod
* @param enrollmentMode uint8_t

*/
#define emberAfFillCommandSlWwahClusterSetIasZoneEnrollmentMethod( \
  enrollmentMode) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SET_IAS_ZONE_ENROLLMENT_METHOD_COMMAND_ID, \
                           "u", \
							  enrollmentMode);



/** @brief Command description for SlSurveyBeaconsResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: SurveyBeaconsResponse
* @param numberOfBeacons uint8_t

* @param beacon uint8_t *
* @param beaconLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterSurveyBeaconsResponse( \
  numberOfBeacons,  beacon, beaconLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SURVEY_BEACONS_RESPONSE_COMMAND_ID, \
                           "ub", \
							  numberOfBeacons,							  beacon, beaconLen);



/** @brief Clear the binding table.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ClearBindingTable
*/
#define emberAfFillCommandSlWwahClusterClearBindingTable( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_CLEAR_BINDING_TABLE_COMMAND_ID, \
                           "" \
);



/** @brief Enable device to periodically check connectivity with Zigbee Coordinator.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnablePeriodicRouterCheckIns
* @param checkInInterval uint16_t

*/
#define emberAfFillCommandSlWwahClusterEnablePeriodicRouterCheckIns( \
  checkInInterval) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID, \
                           "v", \
							  checkInInterval);



/** @brief Disable device from periodically checking connectivity with Zigbee Coordinator.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisablePeriodicRouterCheckIns
*/
#define emberAfFillCommandSlWwahClusterDisablePeriodicRouterCheckIns( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID, \
                           "" \
);



/** @brief Set MAC poll failure wait time.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: SetMacPollFailureWaitTime
* @param waitTime uint8_t

*/
#define emberAfFillCommandSlWwahClusterSetMacPollFailureWaitTime( \
  waitTime) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SET_MAC_POLL_FAILURE_WAIT_TIME_COMMAND_ID, \
                           "u", \
							  waitTime);



/** @brief Set pending network update parameters.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: SetPendingNetworkUpdate
* @param channel uint8_t

* @param panId uint16_t

*/
#define emberAfFillCommandSlWwahClusterSetPendingNetworkUpdate( \
  channel,  panId) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SET_PENDING_NETWORK_UPDATE_COMMAND_ID, \
                           "uv", \
							  channel,							  panId);



/** @brief Require all unicast commands to have APS ACKs enabled.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: RequireApsAcksOnUnicasts
* @param numberExemptClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterRequireApsAcksOnUnicasts( \
  numberExemptClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_REQUIRE_APS_ACKS_ON_UNICASTS_COMMAND_ID, \
                           "ub", \
							  numberExemptClusters,							  clusterId, clusterIdLen);



/** @brief Roll back changes made by Require APS ACK on Unicasts.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: RemoveApsAcksOnUnicastsRequirement
*/
#define emberAfFillCommandSlWwahClusterRemoveApsAcksOnUnicastsRequirement( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_REMOVE_APS_ACKS_ON_UNICASTS_REQUIREMENT_COMMAND_ID, \
                           "" \
);



/** @brief Query whether unicast commands are required to have APS ACKs enabled.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: ApsAckRequirementQuery
*/
#define emberAfFillCommandSlWwahClusterApsAckRequirementQuery( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_APS_ACK_REQUIREMENT_QUERY_COMMAND_ID, \
                           "" \
);



/** @brief Query for specified debug report.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DebugReportQuery
* @param debugReportId uint8_t

*/
#define emberAfFillCommandSlWwahClusterDebugReportQuery( \
  debugReportId) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DEBUG_REPORT_QUERY_COMMAND_ID, \
                           "u", \
							  debugReportId);



/** @brief Causes device to perform a scan for beacons advertising the device's network.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: SurveyBeacons
* @param standardBeacons uint8_t

*/
#define emberAfFillCommandSlWwahClusterSurveyBeacons( \
  standardBeacons) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_SURVEY_BEACONS_COMMAND_ID, \
                           "u", \
							  standardBeacons);



/** @brief Disallow OTA downgrade of all device firmware components.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableOtaDowngrades
*/
#define emberAfFillCommandSlWwahClusterDisableOtaDowngrades( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_OTA_DOWNGRADES_COMMAND_ID, \
                           "" \
);



/** @brief Causes device to ignore MGMT Leave Without Rejoin commands.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableMgmtLeaveWithoutRejoin
*/
#define emberAfFillCommandSlWwahClusterDisableMgmtLeaveWithoutRejoin( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_MGMT_LEAVE_WITHOUT_REJOIN_COMMAND_ID, \
                           "" \
);



/** @brief Causes device to ignore Touchlink Interpan messages.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableTouchlinkInterpanMessageSupport
*/
#define emberAfFillCommandSlWwahClusterDisableTouchlinkInterpanMessageSupport( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_TOUCHLINK_INTERPAN_MESSAGE_SUPPORT_COMMAND_ID, \
                           "" \
);



/** @brief Enable WWAH Parent Classification advertisements.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableWwahParentClassification
*/
#define emberAfFillCommandSlWwahClusterEnableWwahParentClassification( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID, \
                           "" \
);



/** @brief Disable WWAH Parent Classification advertisements.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableWwahParentClassification
*/
#define emberAfFillCommandSlWwahClusterDisableWwahParentClassification( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID, \
                           "" \
);



/** @brief Process only network key rotation commands sent via unicast and encrypted by Trust Center Link Key.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableTcSecurityOnNtwkKeyRotation
*/
#define emberAfFillCommandSlWwahClusterEnableTcSecurityOnNtwkKeyRotation( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_TC_SECURITY_ON_NTWK_KEY_ROTATION_COMMAND_ID, \
                           "" \
);



/** @brief Enable WWAH Bad Parent Recovery feature.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableWwahBadParentRecovery
*/
#define emberAfFillCommandSlWwahClusterEnableWwahBadParentRecovery( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID, \
                           "" \
);



/** @brief Disable WWAH Bad Parent Recovery feature.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableWwahBadParentRecovery
*/
#define emberAfFillCommandSlWwahClusterDisableWwahBadParentRecovery( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID, \
                           "" \
);



/** @brief Enable Configuration Mode.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: EnableConfigurationMode
*/
#define emberAfFillCommandSlWwahClusterEnableConfigurationMode( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_ENABLE_CONFIGURATION_MODE_COMMAND_ID, \
                           "" \
);



/** @brief Disable Configuration Mode.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: DisableConfigurationMode
*/
#define emberAfFillCommandSlWwahClusterDisableConfigurationMode( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_DISABLE_CONFIGURATION_MODE_COMMAND_ID, \
                           "" \
);



/** @brief Use only the Trust Center as cluster server for the set of clusters specified.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: UseTrustCenterForClusterServer
* @param numberOfClusters uint8_t

* @param clusterId uint8_t *
* @param clusterIdLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterUseTrustCenterForClusterServer( \
  numberOfClusters,  clusterId, clusterIdLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_USE_TRUST_CENTER_FOR_CLUSTER_SERVER_COMMAND_ID, \
                           "ub", \
							  numberOfClusters,							  clusterId, clusterIdLen);



/** @brief Causes device to send an appropriate Trust Center for Cluster Server Query Response command.
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: TrustCenterForClusterServerQuery
*/
#define emberAfFillCommandSlWwahClusterTrustCenterForClusterServerQuery( \
) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_TRUST_CENTER_FOR_CLUSTER_SERVER_QUERY_COMMAND_ID, \
                           "" \
);



/** @brief Command description for SlUseTrustCenterForClusterServerResponse
* Cluster: SL Works With All Hubs, Silicon Labs proprietary attributes and commands for Works With All Hubs functional extensions.
* Command: UseTrustCenterForClusterServerResponse
* @param status uint8_t

* @param clusterStatusLength uint8_t

* @param clusterStatus uint8_t *
* @param clusterStatusLen uint16_t 
*/
#define emberAfFillCommandSlWwahClusterUseTrustCenterForClusterServerResponse( \
  status,  clusterStatusLength,  clusterStatus, clusterStatusLen) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_SERVER_TO_CLIENT), \
                           ZCL_SL_WWAH_CLUSTER_ID, \
4631, \
                           ZCL_USE_TRUST_CENTER_FOR_CLUSTER_SERVER_RESPONSE_COMMAND_ID, \
                           "uub", \
							  status,							  clusterStatusLength,							  clusterStatus, clusterStatusLen);



/** @brief A sample manufacturer specific command within the sample manufacturer specific
        cluster.
* Cluster: Height bin, This cluster provides an example of how the Application 
      Framework can be extended to include manufacturer specific clusters.
* Command: Transfer height
* @param argOne uint8_t

*/
#define emberAfFillCommandHeightBinTransfer height( \
  argOne) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_HEIGHT_BIN_ID, \
4113, \
                           ZCL_TRANSFER_HEIGHT_COMMAND_ID, \
                           "u", \
							  argOne);



/** @brief A sample manufacturer specific command within the sample manufacturer specific
        cluster.
* Cluster: Weight bin, This cluster provides an example of how the Application 
      Framework can be extended to include manufacturer specific clusters.
* Command: Transfer weight
* @param argOne uint8_t

*/
#define emberAfFillCommandWeightBinTransfer weight( \
  argOne) \
emberAfFillExternalManufacturerSpecificBuffer((ZCL_CLUSTER_SPECIFIC_COMMAND | ZCL_MANUFACTURER_SPECIFIC_MASK \
                           | ZCL_FRAME_CONTROL_CLIENT_TO_SERVER), \
                           ZCL_WEIGHT_BIN_ID, \
4176, \
                           ZCL_TRANSFER_WEIGHT_COMMAND_ID, \
                           "u", \
							  argOne);


// End Cluster Specific Commands

/** @} END addtogroup */
#endif // SILABS_CLUSTER_CLIENT_API
