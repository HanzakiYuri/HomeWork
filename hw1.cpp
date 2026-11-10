#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("nhap a: ");
		scanf("%d", &a);
	printf("nhap b: ");
		scanf("%d", &b);
	system("cls");	
			
		printf("Tong = %d\n", a + b);
		printf("Hieu = %d\n", a - b);
		printf("Tich = %d\n", a * b);
			if (b != 0)
				{
				printf("Thuong = %g", (float)a / b);
				}
			else
				{
				printf("Khong the chia cho 0");	
				}
return 0;		
}

