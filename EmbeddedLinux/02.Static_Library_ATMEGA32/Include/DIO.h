/*
 * DIO.h
 *
 * Created: 11/25/2023 2:45:49 PM
 *  Author: Yasmin Amr
 */ 

	
#ifndef DIO_H_
#define DIO_H_
 
#include "std_types.h"
#include "std_math.h"
#include "PORT.h"

/**
 *@brief : Error Status                                                 
 */
 typedef enum
 {
	 /**
	 *@brief : Function Did Not Perform Correctly
	 */
	 DIO_enumNok,
	 /**
	 *@brief : Function Performed Correctly
	 */
	 DIO_enumOk,
	 /**
	 *@brief: NULL pointer is passed
	 */
	 DIO_enumNullPointer,
	 /**
	 *@brief: Port passed does not exist
	 */
	 DIO_enumWrongPort,
	  /**
	 *@brief: Pin passed does not exist
	 */
	 DIO_enumWrongPin,
	  /**
	 *@brief: Configuration passed does not exist
	 */
	 DIO_enumWrongConfig,
	  /**
	 *@brief: Logic State does not exist
	 */
	 DIO_enumWrongLogicState
 }DIO_enumErrorStatus_t;
 
 
/**
 *@brief : Pin Configuration                                         
 */
 typedef enum
 {
	  /**
	 *@brief: Pin Configured to be Output
	 */
	 DIO_enumOutput,
	  /**
	 *@brief: Pin Configured to be Input with Internal Pull Up
	 */
	 DIO_enumInputInternalPU,
	 /**
	 *@brief: Pin Configured to be Input with External Pull Down
	 */
	 DIO_enumInputExternalPD
 }DIO_enumConfig_t;
 
 
/**
 *@brief : Port Options                                        
 */
 #if PORT_NUM==FOUR_PORTS   /*If Four Ports*/
	 typedef enum
	 {
		 DIO_enumPortA,
		 DIO_enumPortB,
		 DIO_enumPortC,
		 DIO_enumPortD
	 }DIO_enumPorts_t;
	 
#elif PORT_NUM==THREE_PORTS  /*If Three Ports*/
	typedef enum
	{
		DIO_enumPortA,
		DIO_enumPortB,
		DIO_enumPortC
	}DIO_enumPorts_t;
	
#elif PORT_NUM==TWO_PORTS  /*If Two Ports*/
	typedef enum
	{
		DIO_enumPortA,
		DIO_enumPortB
	}DIO_enumPorts_t;

#elif PORT_NUM==ONE_PORT  /*If One Port*/
	typedef enum
	{
		DIO_enumPortA
	}DIO_enumPorts_t;
#endif
 
 
/**
 *@brief : Pin Options                                     
 */
 typedef enum
 {
	 DIO_enumPin0,
	 DIO_enumPin1,
	 DIO_enumPin2,
	 DIO_enumPin3,
	 DIO_enumPin4,
	 DIO_enumPin5,
	 DIO_enumPin6,
	 DIO_enumPin7
 }DIO_enumPins_t;


/**
 *@brief : Pin Logic State                                   
 */ 
 typedef enum
 {
	 /**
	 *@brief: Pin Configured to Output Logic LOW
	 */
	 DIO_enumLogicLow,
	 /**
	 *@brief: Pin Configured to Output Logic HIGH
	 */
	 DIO_enumLogicHigh
 }DIO_enumLogicState_t;
 
 
/**
 *@brief : Pin Configuration                               
 */ 
 typedef struct
 {
	 /**
	 *@brief: Port selected to be configured.
	 */
	 DIO_enumPorts_t Port;
	  /**
	 *@brief: Pin selected to be configured.
	 */
	 DIO_enumPins_t Pin;
	 /**
	 *@brief: Pin configuration (Input PullUp, Input PullDown, Output)
	 */
	 DIO_enumConfig_t PinConfig;
	  /**
	 *@brief: Pin configuration (Logic LOW/HIGH)
	 */
	 DIO_enumLogicState_t LogicState;
 }DIO_strDioCfg;


 /**
 *@brief : Function to Set the Whole Port either Logic HIGH or Logic LOW.
 *@param : Port Number, Logic State (HIGH/LOW).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum, DIO_enumLogicState_t Copy_enumLogicState);
 

/**
 *@brief : Function to Set One Pin from a Port either Logic HIGH or Logic LOW.
 *@param : Port Number, Pin Number, Logic State (HIGH/LOW).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t Copy_enumLogicState);
 
 
 /**
 *@brief : Function to Read a Pin State from a Port to be either Logic HIGH or Logic LOW.
 *@param : Port Number, Pin Number, Pointer to a variable that takes a Logic State Enum (HIGH/LOW).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t* Add_PenumPinValue);
 
 /**
 *@brief : Function that takes a struct of Pin configurations and sets them.
 *@param : Struct that contains Port Number, Pin Number, and Configuration Type (Input PullUp, Input PullDown, OutputHigh, OutputLow).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumSetConfig(DIO_strDioCfg * Add_strDioCfg, u8 Loc_u8StructSize);

 /**
 *@brief : Function that Sets DIO Port
 *@param : Port Number and Configuration Type (Input PullUp, Input PullDown, OutputHigh, OutputLow).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum, DIO_enumConfig_t Copy_enumConfig );
 
  /**
 *@brief : Function that Sets a DIO Pin
 *@param : Port Number, Pin Number, and Configuration Type (Input PullUp, Input PullDown, OutputHigh, OutputLow).
 *@return: Error State.                                                                      
 */
 DIO_enumErrorStatus_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumConfig_t Copy_enumConfig);
 
#endif /* DIO_H_ */
