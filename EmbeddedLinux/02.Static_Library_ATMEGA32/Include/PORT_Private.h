/*
 * PORT_Private.h
 *
 * Created: 12/3/2023 4:54:15 PM
 *  Author: yasmi
 */ 


#ifndef PORT_PRIVATE_H_
#define PORT_PRIVATE_H_

/*PRE Compile/POST Compile Options*/
#define PRE_COMPILE 0
#define POST_COMPILE 1

/*Number of Ports Options*/
#define ONE_PORT 0
#define TWO_PORTS 1
#define THREE_PORTS 2
#define FOUR_PORTS 3

/*Defining CPU Frequency*/
#define F_CPU 8000000

/*Defining PORT Register Addresses*/
#define DDRA *((volatile u8*)0x3A)
#define DDRB *((volatile u8*)0x37)
#define DDRC *((volatile u8*)0x34)
#define DDRD *((volatile u8*)0x31)

#define PORTA *((volatile u8*)0x3B)
#define PORTB *((volatile u8*)0x38)
#define PORTC *((volatile u8*)0x35)
#define PORTD *((volatile u8*)0x32)

#define PINA  *((volatile u8*)0x39)
#define PINB  *((volatile u8*)0x36)
#define PINC  *((volatile u8*)0x33)
#define PIND  *((volatile u8*)0x30)


#endif /* PORT_PRIVATE_H_ */