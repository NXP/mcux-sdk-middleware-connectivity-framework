/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/************************************************************************************
 * Include
 ************************************************************************************/
#include "board_comp.h"

/************************************************************************************
*************************************************************************************
* Private type definitions and macros
*************************************************************************************
************************************************************************************/

/************************************************************************************
*************************************************************************************
* Private memory declarations
*************************************************************************************
************************************************************************************/

/************************************************************************************
*************************************************************************************
* Public functions
*************************************************************************************
************************************************************************************/

/*Initialize Button*/
button_status_t BOARD_InitButton(button_handle_t ButtonHandle)
{
    /* Initialize Button component */
    button_config_t buttonConfig;
    button_status_t bStatus;

    buttonConfig.gpio.port            = BOARD_BUTTON_GPIO_PORT;
    buttonConfig.gpio.pin             = BOARD_BUTTON_GPIO_PIN;
    buttonConfig.gpio.pinStateDefault = BOARD_BUTTON_GPIO_PIN_STATE_DEFAULT;
    buttonConfig.gpio.direction       = BOARD_BUTTON_GPIO_DIRECTION;

    bStatus = BUTTON_Init((button_handle_t)ButtonHandle, &buttonConfig);

    return bStatus;
}