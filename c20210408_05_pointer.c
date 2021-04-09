#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터변수 포인터는 4바이트
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
	//int* p = &a;   // int*p ; p=&a 랑 똑같은것
	//printf("%d\n",*p);
	//p = &b;
	//printf("%d\n",*p);

	//a=10, b=20, c=30 일 때 base=100을 각 변수에 더해보시오 단, 변수 a,b,c,에 접근 할 때 포인터 사용

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

	//배열의 포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n", *p);
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	//반복문으로
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//for (int i = 0; i < 3; i++) {
		//printf("%d\n", *(p + i));
		//printf("%d %d %d %d\n",*(p+i),*(arr+i),arr[i],p[i]);
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d %d\n", *p,*arr);
	//	p++;
		//arr++; //불가
	//}

	//실습 문자형 배열에 'p','y','t','h','o','n'를 저장하고 포인터 변수를 이용하여 한 글자씩 출력
	//char arr[6] = { 'p', 'y', 't', 'h', 'o', 'n' };
	//char* p = &arr;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c",*(p+i));
	//
	//}

	//피보나치 수열을 포인터를 사용하여 출력 0 1 1 2 3 5 8 13
	int fibo[20];
	int* p = &fibo;
	*p = 0; p++;
	*p = 1; p++;
	for (int i = 2; i < 20; i++) {
		*p= *(p-2)+ *(p-1);
		p++;
	}
	p = fibo;//처음위치로
	for (int i = 0; i < 20; i++) {
		printf(" %d", fibo[i]);
		p++;
	}







	return 0;
}