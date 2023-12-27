#include "DIO.h"

//#include <util/delay.h>

 /**
 *@brief : Function to Set the Whole Port either Logic HIGH or Logic LOW.
 *@param : Port Number, Logic State (HIGH/LOW).
 *@return: Error State.                                                                      
 */
	DIO_enumErrorStatus_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum, DIO_enumLogicState_t Copy_enumLogicState)
	{
		/*Creating an Error Status Variable*/
		DIO_enumErrorStatus_t RET_enumErrorStatus=DIO_enumNok;
		
		/*Check if Port Number Parameter is Valid*/
		if(Copy_enumPortNum>PORT_NUM)   
		{
				RET_enumErrorStatus=DIO_enumWrongPort;
		}
		/*Check if Logic State Parameter is Valid*/
		else if(Copy_enumLogicState>Copy_enumLogicState)
		{
			RET_enumErrorStatus=DIO_enumWrongLogicState;
		}
		/*All parameters are valid, apply configuration*/
		else
		{
			/*Change return error status to OK*/
			RET_enumErrorStatus=DIO_enumOk;
				
				/*Switch based on Provided Logic State*/
				switch(Copy_enumLogicState)
				{
					/*For Logic High State*/
					case DIO_enumLogicHigh:
					/*Switch based on Provided Port Number*/
					switch(Copy_enumPortNum)
					{
						/*If Number of Ports are 4:*/
						#if PORT_NUM== FOUR_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as HIGH*/
							PORTA=0xFF;
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as HIGH*/
							PORTB=0xFF;
							break;
							case DIO_enumPortC:
							/*Set Port C Logic as HIGH*/
							PORTC=0xFF;
							break;
							case DIO_enumPortD:
							/*Set Port D Logic as HIGH*/
							PORTD=0xFF;
							break;
						/*If Number of Ports are 3:*/
						#elif PORT_NUM==THREE_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as HIGH*/
							PORTA=0xFF;
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as HIGH*/
							PORTB=0xFF;
							break;
							case DIO_enumPortC:
							/*Set Port C Logic as HIGH*/
							PORTC=0xFF;
							break;
						/*If Number of Ports are 2:*/
						#elif PORT_NUM==TWO_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as HIGH*/
							PORTA=0xFF;
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as HIGH*/
							PORTB=0xFF;
							break;
						#elif PORT_NUM==ONE_PORT
						/*If Number of Ports are 1:*/
							case DIO_enumPortA:
							/*Set Port A Logic as HIGH*/
							PORTA=0xFF;
							break;
						#endif
					}
					break;
					
					/*For Logic Low State*/
					case DIO_enumLogicLow:
					/*Switch based on Port Number*/
					switch(Copy_enumPortNum)
					{
						/*If Number of Ports are 4:*/
						#if PORT_NUM==FOUR_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as LOW*/
							PORTA=0x00;	
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as LOW*/
							PORTB=0x00;
							break;
							case DIO_enumPortC:
							/*Set Port C Logic as LOW*/
							PORTC=0x00;
							break;
							case DIO_enumPortD:
							/*Set Port D Logic as LOW*/
							PORTD=0x00;
							break;
						/*If Number of Ports are 3:*/
						#elif PORT_NUM==THREE_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as LOW*/
							PORTA=0x00;
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as LOW*/
							PORTB=0x00;
							break;
							case DIO_enumPortC:
							/*Set Port C Logic as LOW*/
							PORTC=0x00;
							break;
						/*If Number of Ports are 2:*/
						#elif PORT_NUM==TWO_PORTS
							case DIO_enumPortA:
							/*Set Port A Logic as LOW*/
							PORTA=0x00;
							break;
							case DIO_enumPortB:
							/*Set Port B Logic as LOW*/
							PORTB=0x00;
							break;
						/*If Number of Ports are 1:*/
						#elif PORT_NUM==ONE_PORT
							case DIO_enumPortA:
							/*Set Port A Logic as LOW*/
							PORTA=0x00;
							break;
						#endif
					}
					break;
					
				}
		}
		return RET_enumErrorStatus;	
	}
	
	
/**
 *@brief : Function to Set One Pin from a Port either Logic HIGH or Logic LOW.
 *@param : Port Number, Pin Number, Logic State (HIGH/LOW).
 *@return: Error State.                                                                      
 */
	DIO_enumErrorStatus_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t Copy_enumLogicState)
	{
		/*Creating an Error Status Variable*/
		DIO_enumErrorStatus_t RET_enumErrorStatus;
		
		/*Check if Port Number Parameter is Valid*/
		if(Copy_enumPortNum>PORT_NUM)
		{
			RET_enumErrorStatus= DIO_enumWrongPort;
		}
		/*Check if Pin Number Parameter is Valid*/
		else if(Copy_enumPinNum>DIO_enumPin7)
		{
			RET_enumErrorStatus= DIO_enumWrongPin;
		}
		/*Check if Logic State Parameter is Valid*/
		else if(Copy_enumLogicState>DIO_enumLogicHigh)
		{
			RET_enumErrorStatus=DIO_enumWrongLogicState;
		}
		/*All Parameters are Valid, Continue with Configuration*/
		else
		{
			/*Update Error Status to be OK*/
			RET_enumErrorStatus=DIO_enumOk;
			/*Switch on Logic State*/
			switch(Copy_enumLogicState)
			{
				/*In case of Logic HIGH*/
				case DIO_enumLogicHigh:
				/*Switch on Port Number*/
				switch(Copy_enumPortNum)
				{
					/*If Number of Ports are 4*/
					#if PORT_NUM==FOUR_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as HIGH*/
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as HIGH*/
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
						case DIO_enumPortC:
						/*Set Logic of PortC-Pinx as HIGH*/
						SET_BIT(PORTC,Copy_enumPinNum);
						break;
						case DIO_enumPortD:
						/*Set Logic of PortD-Pinx as HIGH*/
						SET_BIT(PORTD,Copy_enumPinNum);
						break;
					/*If Number of Ports are 3*/
					#elif PORT_NUM==THREE_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as HIGH*/
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as HIGH*/
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
						case DIO_enumPortC:
						/*Set Logic of PortC-Pinx as HIGH*/
						SET_BIT(PORTC,Copy_enumPinNum);
						break;
					/*If Number of Ports are 2*/
					#elif PORT_NUM==TWO_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as HIGH*/
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as HIGH*/
						SET_BIT(PORTB,Copy_enumPinNum);
						break;
					/*If Number of Ports are 1*/
					#elif PORT_NUM==ONE_PORT
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as HIGH*/
						SET_BIT(PORTA,Copy_enumPinNum);
						break;
					#endif
				}
				break;
				
				/*In case of Logic LOW*/
				case DIO_enumLogicLow:
				/*Switch on Port Number*/
				switch(Copy_enumPortNum)
				{
					/*If Number of Ports are 4*/
					#if PORT_NUM==FOUR_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as LOW*/
						CLR_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as LOW*/
						CLR_BIT(PORTB,Copy_enumPinNum);
						break;
						case DIO_enumPortC:
						/*Set Logic of PortC-Pinx as LOW*/
						CLR_BIT(PORTC,Copy_enumPinNum);
						break;
						case DIO_enumPortD:
						/*Set Logic of PortD-Pinx as LOW*/
						CLR_BIT(PORTD,Copy_enumPinNum);
						break;
					/*If Number of Ports are 3*/
					#elif PORT_NUM==THREE_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as LOW*/
						CLR_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as LOW*/
						CLR_BIT(PORTB,Copy_enumPinNum);
						break;
						case DIO_enumPortC:
						/*Set Logic of PortC-Pinx as LOW*/
						CLR_BIT(PORTC,Copy_enumPinNum);
						break;
					/*If Number of Ports are 2*/
					#elif PORT_NUM==TWO_PORTS
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as LOW*/
						CLR_BIT(PORTA,Copy_enumPinNum);
						break;
						case DIO_enumPortB:
						/*Set Logic of PortB-Pinx as LOW*/
						CLR_BIT(PORTB,Copy_enumPinNum);
						break;
					/*If Number of Ports are 1*/
					#elif PORT_NUM==ONE_PORT
						case DIO_enumPortA:
						/*Set Logic of PortA-Pinx as LOW*/
						CLR_BIT(PORTA,Copy_enumPinNum);
						break;
					#endif
				}
				break;
			}
		}
			return RET_enumErrorStatus;

	}

 /**
 *@brief : Function to Read a Pin State from a Port to be either Logic HIGH or Logic LOW.
 *@param : Port Number, Pin Number, Pointer to a variable that takes a Logic State Enum (HIGH/LOW).
 *@return: Error State.                                                                      
 */
DIO_enumErrorStatus_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumLogicState_t* Add_PenumPinValue)
{
	/*Create an Error Status Variable*/
	DIO_enumErrorStatus_t RET_enumErrorStatus;
	/*Check if Port Number Parameter is Valid*/
	if(Copy_enumPortNum>PORT_NUM)
	{
		RET_enumErrorStatus=DIO_enumWrongPort;
	}
	/*Check if Pin Number Parameter is Valid*/
	else if(Copy_enumPinNum>DIO_enumPin7)
	{
		RET_enumErrorStatus=DIO_enumWrongPin;
	}
	/*Check if Address is equal to NULL*/
	else if(Add_PenumPinValue==NULL)
	{
		RET_enumErrorStatus=DIO_enumNullPointer;
	}
	/*All parameters are valid, continue with the configurations*/
	else
	{
		/*Update Error Status to OK*/
		RET_enumErrorStatus=DIO_enumOk;
		/*Switch on Port Number*/
		switch(Copy_enumPortNum)
		{
			/*If Number of Ports is 4*/
			#if PORT_NUM==FOUR_PORTS
				case DIO_enumPortA:
				/*Get PortA-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINA,Copy_enumPinNum);
				break;
				case DIO_enumPortB:
				/*Get PortB-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINB,Copy_enumPinNum);
				break;
				case DIO_enumPortC:
				/*Get PortC-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINC,Copy_enumPinNum);
				break;
				case DIO_enumPortD:
				/*Get PortD-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PIND,Copy_enumPinNum);
				break;
			/*If Number of Ports is 3*/
			#elif PORT_NUM==THREE_PORTS
				case DIO_enumPortA:
				/*Get PortA-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINA,Copy_enumPinNum);
				break;
				case DIO_enumPortB:
				/*Get PortB-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINB,Copy_enumPinNum);
				break;
				case DIO_enumPortC:
				/*Get PortC-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINC,Copy_enumPinNum);
				break;
			/*If Number if Ports is 2*/
			#elif PORT_NUM==TWO_PORTS
				case DIO_enumPortA:
				/*Get PortA-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINA,Copy_enumPinNum);
				break;
				case DIO_enumPortB:
				/*Get PortB-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINB,Copy_enumPinNum);
				break;
			/*If Number if Ports is 1*/
			#elif PORT_NUM==ONE_PORT
				case DIO_enumPortA:
				/*Get PortC-Pinx Value*/
				*Add_PenumPinValue=GET_BIT(PINA,Copy_enumPinNum);
				break;
			#endif
		}
	}
	return RET_enumErrorStatus;
}

/**
 *@brief : Function that takes a struct of Pin configurations and sets them.
 *@param : Struct that contains Port Number, Pin Number, and Configuration Type (Input PullUp, Input PullDown, OutputHigh, OutputLow).
 *@return: Error State.                                                                      
 */
DIO_enumErrorStatus_t DIO_enumSetConfig(DIO_strDioCfg * Add_strDioCfg, u8 Loc_u8StructSize)
{
	/*Create an Error Status Variable*/
	DIO_enumErrorStatus_t RET_enumErrorStatus=DIO_enumNok;
	/*Check if Address is Equal to NULL*/
	if(Add_strDioCfg==NULL)
	{
		RET_enumErrorStatus=DIO_enumNullPointer;
	}
	/*Loop over Size of Struct*/
	for(u8 iter=0;iter<Loc_u8StructSize;iter++)
	{
	/*Check if Port Number is Valid*/
	if((Add_strDioCfg[iter].Port)>PORT_NUM)
	{
		RET_enumErrorStatus=DIO_enumWrongPort;
	}
	/*Check if Pin Number is Valid*/
	else if((Add_strDioCfg[iter].Pin)>DIO_enumPin7)
	{
		RET_enumErrorStatus=DIO_enumWrongPin;
	}
	/*Check if Logic State is Valid*/
	else if((Add_strDioCfg[iter].LogicState)>DIO_enumLogicHigh)
	{
		RET_enumErrorStatus=DIO_enumWrongLogicState;
	}
	/*Check if Pin Configuration is Valid*/
	else if((Add_strDioCfg[iter].PinConfig)>DIO_enumInputExternalPD)
	{
		RET_enumErrorStatus=DIO_enumWrongConfig;
	}
	/*All Parameters are Valid, Continue with the Configuration*/
	else
	{
		/*Switch on Port Number*/
		switch(Add_strDioCfg[iter].Port)
		{
			/*If Number of Ports if 4*/
			#if PORT_NUM==FOUR_PORTS
			/*PORTA*/
			case DIO_enumPortA:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
					
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRA,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
					
				}
			break;
			
			/*PORTB*/
			case DIO_enumPortB:
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
				
					/*If Pin Configuration is Output*/
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRB,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*PORTC*/
			case DIO_enumPortC:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRC,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTC,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRC,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTC,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRC,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTC,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTC,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*PORTD*/
			case DIO_enumPortD:
				/*Switch On Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRD,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTD,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRD,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTD,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRD,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTD,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTD,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*If Number of Ports are 3*/
			#elif PORT_NUM==THREE_PORTS
			/*PORTA*/
			case DIO_enumPortA:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRA,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*PORTB*/
			case DIO_enumPortB:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRB,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*PORTC*/
			case DIO_enumPortC:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRC,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTC,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRC,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTC,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRC,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTC,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTC,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			
			break;
			
			/*If number of Ports is 2*/
			#elif PORT_NUM==TWO_PORTS
			/*PORTA*/
			case DIO_enumPortA:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
					/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumInputExternalPD:
					/*Set as Input- External Pull Down*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
	
					case DIO_enumOutput:
					/*Set as Output*/
						SET_BIT(DDRA,Add_strDioCfg[iter].Pin);
					/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			break;
			
			/*PORTB*/
			case DIO_enumPortB:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRB,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
					break;
					
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRB,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTB,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			
			break;
			
			/*If Number of Configurations is One*/
			#elif PORT_NUM==ONE_PORT
			/*PORTA*/
			case DIO_enumPortA:
				/*Switch on Pin Configuration*/
				switch(Add_strDioCfg[iter].PinConfig)
				{
					case DIO_enumInputInternalPU:
						/*Set as Input- Internal Pull Up*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumInputExternalPD:
						/*Set as Input- External Pull Down*/
						CLR_BIT(DDRA,Add_strDioCfg[iter].Pin);
						CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
					break;
				
					case DIO_enumOutput:
						/*Set as Output*/
						SET_BIT(DDRA,Add_strDioCfg[iter].Pin);
						/*Switch on Logic State*/
						switch(Add_strDioCfg[iter].LogicState)
						{
							case DIO_enumLogicHigh:
							/*Set Logic as HIGH*/
							SET_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
							case DIO_enumLogicLow:
							/*Set Logic as LOW*/
							CLR_BIT(PORTA,Add_strDioCfg[iter].Pin);
							break;
						}
					break;
				}
			
			break;
			
			#endif
		}
	}
	}
	return RET_enumErrorStatus;
}	

		
DIO_enumErrorStatus_t DIO_enumSetPortConfig(DIO_enumPorts_t Copy_enumPortNum, DIO_enumConfig_t Copy_enumConfig )
{
	/*Create Error Status Variable*/
	DIO_enumErrorStatus_t Ret_enumErrorStatus;
	/*Check if Port Parameter is Valid*/
	if(Copy_enumPortNum>DIO_enumPortD)
	{
		Ret_enumErrorStatus=DIO_enumWrongPort;
	}
	/*Check if Configuration Parameter is Valid*/
	else if(Copy_enumConfig>DIO_enumInputExternalPD)
	{
		Ret_enumErrorStatus=DIO_enumWrongConfig;
	}
	/*All Parameters are Valid, Continue with Operation*/
	else
	{
		/*Set Error Status Variable to OK*/
		Ret_enumErrorStatus=DIO_enumOk;
		
							/*********************************FOUR PORTS*************************************/
		
		#if PORT_NUM==FOUR_PORTS
		/*Switch on Port Parameter*/
		switch(Copy_enumPortNum)
		{
			/*In case of PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
					/*Set All Port Pins to Output*/
					DDRA=0xFF;
					break;
				case DIO_enumInputInternalPU:
					/*Set All Port Pins to Input*/
					DDRA=0x00;
					/*Set All Port Pins to Pull Up*/
					PORTA=0xFF;
				break;
				case DIO_enumInputExternalPD:
					/*Set All Port Pins to Input*/
					DDRA=0x00;
					/*Set All Port Pins to Pull Down*/
					PORTA=0X00;
				break;
			}
			break;

			/*In Case of PORTB*/
			case DIO_enumPortB:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
					/*Set All Port Pins to Output*/
					DDRB=0xFF;
					break;
				case DIO_enumInputInternalPU:
					/*Set All Port Pins to Input*/
					DDRB=0x00;
					/*Set All Port Pins to Pull Up*/
					PORTB=0xFF;
				break;
				case DIO_enumInputExternalPD:
					/*Set All Port Pins to Input*/
					DDRB=0x00;
					/*Set All Port Pins to Pull Down*/
					PORTB=0X00;
				break;
			}
			break;
			
			/*In case of PORTC*/
			case DIO_enumPortC:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
					/*Set All Port Pins to Output*/
					DDRC=0xFF;
					break;
				case DIO_enumInputInternalPU:
					/*Set All Port Pins to Input*/
					DDRC=0x00;
					/*Set All Port Pins to Pull Up*/
					PORTC=0xFF;
				break;
				case DIO_enumInputExternalPD:
					/*Set All Port Pins to Input*/
					DDRC=0x00;
					/*Set All Port Pins to Pull Down*/
					PORTC=0X00;
				break;
			}
			break;

			/*In Case of PORTD*/
			case DIO_enumPortD:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
					/*Set All Port Pins to Output*/
					DDRD=0xFF;
					break;
				case DIO_enumInputInternalPU:
					/*Set All Port Pins to Input*/
					DDRD=0x00;
					/*Set All Port Pins to Pull Up*/
					PORTD=0xFF;
				break;
				case DIO_enumInputExternalPD:
					/*Set All Port Pins to Input*/
					DDRD=0x00;
					/*Set All Port Pins to Pull Down*/
					PORTD=0X00;
				break;
			}
			break;

		}
		
									/*********************************THREE PORTS*************************************/

		#elif PORT_NUM==THREE_PORTS

		/*Switch on Port Parameter*/
		switch(Copy_enumPortNum)
		{
			/*In case of PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
				/*Set All Port Pins to Output*/
				DDRA=0xFF;
				break;
				case DIO_enumInputInternalPU:
				/*Set All Port Pins to Input*/
				DDRA=0x00;
				/*Set All Port Pins to Pull Up*/
				PORTA=0xFF;
				break;
				case DIO_enumInputExternalPD:
				/*Set All Port Pins to Input*/
				DDRA=0x00;
				/*Set All Port Pins to Pull Down*/
				PORTA=0X00;
				break;
			}
			break;

			/*In Case of PORTB*/
			case DIO_enumPortB:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
				/*Set All Port Pins to Output*/
				DDRB=0xFF;
				break;
				case DIO_enumInputInternalPU:
				/*Set All Port Pins to Input*/
				DDRB=0x00;
				/*Set All Port Pins to Pull Up*/
				PORTB=0xFF;
				break;
				case DIO_enumInputExternalPD:
				/*Set All Port Pins to Input*/
				DDRB=0x00;
				/*Set All Port Pins to Pull Down*/
				PORTB=0X00;
				break;
			}
			break;
			
			/*In case of PORTC*/
			case DIO_enumPortC:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
				/*Set All Port Pins to Output*/
				DDRC=0xFF;
				break;
				case DIO_enumInputInternalPU:
				/*Set All Port Pins to Input*/
				DDRC=0x00;
				/*Set All Port Pins to Pull Up*/
				PORTC=0xFF;
				break;
				case DIO_enumInputExternalPD:
				/*Set All Port Pins to Input*/
				DDRC=0x00;
				/*Set All Port Pins to Pull Down*/
				PORTC=0X00;
				break;
			}
			break;

		}
		
									/*********************************TWO PORTS*************************************/

		#elif PORT_NUM==TWO_PORTS
		/*Switch on Port Parameter*/
		switch(Copy_enumPortNum)
		{
			/*In case of PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
				/*Set All Port Pins to Output*/
				DDRA=0xFF;
				break;
				case DIO_enumInputInternalPU:
				/*Set All Port Pins to Input*/
				DDRA=0x00;
				/*Set All Port Pins to Pull Up*/
				PORTA=0xFF;
				break;
				case DIO_enumInputExternalPD:
				/*Set All Port Pins to Input*/
				DDRA=0x00;
				/*Set All Port Pins to Pull Down*/
				PORTA=0X00;
				break;
			}
			break;

			/*In Case of PORTB*/
			case DIO_enumPortB:
			/*Switch on Configuration Parameter*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Set to Output*/
				case DIO_enumOutput:
				/*Set All Port Pins to Output*/
				DDRB=0xFF;
				break;
				case DIO_enumInputInternalPU:
				/*Set All Port Pins to Input*/
				DDRB=0x00;
				/*Set All Port Pins to Pull Up*/
				PORTB=0xFF;
				break;
				case DIO_enumInputExternalPD:
				/*Set All Port Pins to Input*/
				DDRB=0x00;
				/*Set All Port Pins to Pull Down*/
				PORTB=0X00;
				break;
			}
			break;

		}
									/*********************************ONE PORT*************************************/

			#elif PORT_NUM==ONE_PORTS
			/*Switch on Port Parameter*/
			switch(Copy_enumPortNum)
			{
				/*In case of PORTA*/
				case DIO_enumPortA:
				/*Switch on Configuration Parameter*/
				switch(Copy_enumConfig)
				{
					/*If Configuration is Set to Output*/
					case DIO_enumOutput:
					/*Set All Port Pins to Output*/
					DDRA=0xFF;
					break;
					case DIO_enumInputInternalPU:
					/*Set All Port Pins to Input*/
					DDRA=0x00;
					/*Set All Port Pins to Pull Up*/
					PORTA=0xFF;
					break;
					case DIO_enumInputExternalPD:
					/*Set All Port Pins to Input*/
					DDRA=0x00;
					/*Set All Port Pins to Pull Down*/
					PORTA=0X00;
					break;
				}
				break;
			}
		/*Terminate #if Condition*/
		#endif

	}
	/*Return Error Status*/
	return Ret_enumErrorStatus;
}

DIO_enumErrorStatus_t DIO_enumSetPinConfig(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumConfig_t Copy_enumConfig)
{
	/*Create an Error Status Variable*/
	DIO_enumErrorStatus_t RET_enumErrorStatus;
	/*Check if Port Number is Valid*/
	if(Copy_enumPortNum>DIO_enumPortD)
	{
		RET_enumErrorStatus=DIO_enumWrongPort;
	}
	/*Check if Pin Number is Valid*/
	else if(Copy_enumPinNum>DIO_enumPin7)
	{
		RET_enumErrorStatus=DIO_enumWrongPin;
	}
	/*Check if Configuration Parameter is Valid*/
	else if(Copy_enumConfig>DIO_enumInputExternalPD)
	{
		RET_enumErrorStatus=DIO_enumWrongConfig;
	}
	/*All Parameters are Valid, Continue Operation*/
	else
	{
		/*Set Error Status Variable to OK*/
		RET_enumErrorStatus=DIO_enumOk;
		
								/*****************************************FOUR PORTS***************************************/
								
		#if PORT_NUM ==FOUR_PORTS
		/*Switch on Port*/
		switch(Copy_enumPortNum)
		{
			/*If PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRA,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Set PORTA-Pinx for Pull Up Option*/
					SET_BIT(PORTA,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Clear PORTA-Pinx for Pull Up Option*/
					CLR_BIT(PORTA,Copy_enumPinNum);
				break;
			}
			break;

			case DIO_enumPortB:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRB,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Set PORTB-Pinx for Pull Up Option*/
					SET_BIT(PORTB,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Clear PORTB-Pinx for Pull Up Option*/
					CLR_BIT(PORTB,Copy_enumPinNum);
				break;
			}
			break;

			case DIO_enumPortC:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRC,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRC-Pinx for Input Option*/
					CLR_BIT(DDRC,Copy_enumPinNum);
					/*Set PORTC-Pinx for Pull Up Option*/
					SET_BIT(PORTC,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRC-Pinx for Input Option*/
					CLR_BIT(DDRC,Copy_enumPinNum);
					/*Clear PORTC-Pinx for Pull Up Option*/
					CLR_BIT(PORTC,Copy_enumPinNum);
				break;
			}
			break;


			case DIO_enumPortD:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRD,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRD-Pinx for Input Option*/
					CLR_BIT(DDRD,Copy_enumPinNum);
					/*Set PORTD-Pinx for Pull Up Option*/
					SET_BIT(PORTD,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRD-Pinx for Input Option*/
					CLR_BIT(DDRD,Copy_enumPinNum);
					/*Clear PORTD-Pinx for Pull Down Option*/
					CLR_BIT(PORTD,Copy_enumPinNum);
				break;
			}
			break;

		}
		
								/*****************************************THREE PORTS***************************************/
								
		#elif PORT_NUM ==THREE_PORTS
		/*Switch on Port*/
		switch(Copy_enumPortNum)
		{
			/*If PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRA,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Set PORTA-Pinx for Pull Up Option*/
					SET_BIT(PORTA,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Clear PORTA-Pinx for Pull Up Option*/
					CLR_BIT(PORTA,Copy_enumPinNum);
				break;
			}
			break;

			case DIO_enumPortB:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRB,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Set PORTB-Pinx for Pull Up Option*/
					SET_BIT(PORTB,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Clear PORTB-Pinx for Pull Up Option*/
					CLR_BIT(PORTB,Copy_enumPinNum);
				break;
			}
			break;

			case DIO_enumPortC:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRC,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRC-Pinx for Input Option*/
					CLR_BIT(DDRC,Copy_enumPinNum);
					/*Set PORTC-Pinx for Pull Up Option*/
					SET_BIT(PORTC,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRC-Pinx for Input Option*/
					CLR_BIT(DDRC,Copy_enumPinNum);
					/*Clear PORTC-Pinx for Pull Up Option*/
					CLR_BIT(PORTC,Copy_enumPinNum);
				break;
			}
			break;

		}
		
								/*****************************************TWO PORTS***************************************/
								
		#elif PORT_NUM ==TWO_PORTS
		/*Switch on Port*/
		switch(Copy_enumPortNum)
		{
			/*If PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRA,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Set PORTA-Pinx for Pull Up Option*/
					SET_BIT(PORTA,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Clear PORTA-Pinx for Pull Up Option*/
					CLR_BIT(PORTA,Copy_enumPinNum);
				break;
			}
			break;

			case DIO_enumPortB:
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRB,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Set PORTB-Pinx for Pull Up Option*/
					SET_BIT(PORTB,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRB-Pinx for Input Option*/
					CLR_BIT(DDRB,Copy_enumPinNum);
					/*Clear PORTB-Pinx for Pull Up Option*/
					CLR_BIT(PORTB,Copy_enumPinNum);
				break;
			}
			break;

		}
		
								/*****************************************ONE PORT***************************************/
								
		#elif PORT_NUM ==ONE_PORT
		/*Switch on Port*/
		switch(Copy_enumPortNum)
		{
			/*If PORTA*/
			case DIO_enumPortA:
			/*Switch on Configuration*/
			switch(Copy_enumConfig)
			{
				/*If Configuration is Output*/
				case DIO_enumOutput:
					/*Set Pin to Output*/
					SET_BIT(DDRA,Copy_enumPinNum);
				break;
				/*If Configuration is Input Internal Pull Up*/
				case DIO_enumInputInternalPU:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Set PORTA-Pinx for Pull Up Option*/
					SET_BIT(PORTA,Copy_enumPinNum);
				break;
				/*If Configuration is Input External Pull Down*/
				case DIO_enumInputExternalPD:
					/*Clear DDRA-Pinx for Input Option*/
					CLR_BIT(DDRA,Copy_enumPinNum);
					/*Clear PORTA-Pinx for Pull Up Option*/
					CLR_BIT(PORTA,Copy_enumPinNum);
				break;
			}
			break;
		}
		
		/*Terminate #if condition*/
		#endif
	}
	
	/*Return Error Status*/
	return RET_enumErrorStatus;
}
