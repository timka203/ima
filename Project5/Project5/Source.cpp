#include <iostream>
#include<locale.h>
#include<stdio.h>
void task5() 
{
	int a, b, c,t,r;
	printf("�������  ����� ���������� ������� ��������");
	scanf_s("%d", &a);
	printf("�������  ����� ���������� ������� �������� ");
	scanf_s("%d", &b);
	printf("�������  ����� ���������� �������� �������� ");
	scanf_s("%d", &c);
	t = (a + b + c) / 3;
	r = (a + b + c) % 3;
	if (r == 0) printf("%d  � ������ �������� \n", t);
	else printf("�� ��������");
}
void task4()
{
	int a, b,y;
	printf("�������  ����� ");
	scanf_s("%d", &a);
	printf("������� ������� ����� ");
	scanf_s("%d", &b);
	y = pow(a, b);
	printf("%d\n", y);
}
void task3()
{
	int a, b,g;
	float r;
	printf("������� ������ ����� ");
	scanf_s("%d", &a);
	printf("������� ������ ����� ");
	scanf_s("%d", &b);
	printf("�������� ��������:�������(1),���������(2),���������(3),��������(4)");
	scanf_s("%d",&g);
	switch (g)
	{
	case 1: {r = a/ b;
		break;
	}
	case 2: {r = a * b;
		break;

	}
	case 3: {r = a - b;
		break;

	}
	case 4: {r = a + b;
		break;
	}
	default:break;

	
	}
	printf("%f\n", r);

}
void task2()
{
	int a, b,c,d,s;
	float r;
	printf("������� ������ ������ ");
	scanf_s("%d", &a);
	printf("������� ������ ������ ");
	scanf_s("%d", &c);
	printf("������� ������ ������ ");
	scanf_s("%d", &d);
	printf("������� �������� ������ ");
	scanf_s("%d", &b);
	printf("������� ����� ������ ");
	scanf_s("%d", &s);
	r = (a + b + c + d + s)/5;
	if (r >= 4)
		printf("�������");
	else printf("�� �������");



}
void task1()
{
	int a, b;
	printf("������� ������ ����� ");
	scanf_s("%d", &a);
	printf("������� ������ ����� ");
	scanf_s("%d", &b);
	if (a == b)
		printf("true");
	else if (a < b)
		printf("%d\n%d\n", a, b);
	else printf("%d\n%d\n", b, a);


}
int main()
{
	setlocale(LC_ALL, "");
	int task;
start:
	printf("������� ����� �������");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		task1();
	}
			break;
	case 2: {
		task2();
	}
			break;
	case 3: {
		task3();
	}
			break;
	case 4: {
		task4();
	}
			break;
	case 5: {
		task5();
	}
			break;
	default:
		break;
	}
	goto start;
}