/**
  ******************************************************************************
  * @file    mx25um51245g_conf.h
  * @author  MCD Application Team
  * @brief   MX25UM51245G OctoSPI memory configuration template file.
  *          This file should be copied to the application folder and renamed
  *          to mx25um51245g_conf.h
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef MX25UM51245G_CONF_H
#define MX25UM51245G_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32n6xx_hal.h"

/** @addtogroup BSP
  * @{
  */
#define CONF_OSPI_ODS                MX25UM51245G_CR_ODS_24   /* MX25UM51245G Output Driver Strength */

#define DUMMY_CYCLES_READ            8U
#define DUMMY_CYCLES_READ_OCTAL      6U
#define DUMMY_CYCLES_READ_OCTAL_DTR  6U
#define DUMMY_CYCLES_REG_OCTAL       4U
#define DUMMY_CYCLES_REG_OCTAL_DTR   5U

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* MX25UM51245G_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
