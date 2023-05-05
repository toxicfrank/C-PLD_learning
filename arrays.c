#include <stdio.h>

int main(void)
{
	int age[] = {45, 23, 20, 21, 30};
	int i = 0;

	//printf("%d\n", age[1]);


	//printf("\n");

	while (i < 5)
	{
		printf("%d ", age[i]);
		i++;
	}
	printf("\n");


	int myage = 17;

	printf("%d", myage);
	printf("\n");

	age[0] = 50;

	for (i = 0; i < 5; i++)
	{
		printf("%d ", age[i]);
	}
	printf("\n");

	int *p;

	p = &age[1];
	*p = 67;

	printf("%d\n", *p);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", age[i]);
	}
	printf("\n" );

	return (0);
}
