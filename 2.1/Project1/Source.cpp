#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int f[10], s[10];
	int c[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int i, j, k=0, q = 0, u = 0;


	printf("請各輸入10個正整數\n");
	printf("f[10]: ");
	for (i = 0; i < 10; i++)
		scanf("%d", &f[i]);
	printf("\n");


	printf("s[10]: ");
	for (j = 0; j < 10; j++)
		scanf("%d", &s[j]);
	printf("\n");



	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (f[i] == s[j])
			{
				c[k] = s[j];
				k++;
				break;
			}
		}
	}
	





	if (c[0]==-1)
		printf("無聯集");

	else
	{
		printf("聯集為:%3d", c[0]);
		for (k = 1; k < 10; k++)
		{
			if (c[k] == -1)
				break;
			else
			{
				for (q = k - 1; q >=0; q--)
				{
					if (c[k] == c[q])
					{
						u++;
						break;
					}
				}

				
			}
			
			if (u == 1)
			{
				u--;
				continue;

			}
			else
				printf(" %3d", c[k]);
		}

	}

	
	printf("\n\n");
	
	
	system("pause");
	return 0;
}