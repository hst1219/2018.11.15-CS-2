#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	srand(time(NULL));
	int a=0, b=0;
	int fq1=0, fq2=0, fq3=0,i=0;
	int coin[10000];

	printf("%s%13s\n\n", "Result", "Frequency");

	for (i = 0; i < 10000; i++)
	{
		coin[i] = rand() % 2;
		if (coin[i] == 0)
			a = 1;
		else
			a = 2;


		coin[i] = rand() % 2;
		if (coin[i] == 0)
			b = 1;
		else
			b = 2;


		if (a + b == 2)
			fq1++;
		if (a + b == 3)
			fq2++;
		if (a + b == 4)
			fq3++;
	}
	  
	printf("%s%10d\n\n", "Head=0", fq1);
	printf("%s%10d\n\n", "Head=1", fq2);
	printf("%s%10d\n\n", "Head=2", fq3);
	printf("Sum of frequency : %d\n\n", i);

	system("pause");
	return 0;

}