#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { 
	//���ǽ��� ���϶� ������ ���� �����϶� ���๮���� ����
	//int a = 10;
	//if (a > 0) 
	//	printf("���\n");
	//
	//else 
	//	if (a < 0) 
	//		printf("����\n");
	//	
	//	else 
	//		printf("����� ������ �ƴմϴ�.\n");

	//ǥ���� �����ϰ�
	//int a = 10;
	//if (a > 0)
	//	printf("���\n");
	//else if (a < 0)
	//	printf("����\n");
	//else
	//	printf("����� ������ �ƴմϴ�.\n");




	//�ǽ�)�� ������ �Է¹޾� ū ���� ���( �� ���� �������� �ִ�)
	//int a, b;
	//printf("�� ���� �Է��ϼ���.");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("�� ū ���� %d", a);
	//else if (a < b)
	//	printf("�� ū ���� %d", b);
	//else
	//	printf("�� ���� �����ϴ�.");

	//�ǽ�)������ �Է� �޾� ������ ����ϴ� ���α׷� �ۼ�
	//int a;
	//printf("������ �Է��ϼ���.");
	//scanf("%d", &a);

	//if (a > 100 || a < 0)
	//	printf("�߸��� �����Դϴ�.");
	//else if (a >= 90)
	//	printf("������ A�Դϴ�.");
	//else if (a >= 80)
	//	printf("������ B�Դϴ�.");
	//else if (a >= 70)
	//	printf("������ C�Դϴ�.");
	//else if (a >= 60)
	//	printf("������ D�Դϴ�.");
	//else
	//	printf("������ F�Դϴ�.");

	//�ǽ�) ��, ��, �� ������ �޾� ������ ����� ���
	//int a, b, c;
	//printf("���� ������ �Է��ϼ���.");
	//scanf("%d", &a);
	//printf("���� ������ �Է��ϼ���.");
	//scanf("%d", &b);
	//printf("���� ������ �Է��ϼ���.");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//if (a < 60 || b < 60 || c < 60)
	//	printf("�����Դϴ�.\n");
	//else	
	//	printf("������ %d �Դϴ�.\n����� %.2f �Դϴ�.\n", sum, sum / 3.);

	//�ǽ�)�������� �˾ƺ���
	//int year;
	//printf("������ �Է��ϼ���.");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0){
	//	printf("%d���� �����Դϴ�.\n", year); }
	//else {
	//	printf("%d���� ������ �ƴմϴ�.\n", year);
	//}

	int a;
	printf("1.¥���\n2.«��\n3.������\n4.�����\n5.����\n6.���İ�Ƽ\n�޴��� �����ϼ���. : ");
	scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("�߽� �ڳʷ� ������.");
	else if (a == 3 || a == 4)
		printf("�ѽ� �ڳʷ� ������.");
	else if (a == 5 || a == 6)
		printf("��� �ڳʷ� ������.");
	else
		printf("�޴��� �ٽ� �������ּ���.");




	return 0;

}