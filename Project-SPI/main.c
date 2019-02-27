

/**
 * main.c
 */
/**************************************************************************************************************************
 * Includes :
**************************************************************************************************************************/

#include "tm4c123gh6pm.h"
#include "SPI.h"
#include <stdint.h>

/**************************************************************************************************************************
 * Global varibels :
**************************************************************************************************************************/

/**************************************************************************************************************************
 * Definitions :
**************************************************************************************************************************/

/**************************************************************************************************************************
 * Function of program :
 *
 *
**************************************************************************************************************************/

void delay();
void led_init();

int main(void)
{

    led_init();

    SPI_init();
    while (1)

    {
        delay();
        GPIO_PORTF_DATA_R = 2;
        send_byte(0xCC);

        delay();
        GPIO_PORTF_DATA_R = 4;
    }
    return 0;
}

void delay()
{
    int i;
    for(i = 0; i<0xFFFF; i++)
    {
        ;
    }
}

void led_init()
{
    int dummy;
    //Enable the GPIO port that is used for the on-board LEDs and swithces.
    SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOF;

    // Do a dummy read to insert a few cycles after enabling the peripheral.

    dummy = SYSCTL_RCGC2_R;
    // Set the direction as out - put (PF1-PF3)

    GPIO_PORTF_DIR_R = 0x0E;

    //Enable the GPIO pins for digital function (PF1 - PF4)
    GPIO_PORTF_DEN_R = 0x1E;

    //Enable internal pull-up (PF4)
    GPIO_PORTF_PUR_R = 0x10;
}
