/**
 * Copyright 2016 Comcast Cable Communications Management, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef __WDMP_C_INTERNAL_H__
#define __WDMP_C_INTERNAL_H__

#include <stdbool.h>
#include <stdint.h>

#include "wdmp-c.h"

typedef enum
{
	WDMP_STATUS_SUCCESS = 200,
	WDMP_ADDROW_STATUS_SUCCESS = 201,
	WDMP_STATUS_GENERAL_FALURE =  520,
	WDMP_STATUS_CID_TEST_FAILED = 550,
	WDMP_STATUS_CMC_TEST_FAILED = 551,
	WDMP_STATUS_ATOMIC_GET_SET_FAILED = 552,
	WDMP_STATUS_WIFI_BUSY = 530
} WDMP_RESPONSE_STATUS_CODE;

/*----------------------------------------------------------------------------*/
/*                                   Macros                                   */
/*----------------------------------------------------------------------------*/

#define MAX_PARAMETER_LEN			128

/*----------------------------------------------------------------------------*/
/*                               Data Structures                              */
/*----------------------------------------------------------------------------*/
/* none */

/*----------------------------------------------------------------------------*/
/*                            File Scoped Variables                           */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*                             Function Prototypes                            */
/*----------------------------------------------------------------------------*/

void wdmp_form_get_response(res_struct *resObj, cJSON *response);
void wdmp_form_get_attr_response(res_struct *resObj, cJSON *response);
void wdmp_form_set_response(res_struct *resObj, cJSON *response);
void wdmp_form_test_and_set_response(res_struct *resObj, cJSON *response);
void getStatusCode(WDMP_RESPONSE_STATUS_CODE *statusCode, int paramCount, WDMP_STATUS * ret);
void mapWdmpStatusToStatusMessage(WDMP_STATUS status, char *result);

/*----------------------------------------------------------------------------*/
/*                             External Functions                             */
/*----------------------------------------------------------------------------*/
/* none */

/*----------------------------------------------------------------------------*/
/*                             Internal functions                             */
/*----------------------------------------------------------------------------*/
/* none */

#endif
