#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�����ͺ��� �����ʹ� 4����Ʈ
	//int a = 10;
	//int * p = &a;
	//printf("a:%d %p\n", a,&a);
	//printf("p:%p %d\n", p,*p);


	//char c = '%';
	//char* p2 = &c;
	//printf("c:%c *p2:%c\n"c, *p2);
	//
	//double d = 3.14;
	//double* p3 = &d;
	//printf("d:%f %p\n", d, &d);
	//printf("*p3:%f\n", *p3);

	//float f = 5.55;
	//float* p4 = &f;
	//int a = 10, b = 20;
	//int* p = &a;   // int*p ; p=&a �� �Ȱ�����
	//printf("%d\n",*p);
	//p = &b;
	//printf("%d\n",*p);

	//a=10, b=20, c=30 �� �� base=100�� �� ������ ���غ��ÿ� ��, ���� a,b,c,�� ���� �� �� ������ ���

	//int a = 10, b = 20, c = 30, base = 100;
	//int* p;
	//p = &a;
	//*p = *p + base;
	//printf("a:%d\n",*p);
	//p = &b;
	//*p = *p + base;
	//printf("b:%d\n",*p);
	//p = &c;
	//*p = *p + base;
	//printf("c:%d\n", *p);

	//�迭�� ������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n", *p);
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	//�ݺ�������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i = 0; i < 3; i++) {
		//printf("%d\n", *(p + i));
		//printf("%d %d %d %d\n",*(p+i),*(arr+i),arr[i],p[i]);
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p,*arr);
	//	p++;
		//arr++; //�Ұ�
	//}

	//�ǽ� ������ �迭�� 'p','y','t','h','o','n'�� �����ϰ� ������ ������ �̿��Ͽ� �� ���ھ� ���
	//char arr[6] = { 'p', 'y', 't', 'h', 'o', 'n' };
	//char* p = &arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c",*(p+i));
	//
	//}

	//�Ǻ���ġ ������ �����͸� ����Ͽ� ��� 0 1 1 2 3 5 8 13
	int fibo[20];
	int* p = &fibo;
	*p = 0; p++;
	*p = 1; p++;
	for (int i = 2; i < 20; i++) {
		*p= *(p-2)+ *(p-1);
		p++;
	}
	p = fibo;//ó����ġ��
	for (int i = 0; i < 20; i++) {
		printf(" %d", fibo[i]);
		p++;
	}







	return 0;
}