#include "data.h"

/* The function receives a number x representing the number of parameters sent to the function and "unsigned int" parameters.
The function returns a value of "unsigned int" which is the result of "bitwise and" operation between the bits of the parameters.*/
uint var_and(uint x, ...)
{
 	va_list p;
 	uint num ,result,i;
 	if(x==0)
 	 	return 0;
 	va_start (p,x);
 	result = (num = va_arg (p,uint)); 
 	for(i=1;i<x;i++)
 	{
 	 	num = va_arg (p,uint);
 	 	result = result & num;
 	 } 
 	 va_end(p);
return result;
}

/* The function receives a number x representing the number of parameters sent to the function and "unsigned int" parameters.
The function prints x and the parameters in their numerical representation*/
void printNumbers(uint x,...)
{
 	va_list p;
 	uint num,i;
 	va_start (p,x);
 	printf("%u ",x);
	for(i=1;i<=x;i++){
		num=va_arg(p,uint);
		printf(", %u ",num);
	}	
	va_end(p);
}

/* The function receives a number x representing the number of parameters sent to the function and "unsigned int" parameters.
The function prints the parameters in their binary representation.*/
void printBits(uint x,...)
{
    va_list p;
    uint mask,num,i;
    va_start (p,x); 
    for(i=1;i<=x;i++){
        num=va_arg(p,uint);
        mask= 1<<(sizeof(uint)*8-1);
        while(mask)
        {
            if((num&mask) == 0)
                printf("0 ");
            else
                printf("1 ");
            mask>>=1;
        }
        printf("  <-->   %u\n",num);
    }
va_end(p);
}

