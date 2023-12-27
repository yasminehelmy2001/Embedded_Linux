# Embedded Linux Task 4

## 1) Static Library Application for ATMEGA32

1. Created a soft link for the avr gcc in order to write "avr-gcc" instead of the pull path while running it

   ​	`sudo ln -s ~/x-tools/avr/bin/avr-gcc /usr/my-avr-gcc`

2. Compiled our .c's to get our .o's 

       `avr-gcc -c DIO.c -I ./Include`
    	
       `avr-gcc -c PORT.c -I ./Include`
    
       `avr-gcc -c PORT_cfg.c -I ./Include`		

3. Created our static library with the .o's

        `ar -rcs libmcal.a PORT_cfg.o PORT.o DIO.o`

4. Linked our main .c with our library and used 2 flags:

   1. static: In order to link statically as the default is to link dynamically

   2. mmcu=atmega32: in order to generate the .elf file for the specified ATMEGA32 architecture

       `avr-gcc -mmcu=atmega32 main.c -o EL_Task4.elf -I ./Include -L. -lmcal -static`

   ### Running the .elf file
   
   Here the PORT_voidInit function initialized all 32 pins. PortA Pin0 & PortA Pin1 were initialized to OUTPUT_LOW. Then I used the DIO_enumsetPin function to set PortA Pin0 to LOGIC_HIGH.  
   <u>Main Code:</u>    
   ![maincode](https://github.com/yasminehelmy2001/Embedded_Linux/blob/master/EmbeddedLinux/EmbeddedLinux_Task4/README.assets/maincode.png)  
   #### Simulation Output:    
   ![preteussimulation](https://github.com/yasminehelmy2001/Embedded_Linux/blob/master/EmbeddedLinux/EmbeddedLinux_Task4/README.assets/Proteus.png)

## 2) Using a static library in AVR applications over dynamic libraries

AVR microcontrollers are bare metal machines, which means that we interact with its hardware directly. It does not have an operating (and in turn a system loader) to do the task of loading the libraries while the program is running. 

Dynamic  libraries are more useful in stronger microcontrollers with an underlying operating system like Raspberry Pi and BeagleBone.

