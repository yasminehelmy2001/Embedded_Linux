#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "PORT_Private.h"

/*
 * Choose from 2 options:
 * PRE_COMPILE : For pre compile driver
 * POST_COMPILE: For post compile driver
 */
#define PORT_TYPE	PRE_COMPILE

/*
 * Choose from 4 options:
 * ONE_PORT
 * TWO_PORTS
 * THREE_PORTS
 * FOUR_PORTS
 */
#define PORT_NUM	FOUR_PORTS


/****************************PRE_COMPILE**************************/
#if PORT_TYPE == PRE_COMPILE

/*
	* Choose from 4 options for each pin:
	* INPUT_PU : Input Pull Up
	* INPUT_HI : Input Pull Down
	* OUTPUT HIGH
	* OUTPUT LOW
	*/


#define PORT_PIN0	OUTPUT_LOW		 /*Pin 0*/
#define PORT_PIN1	OUTPUT_LOW		 /*Pin 1*/
#define PORT_PIN2	OUTPUT_HIGH		 /*Pin 2*/
#define PORT_PIN3	OUTPUT_HIGH		 /*Pin 3*/
#define PORT_PIN4	OUTPUT_HIGH		 /*Pin 4*/
#define PORT_PIN5	OUTPUT_HIGH		 /*Pin 5*/
#define PORT_PIN6	OUTPUT_HIGH		 /*Pin 6*/
#define PORT_PIN7	OUTPUT_HIGH		 /*Pin 7*/

#define PORT_PIN8	OUTPUT_HIGH		/*Pin 8*/
#define PORT_PIN9	INPUT_PU		/*Pin 9*/
#define PORT_PIN10	INPUT_PU		/*Pin 10*/
#define PORT_PIN11	INPUT_PU		/*Pin 11*/
#define PORT_PIN12	INPUT_PU		/*Pin 12*/
#define PORT_PIN13	INPUT_PU		/*Pin 13*/
#define PORT_PIN14	INPUT_PU		/*Pin 14*/
#define PORT_PIN15	INPUT_PU		/*Pin 15*/

#define PORT_PIN16	OUTPUT_LOW		/*Pin 16*/
#define PORT_PIN17	OUTPUT_HIGH		/*Pin 17*/
#define PORT_PIN18	OUTPUT_HIGH		/*Pin 18*/
#define PORT_PIN19	OUTPUT_HIGH		/*Pin 19*/
#define PORT_PIN20	OUTPUT_HIGH		/*Pin 20*/
#define PORT_PIN21	OUTPUT_HIGH		/*Pin 21*/
#define PORT_PIN22	OUTPUT_HIGH		/*Pin 22*/
#define PORT_PIN23	OUTPUT_HIGH		/*Pin 23*/

#define PORT_PIN24	INPUT_HI		/*Pin 24*/
#define PORT_PIN25	INPUT_HI		/*Pin 25*/
#define PORT_PIN26	INPUT_HI		/*Pin 26*/
#define PORT_PIN27	INPUT_HI		/*Pin 27*/
#define PORT_PIN28	OUTPUT_HIGH		/*Pin 28*/
#define PORT_PIN29	OUTPUT_HIGH		/*Pin 29*/
#define PORT_PIN30	OUTPUT_HIGH		/*Pin 30*/
#define PORT_PIN31	OUTPUT_HIGH		/*Pin 31*/

/*************************Post-Compile********************/
#elif PORT_TYPE == POST_COMPILE

/* Choose
 * 16 for 2 PORTS
 * 24 for 3 PORTS
 * 32 for 4 PORTS
 */
#define NO_OF_PINS 32

 /**
 *@brief : Pin Configuration
 */
typedef enum
{
	/**
	*@brief : Set Configuration to be Input with Internal Pull Up                                              
	*/
	PORT_enumInputInternalPU,
	/**
	*@brief : Set Configuration to be Input with External Pull Down                                                 
	*/
	PORT_enumInputExternalPD,
	/**
	*@brief : Set Configuration to be Output with Logic HIGH                                                  
	*/
	PORT_enumOutputHigh,
	/**
	*@brief : Set Configuration to be Output with Logic LOW                                              
	*/
	PORT_enumOutputLow
}PORT_enumPinOpt_t;


#else
	#error "Invalid Compilation Type"
	
#endif

#endif

