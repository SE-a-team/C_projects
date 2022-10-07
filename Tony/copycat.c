#include <stdio.h>

/**
*main- entry point
*
* Return : always 0
*/

int main(void) {

	char name[100],i;

	printf("Enter your string: ");
	scanf("%s", name);
	for(i=0; name[i]!='\0'; ++i)
	{
	printf("%c", name[i]);
	printf("\n");
	}
	return 0;
}
