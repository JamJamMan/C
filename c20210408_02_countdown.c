#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//�Ű����� : ī��Ʈ�ٿ� ��
//��ȯ�� : ����
//��� : ī��Ʈ �ٿ� ���

void count(int a) {
	for (a; a > -1; a--) {
	Sleep(1000);
	printf("%d\n", a);
	}
}

int main() {
	//printf("ī��Ʈ �ٿ� ����.\n");
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000); // 1/1000�� ����
	//	printf("%d\n", i);
	//}
	//printf("�߻�!\n");
	//
	printf("ī��Ʈ ����\n");
	count(10);
	printf("�߻�!\n");


	return 0;
}