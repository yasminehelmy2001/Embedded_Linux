#ifndef STD_MATH_H_
#define STD_MATH_H_

// Set bit BIT in REG
#define SET_BIT(REG,BIT)			REG|=(1<<BIT) 
// Clear bit BIT in REG       
#define CLR_BIT(REG,BIT)			REG&=~(1<<BIT)
// Toggle bit BIT in REG           
#define TGL_BIT(REG,BIT)    		REG^=(1<<BIT)
// Get bit BIT in REG           
#define GET_BIT(REG,BIT) 			((REG>>BIT)&1)
          
// Set high nibble in REG
#define SET_HIGH_NIB(REG)			REG|=~15
// Clear high nibble in REG          
#define CLR_HIGH_NIB(REG)			REG&=15
// Get high nibble in REG          
#define GET_HIGH_NIB(REG)   		(REG>>4)&15
// Toggle high nibble in REG       
#define TGL_HIGH_NIB(REG) 			REG^=~15
// Set low nibble in REG   		      
#define SET_LOW_NIB(REG) 			REG|=15
// Clear low nibble in REG           
#define CLR_LOW_NIB(REG)			REG&=~15
// Get low nibble in REG            
#define GET_LOW_NIB(REG)			REG&15
// Toggle low nibble in REG            
#define TGL_LOW_NIB(REG)    		REG^=15               

// Assign VALUE to REG
#define ASSIGN_REG(REG,VALUE)		REG=VALUE	      
// Assign VALUE to high nibble REG
#define ASSIGN_HIGH_NIB(REG,VALUE)	SET_HIGH_NIB(REG); REG&=~(~VALUE<<4)
// Assign VALUE to low nibble REG 
#define ASSIGN_LOW_NIB(REG,VALUE)	SET_LOW_NIB(REG);  REG&=~VALUE	  
// Right shift by NO in REG
#define RSHFT_REG(REG, NO)			REG=REG>>NO;
// Left shift by NO in REG
#define LSHFT_REG(REG, NO)    		REG=REG<<NO;      
// Circular right shift by NO in REG
#define CRSHFT_REG(REG, NO)			int temp;   \
									for(int i=0;i<NO;i++)      \
									{    temp=GET_BIT(REG,0); \
										for(int j=1;j<8;j++)  \
										{\
											if(GET_BIT(REG,j)==1) \
												SET_BIT(REG,j-1); \
											else	            \
												CLR_BIT(REG,j-1);  \
										}\
										  if(temp==1) \
											SET_BIT(REG,7); \
										  else	      \
											CLR_BIT(REG,7);   \
									}
											                  
// Circular left shift by NO in REG
#define CLSHFT_REG(REG,NO)     		int temp;   \
									for(int i=0;i<NO;i++)      \
									{    temp=GET_BIT(REG,7); \
										for(int j=6;j>=0;j--)  \
										{\
											if(GET_BIT(REG,j)==1) \
												SET_BIT(REG,j+1); \
											else	            \
												CLR_BIT(REG,j+1);  \
										}\
										  if(temp==1) \
											SET_BIT(REG,0); \
										  else	      \
											CLR_BIT(REG,0);   \
									} 


#endif    