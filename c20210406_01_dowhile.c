#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
//	//do ~while
//	int a = -1;
//	do {
//		printf("%d\n", a);
//	} while (a > 0); //�ּ� �ѹ��� ����

	//����ڿ��� �Է��� �޾Ƽ� y�̸� "�����÷���" ���
	//char answer='y';
	//do {
	//	printf("������ �÷��� �ұ��(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //���Ͱ� ó��
	//	printf("�������\n");
	//} while (answer == 'y');
	int a, b = 0;
	do {
		printf("������ �Է��ϼ���.");
		scanf("%d", &a);
		b +=a;
		

	} while (a != 0);
		printf("%d\n", b);




	return 0;
}