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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "oled.h"

extern float fire_ban;
extern float smoke_ban;
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
#define OLED_SCL_Pin GPIO_PIN_0
#define OLED_SCL_GPIO_Port GPIOA
#define OLED_SDA_Pin GPIO_PIN_1
#define OLED_SDA_GPIO_Port GPIOA
#define OLED_RES_Pin GPIO_PIN_4
#define OLED_RES_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_5
#define OLED_DC_GPIO_Port GPIOA
#define OLED_CS_Pin GPIO_PIN_6
#define OLED_CS_GPIO_Port GPIOA
#define SW1901_Pin GPIO_PIN_1
#define SW1901_GPIO_Port GPIOB
#define SW1901_EXTI_IRQn EXTI1_IRQn
#define KEY3_Pin GPIO_PIN_12
#define KEY3_GPIO_Port GPIOB
#define KEY3_EXTI_IRQn EXTI15_10_IRQn
#define KEY2_Pin GPIO_PIN_13
#define KEY2_GPIO_Port GPIOB
#define KEY2_EXTI_IRQn EXTI15_10_IRQn
#define KEY1_Pin GPIO_PIN_14
#define KEY1_GPIO_Port GPIOB
#define KEY1_EXTI_IRQn EXTI15_10_IRQn
#define BEEP_Pin GPIO_PIN_8
#define BEEP_GPIO_Port GPIOB
#define HC_SR505_Pin GPIO_PIN_9
#define HC_SR505_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
