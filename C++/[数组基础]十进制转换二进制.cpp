#include <stdio.h>
#include <stdlib.h>
int main()
{
	int temp;
	char bin[1000];
	scanf("%d",&temp);
	itoa(temp,bin,2);
	printf("bin:%sv",bin);
	return 0;
}
