#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ��� : for
	//int i; //�ݺ��� ����
	//for (i=10;i<20;i+=2) {   // 1;2;4 ���� 3�� �Ʒ� printf ���� ����
	//	//1�� 1���� ����
	//	printf("%d\n", i);
	//}

	//�������� ���
	//int b;
	//printf("�� ��?");
	//scanf("%d", &b);
	//for (int a = 1; a < 10; a++) {
	//	printf("%d * %d = %d\n",b, a, b * a);
	//}

	//while ��
	//int b;
	//do {
	//printf("�� ��?");
	//scanf("%d", &b);
	//if (b!=0)
	//	for (int a = 1; a < 10; a++) {
	//		printf("%d * %d = %d\n",b, a, b * a);
	//	}
	//} while (b != 0);

	//���� for
	//for (int i = 2; i < 10; i++) {
	//	printf("-----%d��-----\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j,i*j);
	//	}

	//3�� for
	//for (int i = 0; i < 10; i++){
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);
	//}

	//1~100������ ��
	//��) 1���� 100������ ���� 5050 �Դϴ�.
	//int sum=0;
	//for (int a = 1; a < 101; a++) {
	//	sum += a;
	//}
	//printf("1���� 100������ ���� %d �Դϴ�.\n", sum);



	//1���� �Է� ���� �������� �� 
	//��) 1���� ����� ���ұ��? 50 
	//1���� 50������ ���� 1275 �Դϴ�.
	//int a, sum = 0;
	//printf("����� ���ұ��?");
	//scanf("%d", &a);
	//for (int b = 1; b < a + 1; b++) { //b�� for�� ���������� {}�ٱ��� ���Ұ�
	//	sum += b;
	//}
	//printf("1���� %d������ ���� %d�Դϴ�.\n", a, sum);
	////printf("b�� ���簪 : %d\n", b);//b ���Ұ�

	//�ǽ�) �� ������ �Է¹޾� ū ������ ���� ���� ����
	//0�� �Է��ϸ� ���� �ݺ�Ƚ�� 10��
	//int a, b;
	//for (int c = 0; c<10; c++) {
	//	printf("�� ���� �Է��ϼ���.");
	//	scanf("%d %d", &a, &b);
	//	if (a > b)
	//		printf("ù��°�� �� ũ�� ����� %d�Դϴ�.", a - b);
	//	else if (a < b)
	//		printf("�ι�°�� �� ũ�� ����� %d�Դϴ�.", b - a);
	//	else
	//		printf("�� ���� �����ϴ�.");

	//int a, b;
	//for (int c = 0; c < 10; c++) {
	//	printf("�� ���� �Է��ϼ���.");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (a > b)	printf("ù��°�� �� ũ�� ����� %d�Դϴ�.\n", a - b);
	//	else if (a < b) printf("�ι�°�� �� ũ�� ����� %d�Դϴ�.\n", b - a);
	//	else printf("�� ���� �����ϴ�.\n");

	//����� 1
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//����� 2
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 7; j > i; j--) {
	//		printf("*");
	//}
	//printf("\n");
	//}

	//����� 3
	//for (int i = 0; i < 7; i++) {
	//	//�������
	//	for (int j = 7; j > i; j--) {
	//		printf(" ");
	//	}
	//	//�����
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//			
	//		}
	//	printf("\n");
	//}

	//����� 4
	//for (int i = 0; i < 7; i++) {
	//	//����
	//	for (int j = 7; j > i; j--) {
	//		printf(" ");
	//	}
	//	//��
	//	for (int j = 0; j < i + 1; j++) {
	//		printf("*");		
	//	}
	//	for (int j = 0; j < i; j++ ) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//�����4 ��
	for (int i = 0; i < 7; i++) {
		//�������
		for (int j = 0; j < 7-i; j++) {
			printf(" ");
		}
		//�����
		for (int j = 0; j < (i*2)+1; j++) {
			printf("*");
				
			}
		printf("\n");
	}



	return 0;
}