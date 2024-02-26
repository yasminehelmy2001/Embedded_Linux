
#include <PORT.h>
#include <DIO.h>

void main (void)
{
	PORT_voidInit();
	DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
	
}
