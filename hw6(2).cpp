#include <stdio.h>
#include <stdlib.h>
//ax + by = C 
//dx + ey = f

int main()
{
	printf("Phuong trinh co dang:\nax + by = c\ndx + ey = f\n\n\n");
	float a, b, c, d, e, f;
	
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("\033[A\033[2K");
	
	printf("Nhap he so b: ");
	scanf("%f", &b);
	printf("\033[A\033[2K");
	
	printf("Nhap he so c: ");
	scanf("%f", &c);
	printf("\033[A\033[2K");
	
	printf("Nhap he so d: ");
	scanf("%f", &d);
	printf("\033[A\033[2K");
	
	printf("Nhap he so e: ");
	scanf("%f", &e);
	printf("\033[A\033[2K");
	
	printf("Nhap he so f: ");
	scanf("%f", &f);
	system("cls");
	
	float D = a * e - b * d;
	float Dx = c * e - b * f;
	float Dy = a * f - c * d;	
		if (D != 0)
			{
				float x = Dx / D;
				float y = Dy / D;
				printf("x = %f\n", x);
				printf("y = %f\n", y);
			}
		else
		{				
			if (Dx == 0 && Dy == 0)
				{
					printf("phuong trinh co vo so nghiem");
				}
			else 
				{
					printf("phuong trinh vo nghiem");
				}
		}
	return 0;	
}