#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���ؼ�
#include <stdio.h>

int main(void) {
	//�Է��Լ�
	//������ �Է¹ޱ�
	//int a;
	//printf("������?");
	//scanf("%d",&a); //a�� �ּ�
	//printf("�Է��Ѱ� : %d �ּ� : %p\n", a,&a);

	//�Ǽ��� �Է¹ޱ�
	//float f; //4����Ʈ
	//double d; //8����Ʈ
	//printf("float �Ǽ���?");
	//scanf("%f", &f);
	//printf("double �Ǽ���?");
	//scanf("%lf", &d); //���˹��� double �ϰ�� %lf
	//printf("�Է��Ѱ�\n  %f %p\n %f %p\n", f,&f, d, &d);

	//������ �Է¹ޱ�
	//char c;
	//printf("���ڴ�?");
	//scanf("%c", &c);
	//printf("�Է��� ���� %c\n", c);

	//�ǽ�)�� ������ �Է¹޾Ƽ� �հ踦 ���
	//int a;
	//int b;
	//printf("�� ������?");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d", a, b, a + b);

	//��
	//int a, b;
	//printf("ù��°����?");
	//scanf("%d", &a);
	//printf("en��°����?");
	//scanf("%d", &b);
	//printf("�հ�:%d\n", a + b);

	//�ǽ�)������ ��¥(��, ��, ��)�� �Է� �Է¹޾� ���
	//int year, month, day;
	//printf("��, ��, ���� �Է��ϼ���.");
	//scanf("%d %d %d",&year,&month,&day);
	//printf("������ %d�� %d�� %d�� �Դϴ�.", year, month, day);

	//�� ���� ������ �Է� �޾� ���������� ������
	//int a, b;
	//scanf("%d %d", &a, &b);
	//printf("�Է� ���� �� : %d %d", a, b);
	//printf("%d + %d = %d\n",a,b,a+b);
	//printf("%d - %d = %d\n",a,b,a-b);
	//printf("%d * %d = %d\n",a,b,a*b);
	//printf("%d / %d = %.1f\n",a,b,(double)a/b);

	//int a, b;
	//char sign;
	//printf("first?");
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);

	////�ѹ��ڸ� �о ��ȯ�ϴ� �Լ�
	//getchar(); //���͸� ó���ϱ� ���� ����
	//printf("sign?");
	//scanf("%d", &sign);


	//printf("%d %c %d = %d", a, sign, b, a + b);


	//�ǽ�) ���� ���� �� �Ž������� ����Ͽ� ���
	//int amount, pay;
	//printf("���ǰ��� �� ��");
	//scanf("%d %d", &amount, &pay);
	//pay > amount ? 
	//	printf("�Ž�����%d\n", pay - amount) : 
	//	amount>pay? printf("�����ѱݾ�%d\n", amount - pay):
	//	printf("���Ϸ�\n");

	//�ǽ� ����, ����, ���� ������ �Է� �޾� �հ�� ��� ���ϱ�
	//int a, b, c;
	//printf("����������? ");
	//scanf("%d", &a);
	//printf("����������? ");
	//scanf("%d", &b);
	//printf("����������? ");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//printf("�հ� %d\n ��� %.2f\n", sum, sum / 3.);

	//rgb �� ����� unsigned int : �����
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r<<16 | g<<8 | b;
	printf("RGB: %0X\n",rgb); //X,x : ��ҹ��� ����












	return 0;
}