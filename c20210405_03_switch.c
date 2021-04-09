#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//선택조건문 : switch ~ case
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자\n");
	//}




	//월의 마지막날 출력
//	int mon;
//	printf("달을 입력해 주세요.");
//	scanf("%d", &mon);
//		switch (mon) {
//	case 1 :
//	case 3 :
//	case 5 :
//	case 7 :
//	case 8 :
//	case 10 :
//	case 12 :
//		printf("%d월의 마지막 날은 31일입니다.", mon); break;
//	case 2 :
//		printf("%d월의 마지막 날은 28일입니다.", mon); break;
//	case 4 :
//	case 6 :
//	case 9 :
//	case 11 :
//		printf("%d월의 마지막 날은 30일입니다.", mon); break;
//	default:
//		printf("다시 입력해 주세요."); 
//}

	int a;
	printf("1.짜장면\n2.짬뽕\n3.설렁탕\n4.비빔밥\n5.피자\n6.스파게티\n메뉴를 선택하세요. : ");
	scanf("%d", &a);
	switch (a) {
	case 1 :
	case 2 :
		printf("중식코너로 가세요:"); break;
	case 3 :
	case 4 :
		printf("한식코너로 가세요:"); break;
	case 5 :
	case 6 :
		printf("양식코너로 가세요:"); break;
	default :
		printf("메뉴를 다시 선택하세요."); break;



	}













	return 0;



}