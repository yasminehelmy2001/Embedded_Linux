
#include "PORT_cfg.h"

/***********************POST_COMPILE*********************/
#if PORT_TYPE == POST_COMPILE

/*If Number of Pins Don't Match the Standard Number of Pins in each Port, Return an Error*/
#if (!(NO_OF_PINS==8|| NO_OF_PINS==16||NO_OF_PINS==24||NO_OF_PINS==32))
#error "Invalid Number of Pins!"
#endif


/**
 *@brief : Allocated a Global Array with Size of Number of Pins                                                
 */
PORT_enumPinOpt_t PORT_enumPinCfg[NO_OF_PINS]={
	
	/* Fill the Array with Your Configuration Options for Each Pin 
	 * Choose from Four Options:
	 * 1)PORT_enumOutputLow
	 * 2)PORT_enumOutputHigh
	 * 3)PORT_enumInputInternalPU
	 * 4)PORT_enumInputExternalPD
	 */
	
	PORT_enumOutputLow,			/*Pin0*/
	PORT_enumOutputLow,		    /*Pin1*/
	PORT_enumOutputLow,         /*Pin2*/
	PORT_enumOutputLow,		    /*Pin3*/
	PORT_enumInputInternalPU,   /*Pin4*/
	PORT_enumOutputHigh,		/*Pin5*/
	PORT_enumOutputHigh,	    /*Pin6*/
	PORT_enumOutputHigh,     	/*Pin7*/
	
	PORT_enumOutputLow,      /*Pin8*/
	PORT_enumOutputHigh,	 /*Pin9*/
	PORT_enumOutputHigh,     /*Pin10*/
	PORT_enumOutputHigh,	 /*Pin11*/
	PORT_enumOutputHigh,     /*Pin12*/
	PORT_enumOutputHigh,	 /*Pin13*/
	PORT_enumOutputHigh,     /*Pin14*/
	PORT_enumOutputHigh,	 /*Pin15*/
	
	PORT_enumOutputHigh,     /*Pin16*/
	PORT_enumOutputHigh,	 /*Pin17*/
	PORT_enumOutputHigh,     /*Pin18*/
	PORT_enumOutputHigh,	 /*Pin19*/
	PORT_enumOutputHigh,     /*Pin20*/
	PORT_enumOutputHigh,	 /*Pin21*/
	PORT_enumOutputHigh,     /*Pin22*/
	PORT_enumOutputHigh,	 /*Pin23*/
	
	PORT_enumOutputHigh,     /*Pin24*/
	PORT_enumOutputHigh,	 /*Pin25*/
	PORT_enumOutputHigh,     /*Pin26*/
	PORT_enumOutputHigh,	 /*Pin27*/
	PORT_enumOutputHigh,     /*Pin28*/
	PORT_enumOutputHigh,	 /*Pin29*/
	PORT_enumOutputHigh,     /*Pin30*/
	PORT_enumOutputHigh		 /*Pin31*/
};


#endif
