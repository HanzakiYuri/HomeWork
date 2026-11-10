#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a[10];
	printf("nhap 10 so nguyen: ");
	for(int i = 0; i < 10; i++)
		{
			scanf("%i", &a[i]);
		}
	
	printf("cac so duong: ");
	int b = 0;
	for(int i = 0; i < 10; i++)
		{
		if (a[i] > 0)
			{
				printf("%d ", a[i]);
				b++;
			}					
		}	
	if(b == 0)
		{
			printf("Khong co so duong nao trong mang!");
		}	
	return 0;	
	
}