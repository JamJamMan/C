#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�������ǹ� : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("�߸��� ����\n");
	//}




	//���� �������� ���
//	int mon;
//	printf("���� �Է��� �ּ���.");
//	scanf("%d", &mon);
//		switch (mon) {
//	case 1 :
//	case 3 :
//	case 5 :
//	case 7 :
//	case 8 :
//	case 10 :
//	case 12 :
//		printf("%d���� ������ ���� 31���Դϴ�.", mon); break;
//	case 2 :
//		printf("%d���� ������ ���� 28���Դϴ�.", mon); break;
//	case 4 :
//	case 6 :
//	case 9 :
//	case 11 :
//		printf("%d���� ������ ���� 30���Դϴ�.", mon); break;
//	default:
//		printf("�ٽ� �Է��� �ּ���."); 
//}

	int a;
	printf("1.¥���\n2.«��\n3.������\n4.�����\n5.����\n6.���İ�Ƽ\n�޴��� �����ϼ���. : ");
	scanf("%d", &a);
	switch (a) {
	case 1 :
	case 2 :
		printf("�߽��ڳʷ� ������:"); break;
	case 3 :
	case 4 :
		printf("�ѽ��ڳʷ� ������:"); break;
	case 5 :
	case 6 :
		printf("����ڳʷ� ������:"); break;
	default :
		printf("�޴��� �ٽ� �����ϼ���."); break;



	}













	return 0;



}