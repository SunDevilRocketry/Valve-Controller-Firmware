/*******************************************************************************
*                                                                              *
* FILE:                                                                        *
* 		stm32h7xx_it.c                                                         *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Contains interrupt service routines from the microcontroller interrupt *
*       vector table                                                           *
*                                                                              *
*******************************************************************************/

/*------------------------------------------------------------------------------
 Standard Includes                                                              
------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 Project Includes                                                               
------------------------------------------------------------------------------*/
#include "main.h"
#include "stm32h7xx_it.h"


/*------------------------------------------------------------------------------
 Cortex Processor Interruption and Exception Handlers          
------------------------------------------------------------------------------*/


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		NMI_Handler                                                            *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Non-maskable interrupt                                                 *
*                                                                              *
*******************************************************************************/
void NMI_Handler
    (
    void
    )
{
while (1)
    {
    }
} /* NMI_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		HardFault_Handler                                                      *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Hard fault exception                                                   *
*                                                                              *
*******************************************************************************/
void HardFault_Handler
    (
    void
    )
{
while (1)
    {
    }
} /* HardFault_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		MemManage_Handler                                                      *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Memory management fault                                                *
*                                                                              *
*******************************************************************************/
void MemManage_Handler
    (
    void
    )
{
while (1)
    {
    }
} /* MemManage_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		BusFault_Handler                                                       *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Pre-fetch fault, memory access fault                                   *
*                                                                              *
*******************************************************************************/
void BusFault_Handler
    (
    void
    )
{
while (1)
    {
    }
} /* BusFault_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		UsageFault_Handler                                                     *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Handles undefined instructions or illegal states                       *
*                                                                              *
*******************************************************************************/
void UsageFault_Handler
    (
    void
    )
{
while (1)
    {
    }
} /* UsageFault_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		SVC_Handler                                                            *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Handles system service call via SWI instruction                        *
*                                                                              *
*******************************************************************************/
void SVC_Handler
    (
    void
    )
{
} /* SVC_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		DebugMon_Handler                                                       *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Handles the debug monitor                                              *
*                                                                              *
*******************************************************************************/
void DebugMon_Handler
    (
    void
    )
{
} /* DebugMon_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		PendSV_Handler                                                         *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Handles the Pendable request for system service                        *
*                                                                              *
*******************************************************************************/
void PendSV_Handler
    (
    void
    )
{
} /* PendSV_Handler */


/*******************************************************************************
*                                                                              *
* PROCEDURE:                                                                   *
* 		SysTick_Handler                                                        *
*                                                                              *
* DESCRIPTION:                                                                 *
* 		Handles the system tick timer                                          *
*                                                                              *
*******************************************************************************/
void SysTick_Handler
    (
    void
    )
{
HAL_IncTick();
} /* SysTick_Handler */


/*------------------------------------------------------------------------------
 STM32H7xx Peripheral Interrupt Handlers                                    
 Add here the Interrupt Handlers for the used peripherals.                  
 For the available peripheral interrupt handler names,                      
 please refer to the startup file (startup_stm32h7xx.s).                    
------------------------------------------------------------------------------*/


/*******************************************************************************
* END OF FILE                                                                  *
*******************************************************************************/