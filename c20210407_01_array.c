#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//�迭 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));
	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}
	//�ǽ�)
	//double arr[3] = { 1.1,2.1,3.1 };
	//double arr[3];
	////�迭�� ũ�� ���ϱ�
	//int size = sizeof(arr) / sizeof(double); // 24/8 3�� ����
	//printf("������:%d\n", size);

	////�ݺ����� �̿��ؼ� �ʱ�ȭ
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i+1.1;
	//}

	////�ݺ����� �̿��ؼ� ���
	//	for (int i = 0; i < size; i++) {
	//	printf("%.1f", arr[i]);
	//}

	//������ �迭
	//char arr[6] = { 'p','y','t','h','o','n' }; //���ڰ� 6���ΰ� �˱⶧���� ���������ص��� -> arr[]
	//int size = sizeof(arr) / sizeof(char); //6/1
	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//�迭���� ��
	//int arr[] = { 4,5,9,12,34 };//1�� 4����Ʈ
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//	printf("%d\n", arr[i]);
	//}
	//printf("%d\n", sum);

	//c�� �����迭
	//a�� ���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�
	
	//#define�� ���ǵ� ��ũ�� ��� : �����ϵǱ� ���� ��ü
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	////�Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]������?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]);//%p, &arr[i] �ּҵ� ���
	//}
	////�հ豸�ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ� : %d\n", sum);

	//�� �л��� ������ �Է� �޾� ��ȣ��� �迭�� ����, �� ��ȣ ������� ���
	//���� 1�� ���� : 90, 2�� ���� : 88
	//�߰�) 1) �հ�� ��� ���
	//2) ���ϴ� �л���ȣ�� �Է��ϸ� �ش��л��� ������ ���

	//int arr[5],sum=0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("�л����� �Է� : ");
	//	scanf("%d", &arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ���� : %d\n",i+1,arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("�հ� : %d\n��� : %.2f\n",sum,(double)sum/size);
	////�˻�
	//int no;
	//char quit; //���ắ��
	//do {
	//	printf("�˻���ȣ��?");
	//	scanf("%d", &no);
	//	getchar(); //����ó��
	//	//�߸��� ��ȣ ó��
	//	if (no < 1 || no>5) {
	//		printf("�߸��ȹ�ȣ\n");
	//		continue;//�������
	//	}
	//	printf("������ %d\n", arr[no - 1]);
	//	printf("*************\n");
	//	printf("����(q)?");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//} while (quit !='q');

	////�׽�Ʈ ��
	//int grade[3] = { 20,50,30 };
	//char num[2];
	//int newnum;
	//while (1) {
	//	printf("number 1~%d(q:stop)? :", 3);
	//	scanf("%s", num);
	//	
	//}

	//�Ǻ���ġ�� ���� ���ϱ�
	//0 1 1 2 3 5 8 13 ......
	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i < 20;i++) {
		fibo[i]=fibo[i - 2] + fibo[i - 1];
	}
	//���
	for (int i = 0; i < 20; i++) {
		printf(" %d", fibo[i]);
	}






	return 0;
}