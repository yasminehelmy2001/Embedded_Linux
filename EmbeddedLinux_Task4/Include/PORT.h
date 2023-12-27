#ifndef PORT_H_
#define PORT_H_

#include "PORT_cfg.h"

/**
 *@brief : Initializes all Pins of all Ports                                                                    
 */
void PORT_voidInit(void);

 
 /*********************POST-COMPILE**********************/
 #if PORT_TYPE == POST_COMPILE
   
 /**
 *@brief : Port Enums for Four Ports                                  
 */
 
 #if PORT_NUM == FOUR_PORTS
 typedef enum
 {
	 PORT_enumPortA,
	 PORT_enumPortB,
	 PORT_enumPortC,
	 PORT_enumPortD
	 }PORT_enumPorts_t;
	
 /**
 *@brief : Port Enums for Three Ports                                  
 */
 
#elif PORT_NUM ==THREE_PORTS
  typedef enum
  {
	  PORT_enumPortA,
	  PORT_enumPortB,
	  PORT_enumPortC,
  }PORT_enumPorts_t;
  
  
/**
 *@brief : Port Enums for Two Ports                                  
 */
 
  #elif PORT_NUM ==TWO_PORTS
  typedef enum
  {
	  PORT_enumPortA,
	  PORT_enumPortB,
  }PORT_enumPorts_t;
  
/**
 *@brief : Port Enums for One Port                                  
 */
   
	#elif PORT_NUM ==ONE_PORT
	typedef enum
	{
		PORT_enumPortA
	}PORT_enumPorts_t;
  
  #else
	#error "Invalid PORT_NUM"
	
  #endif
  
  #endif
 
 #endif
 
 
