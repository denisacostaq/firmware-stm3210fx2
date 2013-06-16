/*!
  \file main.c You need edit this file and create some others for your
  personal project.
  \author Alvaro Denis Acosta Quesada denisacostaq\@gmail.com
  \date Sat Jun 15 09:41:59 CDT 2013
  
  \brief If you are a professional emploee, is good edit this comments ;)

  \attention <h1><center>&copy; COPYRIGHT GNU GENERAL PUBLIC LICENSE Version 2, June 1991</center></h1>
*/

#include "stm32f10x.h"
#include "stm32_eval.h"

#ifdef USE_STM32100B_EVAL
 #include "stm32100b_eval_lcd.h"
#elif defined USE_STM3210B_EVAL
 #include "stm3210b_eval_lcd.h"
#elif defined USE_STM3210E_EVAL
 #include "stm3210e_eval_lcd.h" 
#elif defined USE_STM3210C_EVAL
 #include "stm3210c_eval_lcd.h"
#elif defined USE_STM32100E_EVAL
 #include "stm32100e_eval_lcd.h"
#endif

#define MESSAGE   " Device running" 
#ifdef USE_STM32100B_EVAL
  #define MESSAGE1   "STM32 MD Value Line " 
  #define MESSAGE2   "  STM32100B-EVAL    " 
#elif defined (USE_STM3210B_EVAL)
  #define MESSAGE1   "STM32 Medium Density"
  #define MESSAGE2   "   STM3210B-EVAL    " 
#elif defined (STM32F10X_XL) && defined (USE_STM3210E_EVAL)
  #define MESSAGE1   "  STM32 XL Density  "
  #define MESSAGE2   "   STM3210E-EVAL    "
#elif defined (USE_STM3210E_EVAL)
  #define MESSAGE1   " STM32 High Density " 
  #define MESSAGE2   "   STM3210E-EVAL    " 
#elif defined (USE_STM3210C_EVAL)
  #define MESSAGE1   " STM32 Connectivity " 
  #define MESSAGE2   " on STM3210C-EVAL   "
#elif defined (USE_STM32100E_EVAL)
  #define MESSAGE1   "STM32 HD Value Line " 
  #define MESSAGE2   "  STM32100E-EVAL    "   
#endif

/*! At this stage the microcontroller clock setting is already configured
   \brief This is done through SystemInit() function which is called
   \brief from startup file (startup_stm32f10x_xx.s) before to branch
   \brief to application main. To reconfigure the default setting of
   \brief SystemInit() function, refer to system_stm32f10x.c file.
   \brief The current implementation only initialize the leds an turn on
   \brief its.
   \retval NONE
*/
int main(void)
{
    /******************************************************************/
    /*              Initialize LEDs STM3210X-EVAL on board            */
    /******************************************************************/
    STM_EVAL_LEDInit(LED1);
    STM_EVAL_LEDInit(LED2);
    STM_EVAL_LEDInit(LED3);
    STM_EVAL_LEDInit(LED4);

    /******************************************************************/
    /*              Turn on leds available on STM3210X-EVAL           */
    /******************************************************************/
    STM_EVAL_LEDOn(LED1);
    STM_EVAL_LEDOn(LED2);
    STM_EVAL_LEDOn(LED3);
    STM_EVAL_LEDOn(LED4);


    /******************************************************************/
    /*                 Add your application code here                 */
    /******************************************************************/

    /* Infinite loop */
    while (1);
}
