#include<stdio.h>

int main(void)
{
	int num1, num2;
	printf("Enter two integer\n�ڱN�|�P�_�Ĥ@�ӼƭȬO�_���ĤG�ӼƭȪ�����\n");
	scanf_s("%d%d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		printf("�O\n");
	}
	if (num1 % num2 != 0)
	{
		printf("�_\n");
	}
	system("pause");
	return 0;
}