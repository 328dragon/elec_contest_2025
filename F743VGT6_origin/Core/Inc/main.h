/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define TFT_RS_Pin GPIO_PIN_12
#define TFT_RS_GPIO_Port GPIOB
#define TFT_RST_Pin GPIO_PIN_14
#define TFT_RST_GPIO_Port GPIOB
#define TFT_CS_Pin GPIO_PIN_10
#define TFT_CS_GPIO_Port GPIOD
#define LED_G_Pin GPIO_PIN_14
#define LED_G_GPIO_Port GPIOD
#define LED_B_Pin GPIO_PIN_15
#define LED_B_GPIO_Port GPIOD
#define INT1_GRYO_Pin GPIO_PIN_2
#define INT1_GRYO_GPIO_Port GPIOD
#define INT1_ACCEL_Pin GPIO_PIN_3
#define INT1_ACCEL_GPIO_Port GPIOD
#define CS1_GYRO_Pin GPIO_PIN_4
#define CS1_GYRO_GPIO_Port GPIOD
#define CS1_ACCEL_Pin GPIO_PIN_7
#define CS1_ACCEL_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
