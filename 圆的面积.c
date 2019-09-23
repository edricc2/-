#include <stdio.h>
#include <windows.h>
int main()
{
	float s,r;
	printf("请输入半径");
	scanf_s("%f",&r);
	s=3.14*r*r;
	printf("圆的面积为%f",s);
	system("pause");
}