/*****************************************************************************
* University of Southern Denmark
* Embedded Programming (EMP)
*
* MODULENAME.: emp.h
*
* PROJECT....: EMP
*
* DESCRIPTION: Test.
*
* Change Log:
******************************************************************************
* Date    Id    Change
* YYMMDD
* --------------------
* 050128  KA    Module created.
*
*****************************************************************************/

#ifndef SPI_H_
#define SPI_H_
/***************************** Include files *******************************/
#include "tm4c123gh6pm.h"

/*****************************    Defines    *******************************/

/********************** External declaration of Variables ******************/

/*****************************   Constants   *******************************/

/*************************  Function interfaces ****************************/

extern void SPI_init(void);
/*****************************************************************************
*   Input    : -
*   Output   : -
*   Function : SPI initation
******************************************************************************/

extern void data_transmit(int data);
/*****************************************************************************
*   Input    :Byte that needs to be send
*   Output   :
*   Function :Sends the data given and waits until the transmission is complete.
******************************************************************************/

extern void send_byte(int, int);
/*****************************************************************************
*   Input    : -
*   Output   : -
*   Function : SPI initation
******************************************************************************/

extern int receive_byte(
        );
/*****************************************************************************
*   Input    : -
*   Output   : -
*   Function : SPI initation
******************************************************************************/


/****************************** End Of Module *******************************/

#endif /* SPI_H_ */
