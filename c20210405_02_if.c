#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() { 
	//조건식이 참일때 수행할 문장 거짓일때 수행문장을 구별
	//int a = 10;
	//if (a > 0) 
	//	printf("양수\n");
	//
	//else 
	//	if (a < 0) 
	//		printf("음수\n");
	//	
	//	else 
	//		printf("양수도 음수도 아닙니다.\n");

	//표현을 간단하게
	//int a = 10;
	//if (a > 0)
	//	printf("양수\n");
	//else if (a < 0)
	//	printf("음수\n");
	//else
	//	printf("양수도 음수도 아닙니다.\n");




	//실습)두 정수를 입력받아 큰 수를 출력( 두 수는 같을수도 있다)
	//int a, b;
	//printf("두 수를 입력하세요.");
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//	printf("더 큰 수는 %d", a);
	//else if (a < b)
	//	printf("더 큰 수는 %d", b);
	//else
	//	printf("두 수는 같습니다.");

	//실습)점수를 입력 받아 학점을 출력하는 프로그램 작성
	//int a;
	//printf("점수를 입력하세요.");
	//scanf("%d", &a);

	//if (a > 100 || a < 0)
	//	printf("잘못된 점수입니다.");
	//else if (a >= 90)
	//	printf("학점은 A입니다.");
	//else if (a >= 80)
	//	printf("학점은 B입니다.");
	//else if (a >= 70)
	//	printf("학점은 C입니다.");
	//else if (a >= 60)
	//	printf("학점은 D입니다.");
	//else
	//	printf("학점은 F입니다.");

	//실습) 국, 영, 수 점수를 받아 총점과 평균을 출력
	//int a, b, c;
	//printf("국어 점수를 입력하세요.");
	//scanf("%d", &a);
	//printf("영어 점수를 입력하세요.");
	//scanf("%d", &b);
	//printf("수학 점수를 입력하세요.");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//if (a < 60 || b < 60 || c < 60)
	//	printf("과락입니다.\n");
	//else	
	//	printf("총점은 %d 입니다.\n평균은 %.2f 입니다.\n", sum, sum / 3.);

	//실습)윤년인지 알아보자
	//int year;
	//printf("연도를 입력하세요.");
	//scanf("%d", &year);
	//if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0){
	//	printf("%d년은 윤년입니다.\n", year); }
	//else {
	//	printf("%d년은 윤년이 아닙니다.\n", year);
	//}

	int a;
	printf("1.짜장면\n2.짬뽕\n3.설렁탕\n4.비빔밥\n5.피자\n6.스파게티\n메뉴를 선택하세요. : ");
	scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("중식 코너로 가세요.");
	else if (a == 3 || a == 4)
		printf("한식 코너로 가세요.");
	else if (a == 5 || a == 6)
		printf("양식 코너로 가세요.");
	else
		printf("메뉴를 다시 선택해주세요.");




	return 0;

}