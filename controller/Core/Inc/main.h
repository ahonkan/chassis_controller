/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f3xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PUSH_BUTTON_Pin GPIO_PIN_13
#define PUSH_BUTTON_GPIO_Port GPIOC
#define CONTROL_PWM_TIMEBASE_Pin GPIO_PIN_0
#define CONTROL_PWM_TIMEBASE_GPIO_Port GPIOC
#define CONTROL_STEERING_Pin GPIO_PIN_0
#define CONTROL_STEERING_GPIO_Port GPIOA
#define CONTROL_DRIVE_Pin GPIO_PIN_1
#define CONTROL_DRIVE_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define ENCODER_Pin GPIO_PIN_8
#define ENCODER_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define GPIO_RESET(GPIOx, GPIO_Pin) 	GPIOx->BRR = (uint32_t)GPIO_Pin
#define GPIO_SET(GPIOx, GPIO_Pin) 	GPIOx->BSRR = (uint32_t)GPIO_Pin

#define CONSOLE huart2

#define LED_SET		GPIO_SET(LED_GPIO_Port, LED_Pin)
#define LED_RESET	GPIO_RESET(LED_GPIO_Port, LED_Pin)
#define PUSH_BUTTON_STATE	HAL_GPIO_ReadPin(PUSH_BUTTON_GPIO_Port, PUSH_BUTTON_Pin)


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
