#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("Enter two integer\n我將會判斷第一個數值是否為第二個數值的倍數\n");
	scanf_s("%d%d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		printf("是\n");
	}
	if (num1 % num2 != 0)
	{
		printf("否\n");
	}
	system("pause");
	return 0;
}