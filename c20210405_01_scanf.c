#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위해서
#include <stdio.h>

int main(void) {
	//입력함수
	//정수형 입력받기
	//int a;
	//printf("정수는?");
	//scanf("%d",&a); //a의 주소
	//printf("입력한값 : %d 주소 : %p\n", a,&a);

	//실수형 입력받기
	//float f; //4바이트
	//double d; //8바이트
	//printf("float 실수는?");
	//scanf("%f", &f);
	//printf("double 실수는?");
	//scanf("%lf", &d); //포맷문자 double 일경우 %lf
	//printf("입력한값\n  %f %p\n %f %p\n", f,&f, d, &d);

	//문자형 입력받기
	//char c;
	//printf("문자는?");
	//scanf("%c", &c);
	//printf("입력한 값은 %c\n", c);

	//실습)두 정수를 입력받아서 합계를 출력
	//int a;
	//int b;
	//printf("두 정수는?");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d", a, b, a + b);

	//답
	//int a, b;
	//printf("첫번째수는?");
	//scanf("%d", &a);
	//printf("en번째수는?");
	//scanf("%d", &b);
	//printf("합계:%d\n", a + b);

	//실습)오늘의 날짜(년, 월, 일)를 입력 입력받아 출력
	//int year, month, day;
	//printf("년, 월, 일을 입력하세요.");
	//scanf("%d %d %d",&year,&month,&day);
	//printf("오늘은 %d년 %d월 %d일 입니다.", year, month, day);

	//두 개의 정수를 입력 받아 선술연산을 구하자
	//int a, b;
	//scanf("%d %d", &a, &b);
	//printf("입력 받은 값 : %d %d", a, b);
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

	////한문자를 읽어서 반환하는 함수
	//getchar(); //엔터를 처리하기 위한 목적
	//printf("sign?");
	//scanf("%d", &sign);


	//printf("%d %c %d = %d", a, sign, b, a + b);


	//실습) 물건 구입 후 거스름돈을 계산하여 출력
	//int amount, pay;
	//printf("물건값과 낸 값");
	//scanf("%d %d", &amount, &pay);
	//pay > amount ? 
	//	printf("거스름돈%d\n", pay - amount) : 
	//	amount>pay? printf("부족한금액%d\n", amount - pay):
	//	printf("계산완료\n");

	//실습 국어, 영어, 수학 점수를 입력 받아 합계와 평균 구하기
	//int a, b, c;
	//printf("국어점수는? ");
	//scanf("%d", &a);
	//printf("영어점수는? ");
	//scanf("%d", &b);
	//printf("수학점수는? ");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//printf("합계 %d\n 평균 %.2f\n", sum, sum / 3.);

	//rgb 값 만들기 unsigned int : 양수만
	int r, g, b;
	printf("red?"); scanf("%d", &r);
	printf("green?"); scanf("%d", &g);
	printf("blue?"); scanf("%d", &b);
	unsigned int rgb = r<<16 | g<<8 | b;
	printf("RGB: %0X\n",rgb); //X,x : 대소문자 구분












	return 0;
}