#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//�ݺ��� : while
	//while (1) { //1 Ʈ��
	//	printf("c!!!");
	//}

	//break �ݺ��� Ż��
	//int cnt = 0;
	//while (1) { //1:true, 0:false
	//	cnt++;//cnt += 1;//c=c+1;
	//	printf("c!!! %d��\n", cnt);
	//	if (cnt > 10 - 1) break;
		//printf("c!!! %d��\n", cnt+1);
		//cnt++;//cnt += 1;//c=c+1;
		//if (cnt > 9) break;


	//}
	//1~10������ ��
	//int a=0, sum=0;
	//while (a<10) {
	//	//printf("%d\n",++a);
	//	sum += ++a;// <-----   a++; sum += a;
	//}
	//printf("�հ�:%d\n", sum);

	//���� 2000�� �Ѵ� ������ �� ���� ���϶�
	//int a=0, b=0;
	//while (b<2000) {
	//	//printf("%d\n",++a);
	//	a++;
	//	b += a;

	//}
	//printf("����:%d�հ�:%d\n",a, b);

	//�ǽ�) 1~20������ �� �� 3�� ����� ���
	//int a=3;
	//while (a < 20) {
	//	printf("%d", a);
	//	a += 3
	//}

	//2
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	printf("%d", 3);
	//}
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d", 3);
	//}
	
	//continue:��� 1~10¦���� ���
	int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;
		printf("%d\n", a); 
	}





}