#include "data.h"

uint var_and(uint, ...);
void printNumbers(uint,...);
void printBits(uint x,...);

int main()
{
	uint result=0;

	/*first Example*/
	printf("\nvar_and function was invoked with the values : ");
	printNumbers(firstExample);
	result = var_and(firstExample);
	printf("\nThe function returned the value: %u \n", result);
/*puts("");printBits(firstExample); printf(" ---- result----\n");printBits(printResult);*/

	/*second example*/
	printf("\nvar_and function was invoked with the values : ");
	printNumbers(secondExample);
	result = var_and(secondExample);
	printf("\nThe function returned the value: %u \n", result);
/*puts("");printBits(secondExample);printf(" ---- result----\n");printBits(printResult);*/

	/*third example*/
	printf("\nvar_and function was invoked with the values : ");
	printNumbers(thirdExample);
	result = var_and(thirdExample);
	printf("\nThe function returned the value: %u \n", result);
/*puts("");printBits(thirdExample);printf(" ---- result----\n");printBits(printResult);*/

	/*fourth example*/
	printf("\nvar_and function was invoked with the values : ");
	printNumbers(fourthExample);
	result = var_and(fourthExample);
	printf("\nThe function returned the value: %u \n", result);
/*puts("");printBits(fourthExample);printf(" ---- result----\n");printBits(printResult);*/

return 0;
}
    
        


