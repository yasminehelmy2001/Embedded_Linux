#include "std_types.h"
#include "std_math.h"
#include "PORT.h"

#define PIN_LOW 0
#define PIN_HIGH 1

/*********************PRE-CPMPILE*****************************/
#if PORT_TYPE == PRE_COMPILE

#define CONCAT(P7,P6,P5,P4,P3,P2,P1,P0)	HELPER(P7,P6,P5,P4,P3,P2,P1,P0)
#define HELPER(P7,P6,P5,P4,P3,P2,P1,P0)	0b##P7##P6##P5##P4##P3##P2##P1##P0

#define INPUT_PU 0
#define INPUT_HI 1
#define OUTPUT_HIGH 2
#define OUTPUT_LOW 3

void PORT_voidInit(void)
{
	/* ----------------PIN0------------------*/
	#if PORT_PIN0 == INPUT_PU
		/* Set PIN0 as an input with pull-up enabled */
		#define	PIN0_DIR	PIN_LOW
		#define	PIN0_PORT	PIN_HIGH
	#elif PORT_PIN0 == INPUT_HI
		/* Set PIN0 as an input with high-impedance */
		#define	PIN0_DIR	PIN_HIGH
		#define	PIN0_PORT	PIN_LOW
	#elif PORT_PIN0 == OUTPUT_HIGH
		/* Set PIN0 as an output with logic HIGH */
		#define	PIN0_DIR	PIN_HIGH
		#define	PIN0_PORT	PIN_HIGH
	#elif PORT_PIN0 == OUTPUT_LOW
		/* Set PIN0 as an output with logic LOW */
		#define	PIN0_DIR	PIN_HIGH
		#define	PIN0_PORT	PIN_LOW
	#else	
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN1------------------*/
	#if PORT_PIN1 == INPUT_PU
		/* Set PIN1 as an input with pull-up enabled */
		#define	PIN1_DIR	PIN_LOW
		#define	PIN1_PORT	PIN_HIGH
	#elif PORT_PIN1 == INPUT_HI
		/* Set PIN1 as an input with high-impedance */
		#define	PIN1_DIR	PIN_HIGH
		#define	PIN1_PORT	PIN_LOW
	#elif PORT_PIN1 == OUTPUT_HIGH
		/* Set PIN1 as an output with logic HIGH */
		#define	PIN1_DIR	PIN_HIGH
		#define	PIN1_PORT	PIN_HIGH
	#elif PORT_PIN1 == OUTPUT_LOW
		/* Set PIN1 as an output with logic LOW */
		#define	PIN1_DIR	PIN_HIGH
		#define	PIN1_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN2------------------*/
	#if PORT_PIN2 == INPUT_PU
		/* Set PIN2 as an input with pull-up enabled */
		#define	PIN2_DIR	PIN_LOW
		#define	PIN2_PORT	PIN_HIGH
	#elif PORT_PIN2 == INPUT_HI
		/* Set PIN2 as an input with high-impedance */
		#define	PIN2_DIR	PIN_HIGH
		#define	PIN2_PORT	PIN_LOW
	#elif PORT_PIN2 == OUTPUT_HIGH
		/* Set PIN2 as an output with logic HIGH */
		#define	PIN2_DIR	PIN_HIGH
		#define	PIN2_PORT	PIN_HIGH
	#elif PORT_PIN2 == OUTPUT_LOW
		/* Set PIN2 as an output with logic LOW */
		#define	PIN2_DIR	PIN_HIGH
		#define	PIN2_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN3------------------*/
	#if PORT_PIN3 == INPUT_PU
		/* Set PIN3 as an input with pull-up enabled */
		#define	PIN3_DIR	PIN_LOW
		#define	PIN3_PORT	PIN_HIGH
	#elif PORT_PIN3 == INPUT_HI
		/* Set PIN3 as an input with high-impedance */
		#define	PIN3_DIR	PIN_HIGH
		#define	PIN3_PORT	PIN_LOW
	#elif PORT_PIN3 == OUTPUT_HIGH
		/* Set PIN3 as an output with logic HIGH */
		#define	PIN3_DIR	PIN_HIGH
		#define	PIN3_PORT	PIN_HIGH
	#elif PORT_PIN3 == OUTPUT_LOW	
		/* Set PIN3 as an output with logic LOW */
		#define	PIN3_DIR	PIN_HIGH
		#define	PIN3_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN4------------------*/
	#if PORT_PIN4 == INPUT_PU
		/* Set PIN4 as an input with pull-up enabled */
		#define	PIN4_DIR	PIN_LOW
		#define	PIN4_PORT	PIN_HIGH
	#elif PORT_PIN4 == INPUT_HI
		/* Set PIN4 as an input with high-impedance */
		#define	PIN4_DIR	PIN_HIGH
		#define	PIN4_PORT	PIN_LOW
	#elif PORT_PIN4 == OUTPUT_HIGH
		/* Set PIN4 as an output with logic HIGH */
		#define	PIN4_DIR	PIN_HIGH
		#define	PIN4_PORT	PIN_HIGH
	#elif PORT_PIN4 == OUTPUT_LOW
		/* Set PIN4 as an output with logic LOW */
		#define	PIN4_DIR	PIN_HIGH
		#define	PIN4_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN5------------------*/
	#if PORT_PIN5 == INPUT_PU
		/* Set PIN5 as an input with pull-up enabled */
		#define	PIN5_DIR	PIN_LOW
		#define	PIN5_PORT	PIN_HIGH
	#elif PORT_PIN5 == INPUT_HI
		/* Set PIN5 as an input with high-impedance */
		#define	PIN5_DIR	PIN_HIGH
		#define	PIN5_PORT	PIN_LOW
	#elif PORT_PIN5 == OUTPUT_HIGH
		/* Set PIN5 as an output with logic HIGH */
		#define	PIN5_DIR	PIN_HIGH
		#define	PIN5_PORT	PIN_HIGH
	#elif PORT_PIN5 == OUTPUT_LOW
		/* Set PIN5 as an output with logic LOW */
		#define	PIN5_DIR	PIN_HIGH
		#define	PIN5_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
		
	/* ----------------PIN6------------------*/
	#if PORT_PIN6 == INPUT_PU
		/* Set PIN6 as an input with pull-up enabled */
		#define	PIN6_DIR	PIN_LOW
		#define	PIN6_PORT	PIN_HIGH
	#elif PORT_PIN6 == INPUT_HI
		/* Set PIN6 as an input with high-impedance */
		#define	PIN6_DIR	PIN_HIGH
		#define	PIN6_PORT	PIN_LOW
	#elif PORT_PIN6 == OUTPUT_HIGH
		/* Set PIN6 as an output with logic HIGH */
		#define	PIN6_DIR	PIN_HIGH
		#define	PIN6_PORT	PIN_HIGH
	#elif PORT_PIN6 == OUTPUT_LOW
		/* Set PIN6 as an output with logic LOW */
		#define	PIN6_DIR	PIN_HIGH
		#define	PIN6_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN7------------------*/
	#if PORT_PIN7 == INPUT_PU
		/* Set PIN7 as an input with pull-up enabled */
		#define	PIN7_DIR	PIN_LOW
		#define	PIN7_PORT	PIN_HIGH
	#elif PORT_PIN7 == INPUT_HI
		/* Set PIN7 as an input with high-impedance */
		#define	PIN7_DIR	PIN_HIGH
		#define	PIN7_PORT	PIN_LOW
	#elif PORT_PIN7 == OUTPUT_HIGH
		/* Set PIN7 as an output with logic HIGH */
		#define	PIN7_DIR	PIN_HIGH
		#define	PIN7_PORT	PIN_HIGH
	#elif PORT_PIN7 == OUTPUT_LOW
		/* Set PIN7 as an output with logic LOW */
		#define	PIN7_DIR	PIN_HIGH
		#define	PIN7_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN8------------------*/
	#if PORT_PIN8 == INPUT_PU
		/* Set PIN8 as an input with pull-up enabled */
		#define	PIN8_DIR	PIN_LOW
		#define	PIN8_PORT	PIN_HIGH
	#elif PORT_PIN8 == INPUT_HI
		/* Set PIN8 as an input with high-impedance */
		#define	PIN8_DIR	PIN_HIGH
		#define	PIN8_PORT	PIN_LOW
	#elif PORT_PIN8 == OUTPUT_HIGH
		/* Set PIN8 as an output with logic HIGH */
		#define	PIN8_DIR	PIN_HIGH
		#define	PIN8_PORT	PIN_HIGH
	#elif PORT_PIN8 == OUTPUT_LOW
		/* Set PIN8 as an output with logic LOW */
		#define	PIN8_DIR	PIN_HIGH
		#define	PIN8_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN9------------------*/
	#if PORT_PIN9 == INPUT_PU
		/* Set PIN9 as an input with pull-up enabled */
		#define	PIN9_DIR	PIN_LOW
		#define	PIN9_PORT	PIN_HIGH
	#elif PORT_PIN9 == INPUT_HI
		/* Set PIN9 as an input with high-impedance */
		#define	PIN9_DIR	PIN_HIGH
		#define	PIN9_PORT	PIN_LOW
	#elif PORT_PIN9 == OUTPUT_HIGH
		/* Set PIN9 as an output with logic HIGH */
		#define	PIN9_DIR	PIN_HIGH
		#define	PIN9_PORT	PIN_HIGH
	#elif PORT_PIN9 == OUTPUT_LOW
		/* Set PIN9 as an output with logic LOW */
		#define	PIN9_DIR	PIN_HIGH
		#define	PIN9_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN10------------------*/
	#if PORT_PIN10 == INPUT_PU
		/* Set PIN10 as an input with pull-up enabled */
		#define	PIN10_DIR	PIN_LOW
		#define	PIN10_PORT	PIN_HIGH
	#elif PORT_PIN10 == INPUT_HI
		/* Set PIN10 as an input with high-impedance */
		#define	PIN10_DIR	PIN_HIGH
		#define	PIN10_PORT	PIN_LOW
	#elif PORT_PIN10 == OUTPUT_HIGH
		/* Set PIN10 as an output with logic HIGH */
		#define	PIN10_DIR	PIN_HIGH
		#define	PIN10_PORT	PIN_HIGH
	#elif PORT_PIN10 == OUTPUT_LOW
		/* Set PIN10 as an output with logic LOW */
		#define	PIN10_DIR	PIN_HIGH
		#define	PIN10_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN11------------------*/
#if PORT_PIN11 == INPUT_PU
		/* Set PIN11 as an input with pull-up enabled */
		#define	PIN11_DIR	PIN_LOW
		#define	PIN11_PORT	PIN_HIGH
	#elif PORT_PIN11 == INPUT_HI
		/* Set PIN11 as an input with high-impedance */
		#define	PIN11_DIR	PIN_HIGH
		#define	PIN11_PORT	PIN_LOW
	#elif PORT_PIN11 == OUTPUT_HIGH
		/* Set PIN11 as an output with logic HIGH */
		#define	PIN11_DIR	PIN_HIGH
		#define	PIN11_PORT	PIN_HIGH
	#elif PORT_PIN11 == OUTPUT_LOW
		/* Set PIN11 as an output with logic LOW */
		#define	PIN11_DIR	PIN_HIGH
		#define	PIN11_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN12------------------*/
	#if PORT_PIN12 == INPUT_PU
		/* Set PIN12 as an input with pull-up enabled */
		#define	PIN12_DIR	PIN_LOW
		#define	PIN12_PORT	PIN_HIGH
	#elif PORT_PIN12 == INPUT_HI
		/* Set PIN12 as an input with high-impedance */
		#define	PIN12_DIR	PIN_HIGH
		#define	PIN12_PORT	PIN_LOW
	#elif PORT_PIN12 == OUTPUT_HIGH
		/* Set PIN12 as an output with logic HIGH */
		#define	PIN12_DIR	PIN_HIGH
		#define	PIN12_PORT	PIN_HIGH
	#elif PORT_PIN12 == OUTPUT_LOW
		/* Set PIN12 as an output with logic LOW */
		#define	PIN12_DIR	PIN_HIGH
		#define	PIN12_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN13------------------*/
#if PORT_PIN13 == INPUT_PU
		/* Set PIN13 as an input with pull-up enabled */
		#define	PIN13_DIR	PIN_LOW
		#define	PIN13_PORT	PIN_HIGH
	#elif PORT_PIN13 == INPUT_HI
		/* Set PIN13 as an input with high-impedance */
		#define	PIN13_DIR	PIN_HIGH
		#define	PIN13_PORT	PIN_LOW
	#elif PORT_PIN13 == OUTPUT_HIGH
		/* Set PIN13 as an output with logic HIGH */
		#define	PIN13_DIR	PIN_HIGH
		#define	PIN13_PORT	PIN_HIGH
	#elif PORT_PIN13 == OUTPUT_LOW
		/* Set PIN13 as an output with logic LOW */
		#define	PIN13_DIR	PIN_HIGH
		#define	PIN13_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN14------------------*/
#if PORT_PIN14 == INPUT_PU
		/* Set PIN14 as an input with pull-up enabled */
		#define	PIN14_DIR	PIN_LOW
		#define	PIN14_PORT	PIN_HIGH
	#elif PORT_PIN14 == INPUT_HI
		/* Set PIN14 as an input with high-impedance */
		#define	PIN14_DIR	PIN_HIGH
		#define	PIN14_PORT	PIN_LOW
	#elif PORT_PIN14 == OUTPUT_HIGH
		/* Set PIN14 as an output with logic HIGH */
		#define	PIN14_DIR	PIN_HIGH
		#define	PIN14_PORT	PIN_HIGH
	#elif PORT_PIN14 == OUTPUT_LOW
		/* Set PIN14 as an output with logic LOW */
		#define	PIN14_DIR	PIN_HIGH
		#define	PIN14_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN15------------------*/
#if PORT_PIN15 == INPUT_PU
		/* Set PIN15 as an input with pull-up enabled */
		#define	PIN15_DIR	PIN_LOW
		#define	PIN15_PORT	PIN_HIGH
	#elif PORT_PIN15 == INPUT_HI
		/* Set PIN15 as an input with high-impedance */
		#define	PIN15_DIR	PIN_HIGH
		#define	PIN15_PORT	PIN_LOW
	#elif PORT_PIN15 == OUTPUT_HIGH
		/* Set PIN15 as an output with logic HIGH */
		#define	PIN15_DIR	PIN_HIGH
		#define	PIN15_PORT	PIN_HIGH
	#elif PORT_PIN15 == OUTPUT_LOW
		/* Set PIN15 as an output with logic LOW */
		#define	PIN15_DIR	PIN_HIGH
		#define	PIN15_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN16------------------*/
#if PORT_PIN16 == INPUT_PU
		/* Set PIN16 as an input with pull-up enabled */
		#define	PIN16_DIR	PIN_LOW
		#define	PIN16_PORT	PIN_HIGH
	#elif PORT_PIN16 == INPUT_HI
		/* Set PIN16 as an input with high-impedance */
		#define	PIN16_DIR	PIN_HIGH
		#define	PIN16_PORT	PIN_LOW
	#elif PORT_PIN16 == OUTPUT_HIGH
		/* Set PIN16 as an output with logic HIGH */
		#define	PIN16_DIR	PIN_HIGH
		#define	PIN16_PORT	PIN_HIGH
	#elif PORT_PIN16 == OUTPUT_LOW
		/* Set PIN16 as an output with logic LOW */
		#define	PIN16_DIR	PIN_HIGH
		#define	PIN16_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN17------------------*/
#if PORT_PIN17 == INPUT_PU
		/* Set PIN17 as an input with pull-up enabled */
		#define	PIN17_DIR	PIN_LOW
		#define	PIN17_PORT	PIN_HIGH
	#elif PORT_PIN17 == INPUT_HI
		/* Set PIN17 as an input with high-impedance */
		#define	PIN17_DIR	PIN_HIGH
		#define	PIN17_PORT	PIN_LOW
	#elif PORT_PIN17 == OUTPUT_HIGH
		/* Set PIN17 as an output with logic HIGH */
		#define	PIN17_DIR	PIN_HIGH
		#define	PIN17_PORT	PIN_HIGH
	#elif PORT_PIN17 == OUTPUT_LOW
		/* Set PIN17 as an output with logic LOW */
		#define	PIN17_DIR	PIN_HIGH
		#define	PIN17_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN18------------------*/
#if PORT_PIN18 == INPUT_PU
		/* Set PIN18 as an input with pull-up enabled */
		#define	PIN18_DIR	PIN_LOW
		#define	PIN18_PORT	PIN_HIGH
	#elif PORT_PIN18 == INPUT_HI
		/* Set PIN18 as an input with high-impedance */
		#define	PIN18_DIR	PIN_HIGH
		#define	PIN18_PORT	PIN_LOW
	#elif PORT_PIN18 == OUTPUT_HIGH
		/* Set PIN18 as an output with logic HIGH */
		#define	PIN18_DIR	PIN_HIGH
		#define	PIN18_PORT	PIN_HIGH
	#elif PORT_PIN18 == OUTPUT_LOW
		/* Set PIN18 as an output with logic LOW */
		#define	PIN18_DIR	PIN_HIGH
		#define	PIN18_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN19------------------*/
#if PORT_PIN19 == INPUT_PU
		/* Set PIN19 as an input with pull-up enabled */
		#define	PIN19_DIR	PIN_LOW
		#define	PIN19_PORT	PIN_HIGH
	#elif PORT_PIN19 == INPUT_HI
		/* Set PIN19 as an input with high-impedance */
		#define	PIN19_DIR	PIN_HIGH
		#define	PIN19_PORT	PIN_LOW
	#elif PORT_PIN19 == OUTPUT_HIGH
		/* Set PIN19 as an output with logic HIGH */
		#define	PIN19_DIR	PIN_HIGH
		#define	PIN19_PORT	PIN_HIGH
	#elif PORT_PIN19 == OUTPUT_LOW
		/* Set PIN19 as an output with logic LOW */
		#define	PIN19_DIR	PIN_HIGH
		#define	PIN19_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN20------------------*/
#if PORT_PIN20 == INPUT_PU
		/* Set PIN20 as an input with pull-up enabled */
		#define	PIN20_DIR	PIN_LOW
		#define	PIN20_PORT	PIN_HIGH
	#elif PORT_PIN20 == INPUT_HI
		/* Set PIN20 as an input with high-impedance */
		#define	PIN20_DIR	PIN_HIGH
		#define	PIN20_PORT	PIN_LOW
	#elif PORT_PIN20 == OUTPUT_HIGH
		/* Set PIN20 as an output with logic HIGH */
		#define	PIN20_DIR	PIN_HIGH
		#define	PIN20_PORT	PIN_HIGH
	#elif PORT_PIN20 == OUTPUT_LOW
		/* Set PIN20 as an output with logic LOW */
		#define	PIN20_DIR	PIN_HIGH
		#define	PIN20_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN21------------------*/
#if PORT_PIN21 == INPUT_PU
		/* Set PIN21 as an input with pull-up enabled */
		#define	PIN21_DIR	PIN_LOW
		#define	PIN21_PORT	PIN_HIGH
	#elif PORT_PIN21 == INPUT_HI
		/* Set PIN21 as an input with high-impedance */
		#define	PIN21_DIR	PIN_HIGH
		#define	PIN21_PORT	PIN_LOW
	#elif PORT_PIN21 == OUTPUT_HIGH
		/* Set PIN21 as an output with logic HIGH */
		#define	PIN21_DIR	PIN_HIGH
		#define	PIN21_PORT	PIN_HIGH
	#elif PORT_PIN21 == OUTPUT_LOW
		/* Set PIN21 as an output with logic LOW */
		#define	PIN21_DIR	PIN_HIGH
		#define	PIN21_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN22------------------*/
#if PORT_PIN22 == INPUT_PU
		/* Set PIN22 as an input with pull-up enabled */
		#define	PIN22_DIR	PIN_LOW
		#define	PIN22_PORT	PIN_HIGH
	#elif PORT_PIN22 == INPUT_HI
		/* Set PIN22 as an input with high-impedance */
		#define	PIN22_DIR	PIN_HIGH
		#define	PIN22_PORT	PIN_LOW
	#elif PORT_PIN22 == OUTPUT_HIGH
		/* Set PIN22 as an output with logic HIGH */
		#define	PIN22_DIR	PIN_HIGH
		#define	PIN22_PORT	PIN_HIGH
	#elif PORT_PIN22 == OUTPUT_LOW
		/* Set PIN22 as an output with logic LOW */
		#define	PIN22_DIR	PIN_HIGH
		#define	PIN22_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN23------------------*/
#if PORT_PIN23 == INPUT_PU
		/* Set PIN23 as an input with pull-up enabled */
		#define	PIN23_DIR	PIN_LOW
		#define	PIN23_PORT	PIN_HIGH
	#elif PORT_PIN23 == INPUT_HI
		/* Set PIN23 as an input with high-impedance */
		#define	PIN23_DIR	PIN_HIGH
		#define	PIN23_PORT	PIN_LOW
	#elif PORT_PIN23 == OUTPUT_HIGH
		/* Set PIN23 as an output with logic HIGH */
		#define	PIN23_DIR	PIN_HIGH
		#define	PIN23_PORT	PIN_HIGH
	#elif PORT_PIN23 == OUTPUT_LOW
		/* Set PIN23 as an output with logic LOW */
		#define	PIN23_DIR	PIN_HIGH
		#define	PIN23_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN24------------------*/
#if PORT_PIN24 == INPUT_PU
		/* Set PIN24 as an input with pull-up enabled */
		#define	PIN24_DIR	PIN_LOW
		#define	PIN24_PORT	PIN_HIGH
	#elif PORT_PIN24 == INPUT_HI
		/* Set PIN24 as an input with high-impedance */
		#define	PIN24_DIR	PIN_HIGH
		#define	PIN24_PORT	PIN_LOW
	#elif PORT_PIN24 == OUTPUT_HIGH
		/* Set PIN24 as an output with logic HIGH */
		#define	PIN24_DIR	PIN_HIGH
		#define	PIN24_PORT	PIN_HIGH
	#elif PORT_PIN24 == OUTPUT_LOW
		/* Set PIN24 as an output with logic LOW */
		#define	PIN24_DIR	PIN_HIGH
		#define	PIN24_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN25------------------*/
#if PORT_PIN25 == INPUT_PU
		/* Set PIN25 as an input with pull-up enabled */
		#define	PIN25_DIR	PIN_LOW
		#define	PIN25_PORT	PIN_HIGH
	#elif PORT_PIN25 == INPUT_HI
		/* Set PIN25 as an input with high-impedance */
		#define	PIN25_DIR	PIN_HIGH
		#define	PIN25_PORT	PIN_LOW
	#elif PORT_PIN25 == OUTPUT_HIGH
		/* Set PIN25 as an output with logic HIGH */
		#define	PIN25_DIR	PIN_HIGH
		#define	PIN25_PORT	PIN_HIGH
	#elif PORT_PIN25 == OUTPUT_LOW
		/* Set PIN25 as an output with logic LOW */
		#define	PIN25_DIR	PIN_HIGH
		#define	PIN25_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN26------------------*/
#if PORT_PIN26 == INPUT_PU
		/* Set PIN26 as an input with pull-up enabled */
		#define	PIN26_DIR	PIN_LOW
		#define	PIN26_PORT	PIN_HIGH
	#elif PORT_PIN26 == INPUT_HI
		/* Set PIN26 as an input with high-impedance */
		#define	PIN26_DIR	PIN_HIGH
		#define	PIN26_PORT	PIN_LOW
	#elif PORT_PIN26 == OUTPUT_HIGH
		/* Set PIN26 as an output with logic HIGH */
		#define	PIN26_DIR	PIN_HIGH
		#define	PIN26_PORT	PIN_HIGH
	#elif PORT_PIN26 == OUTPUT_LOW
		/* Set PIN26 as an output with logic LOW */
		#define	PIN26_DIR	PIN_HIGH
		#define	PIN26_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN27------------------*/
#if PORT_PIN27 == INPUT_PU
		/* Set PIN27 as an input with pull-up enabled */
		#define	PIN27_DIR	PIN_LOW
		#define	PIN27_PORT	PIN_HIGH
	#elif PORT_PIN27 == INPUT_HI
		/* Set PIN27 as an input with high-impedance */
		#define	PIN27_DIR	PIN_HIGH
		#define	PIN27_PORT	PIN_LOW
	#elif PORT_PIN27 == OUTPUT_HIGH
		/* Set PIN27 as an output with logic HIGH */
		#define	PIN27_DIR	PIN_HIGH
		#define	PIN27_PORT	PIN_HIGH
	#elif PORT_PIN27 == OUTPUT_LOW
		/* Set PIN27 as an output with logic LOW */
		#define	PIN27_DIR	PIN_HIGH
		#define	PIN27_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN28------------------*/
#if PORT_PIN28 == INPUT_PU
		/* Set PIN28 as an input with pull-up enabled */
		#define	PIN28_DIR	PIN_LOW
		#define	PIN28_PORT	PIN_HIGH
	#elif PORT_PIN28 == INPUT_HI
		/* Set PIN28 as an input with high-impedance */
		#define	PIN28_DIR	PIN_HIGH
		#define	PIN28_PORT	PIN_LOW
	#elif PORT_PIN28 == OUTPUT_HIGH
		/* Set PIN28 as an output with logic HIGH */
		#define	PIN28_DIR	PIN_HIGH
		#define	PIN28_PORT	PIN_HIGH
	#elif PORT_PIN28 == OUTPUT_LOW
		/* Set PIN28 as an output with logic LOW */
		#define	PIN28_DIR	PIN_HIGH
		#define	PIN28_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	/* ----------------PIN29------------------*/
#if PORT_PIN29 == INPUT_PU
		/* Set PIN29 as an input with pull-up enabled */
		#define	PIN29_DIR	PIN_LOW
		#define	PIN29_PORT	PIN_HIGH
	#elif PORT_PIN29 == INPUT_HI
		/* Set PIN29 as an input with high-impedance */
		#define	PIN29_DIR	PIN_HIGH
		#define	PIN29_PORT	PIN_LOW
	#elif PORT_PIN29 == OUTPUT_HIGH
		/* Set PIN29 as an output with logic HIGH */
		#define	PIN29_DIR	PIN_HIGH
		#define	PIN29_PORT	PIN_HIGH
	#elif PORT_PIN29 == OUTPUT_LOW
		/* Set PIN29 as an output with logic LOW */
		#define	PIN29_DIR	PIN_HIGH
		#define	PIN29_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN30------------------*/
#if PORT_PIN30 == INPUT_PU
		/* Set PIN30 as an input with pull-up enabled */
		#define	PIN30_DIR	PIN_LOW
		#define	PIN30_PORT	PIN_HIGH
	#elif PORT_PIN30 == INPUT_HI
		/* Set PIN30 as an input with high-impedance */
		#define	PIN30_DIR	PIN_HIGH
		#define	PIN30_PORT	PIN_LOW
	#elif PORT_PIN30 == OUTPUT_HIGH
		/* Set PIN30 as an output with logic HIGH */
		#define	PIN30_DIR	PIN_HIGH
		#define	PIN30_PORT	PIN_HIGH
	#elif PORT_PIN30 == OUTPUT_LOW
		/* Set PIN30 as an output with logic LOW */
		#define	PIN30_DIR	PIN_HIGH
		#define	PIN30_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	/* ----------------PIN31------------------*/
#if PORT_PIN31 == INPUT_PU
		/* Set PIN31 as an input with pull-up enabled */
		#define	PIN31_DIR	PIN_LOW
		#define	PIN31_PORT	PIN_HIGH
	#elif PORT_PIN31 == INPUT_HI
		/* Set PIN31 as an input with high-impedance */
		#define	PIN31_DIR	PIN_HIGH
		#define	PIN31_PORT	PIN_LOW
	#elif PORT_PIN31 == OUTPUT_HIGH
		/* Set PIN31 as an output with logic HIGH */
		#define	PIN31_DIR	PIN_HIGH
		#define	PIN31_PORT	PIN_HIGH
	#elif PORT_PIN31 == OUTPUT_LOW
		/* Set PIN31 as an output with logic LOW */
		#define	PIN31_DIR	PIN_HIGH
		#define	PIN31_PORT	PIN_LOW
	#else
		#error "Invalid Configeration"
	#endif
	
	
	/*If Number of Ports= 4*/
	#if PORT_NUM == FOUR_PORTS
		/*Concatenates 8 DIR Pins to DDRx Register*/
		DDRA=CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR);
		DDRB=CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR);
		DDRC=CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN18_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);
		DDRD=CONCAT(PIN31_DIR,PIN30_DIR,PIN29_DIR,PIN28_DIR,PIN27_DIR,PIN26_DIR,PIN25_DIR,PIN24_DIR);
	
		/*Concatenates 8 PORT Pins to PORTx Register*/
		PORTA=CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT);
		PORTB=CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT);
		PORTC=CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN18_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
		PORTD=CONCAT(PIN31_PORT,PIN30_PORT,PIN29_PORT,PIN28_PORT,PIN27_PORT,PIN26_PORT,PIN25_PORT,PIN24_PORT);
	
	/*If Number of Ports= 3*/
	#elif PORT_NUM == THREE_PORTS
		/*Concatenates 8 DIR Pins to DDRx Register*/
		DDRA=CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR);
		DDRB=CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR);
		DDRC=CONCAT(PIN23_DIR,PIN22_DIR,PIN21_DIR,PIN20_DIR,PIN18_DIR,PIN18_DIR,PIN17_DIR,PIN16_DIR);
		
		/*Concatenates 8 PORT Pins to PORTx Register*/
		PORTA=CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT);
		PORTB=CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT);
		PORTC=CONCAT(PIN23_PORT,PIN22_PORT,PIN21_PORT,PIN20_PORT,PIN18_PORT,PIN18_PORT,PIN17_PORT,PIN16_PORT);
	
	/*If Number of Ports= 2*/
	#elif PORT_NUM == TWO_PORTS
		/*Concatenates 8 DIR Pins to DDRx Register*/
		DDRA=CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR);
		DDRB=CONCAT(PIN15_DIR,PIN14_DIR,PIN13_DIR,PIN12_DIR,PIN11_DIR,PIN10_DIR,PIN9_DIR,PIN8_DIR);
	
		/*Concatenates 8 PORT Pins to PORTx Register*/
		PORTA=CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT);
		PORTB=CONCAT(PIN15_PORT,PIN14_PORT,PIN13_PORT,PIN12_PORT,PIN11_PORT,PIN10_PORT,PIN9_PORT,PIN8_PORT);
		
	/*If Number of Ports= 1*/
	#elif PORT_NUM == ONE_PORT
		/*Concatenates 8 DIR Pins to DDRx Register*/
		DDRA=CONCAT(PIN7_DIR,PIN6_DIR,PIN5_DIR,PIN4_DIR,PIN3_DIR,PIN2_DIR,PIN1_DIR,PIN0_DIR);
	
		/*Concatenates 8 PORT Pins to PORTx Register*/
		PORTA=CONCAT(PIN7_PORT,PIN6_PORT,PIN5_PORT,PIN4_PORT,PIN3_PORT,PIN2_PORT,PIN1_PORT,PIN0_PORT);

	#else
		#error "Invalid Port Numbers"
		
	#endif
}

/************************POST_COMPILE************************/
#elif PORT_TYPE == POST_COMPILE

/*Extern Array of Pin Confiergations to Set Them*/
extern PORT_enumPinOpt_t PORT_enumPinCfg[NO_OF_PINS];

/**
 *@brief : Initializes all Pins of all Ports                                                                    
 */
void PORT_voidInit(void)
{
	//Loop over Number of Pins
	for(u8 i=0;i<NO_OF_PINS;i++)
	{
		/*Get Number of Port(A-D)*/
		u8 Loc_u8PortNum=i/8;
		/*Get Number of Pin (0-7)*/
		u8 Loc_u8PinNum=i%8;
		
		/********************FOUR_PORTS********************/
		#if PORT_NUM== FOUR_PORTS
			/*switch based on Port Configuration*/
			switch(PORT_enumPinCfg[i])
			{
				case PORT_enumOutputHigh:
					/*switch based on Port Number*/
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
							/*Set the pin as an output with logic HIGH*/
							SET_BIT(DDRA,Loc_u8PinNum);
							SET_BIT(PORTA,Loc_u8PinNum);
							break;
						case PORT_enumPortB:
							/*Set the pin as an output with logic HIGH*/
							SET_BIT(DDRB,Loc_u8PinNum);
							SET_BIT(PORTB,Loc_u8PinNum);
							break;
						case PORT_enumPortC:
							/*Set the pin as an output with logic HIGH*/
							SET_BIT(DDRC,Loc_u8PinNum);
							SET_BIT(PORTC,Loc_u8PinNum);
							break;
						case PORT_enumPortD:
							/*Set the pin as an output with logic HIGH*/
							SET_BIT(DDRD,Loc_u8PinNum);
							SET_BIT(PORTD,Loc_u8PinNum);	
							break;	
					}
					break;
				
				case PORT_enumOutputLow:
					/*switch based on Port Number*/
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRA,Loc_u8PinNum);
						CLR_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRB,Loc_u8PinNum);
						CLR_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRC,Loc_u8PinNum);
						CLR_BIT(PORTC,Loc_u8PinNum);
						break;
						case PORT_enumPortD:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRD,Loc_u8PinNum);
						CLR_BIT(PORTD,Loc_u8PinNum);
						break;
					}
				break;
			
				case PORT_enumInputInternalPU:
					/*Switch based on Port Number*/
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRA,Loc_u8PinNum);
						SET_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRB,Loc_u8PinNum);
						SET_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRC,Loc_u8PinNum);
						SET_BIT(PORTC,Loc_u8PinNum);
						break;
						case PORT_enumPortD:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRD,Loc_u8PinNum);
						SET_BIT(PORTD,Loc_u8PinNum);
						break;
					}
				break;
			
				case PORT_enumInputExternalPD:
				/*Switch based on Port Number*/
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRA,Loc_u8PinNum);
						CLR_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRB,Loc_u8PinNum);
						CLR_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRC,Loc_u8PinNum);
						CLR_BIT(PORTC,Loc_u8PinNum);
						break;
						case PORT_enumPortD:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRD,Loc_u8PinNum);
						CLR_BIT(PORTD,Loc_u8PinNum);
						break;
					}
				break;															
					}	
					
		/********************THREE_PORTS********************/
		#elif PORT_NUM== THREE_PORTS
				/*Switch based on Pin Configuration*/
				switch(PORT_enumPinCfg[i])
				{
					case PORT_enumOutputHigh:
					/*Switch based on Port Number*/
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an output with logic HIGH*/
						SET_BIT(DDRA,Loc_u8PinNum);
						SET_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an output with logic HIGH*/
						SET_BIT(DDRB,Loc_u8PinNum);
						SET_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an output with logic HIGH*/
						SET_BIT(DDRC,Loc_u8PinNum);
						SET_BIT(PORTC,Loc_u8PinNum);
						break;
					}
					break;
					
					case PORT_enumOutputLow:
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRA,Loc_u8PinNum);
						CLR_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRB,Loc_u8PinNum);
						CLR_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an output with logic LOW*/
						SET_BIT(DDRC,Loc_u8PinNum);
						CLR_BIT(PORTC,Loc_u8PinNum);
						break;
					}
					break;
					
					case PORT_enumInputInternalPU:
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRA,Loc_u8PinNum);
						SET_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRB,Loc_u8PinNum);
						SET_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an input with internal pull-up enabled*/
						CLR_BIT(DDRC,Loc_u8PinNum);
						SET_BIT(PORTC,Loc_u8PinNum);
						break;
					}
					break;
					
					case PORT_enumInputExternalPD:
					switch(Loc_u8PortNum)
					{
						case PORT_enumPortA:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRA,Loc_u8PinNum);
						CLR_BIT(PORTA,Loc_u8PinNum);
						break;
						case PORT_enumPortB:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRB,Loc_u8PinNum);
						CLR_BIT(PORTB,Loc_u8PinNum);
						break;
						case PORT_enumPortC:
						/*Set the pin as an input with external pull-down enabled*/
						CLR_BIT(DDRC,Loc_u8PinNum);
						CLR_BIT(PORTC,Loc_u8PinNum);
						break;
					}
					break;
				}
				
		/********************TWO_PORTS********************/
		#elif PORT_NUM== TWO_PORTS
			switch(PORT_enumPinCfg[i])
			{
				case PORT_enumOutputHigh:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an output with logic HIGH*/
					SET_BIT(DDRA,Loc_u8PinNum);
					SET_BIT(PORTA,Loc_u8PinNum);
					break;
					case PORT_enumPortB:
					/*Set the pin as an output with logic HIGH*/
					SET_BIT(DDRB,Loc_u8PinNum);
					SET_BIT(PORTB,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumOutputLow:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an output with logic LOW*/
					SET_BIT(DDRA,Loc_u8PinNum);
					CLR_BIT(PORTA,Loc_u8PinNum);
					break;
					case PORT_enumPortB:
					/*Set the pin as an output with logic LOW*/
					SET_BIT(DDRB,Loc_u8PinNum);
					CLR_BIT(PORTB,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumInputInternalPU:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an input with internal pull-up enabled*/
					CLR_BIT(DDRA,Loc_u8PinNum);
					SET_BIT(PORTA,Loc_u8PinNum);
					break;
					case PORT_enumPortB:
					/*Set the pin as an input with internal pull-up enabled*/
					CLR_BIT(DDRB,Loc_u8PinNum);
					SET_BIT(PORTB,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumInputExternalPD:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an input with external pull-down enabled*/
					CLR_BIT(DDRA,Loc_u8PinNum);
					CLR_BIT(PORTA,Loc_u8PinNum);
					break;
					case PORT_enumPortB:
					/*Set the pin as an input with external pull-down enabled*/
					CLR_BIT(DDRB,Loc_u8PinNum);
					CLR_BIT(PORTB,Loc_u8PinNum);
					break;
				}
				break;
			}
	
		/*******************One Port************************/
			#elif PORT_NUM== ONE_PORT
			switch(PORT_enumPinCfg[i])
			{
				case PORT_enumOutputHigh:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an output with logic HIGH*/
					SET_BIT(DDRA,Loc_u8PinNum);
					SET_BIT(PORTA,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumOutputLow:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an output with logic LOW*/
					SET_BIT(DDRA,Loc_u8PinNum);
					CLR_BIT(PORTA,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumInputInternalPU:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an input with internal pull-up enabled*/
					CLR_BIT(DDRA,Loc_u8PinNum);
					SET_BIT(PORTA,Loc_u8PinNum);
					break;
				}
				break;
				
				case PORT_enumInputExternalPD:
				switch(Loc_u8PortNum)
				{
					case PORT_enumPortA:
					/*Set the pin as an input with external pull-down enabled*/
					CLR_BIT(DDRA,Loc_u8PinNum);
					CLR_BIT(PORTA,Loc_u8PinNum);
					break;
				}
				break;
			}
		
		/*****************Default Condition******************/
		#else
			#error "Invalid Number of Ports!"	
			
		/*******************endif**************************/
		#endif
		}
		
	}


#endif 
