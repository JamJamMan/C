#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수
//자동초기화
//어디서든지 사용가능
//전역변수의 무분별한 선언은 신중, 프로그램의 복잡도가 증가, 메모리 사용 증가
int g;


void test() {
	//printf("a:%d\n", a);
	printf("g:%d\n", g);
}
int main() {
	//전역변수와 지역변수
	//지역변수 : 함수가 시작될때 생성, 함수가 종료되면 소멸
	int a = 10;
	printf("a:%d\n", a);
	//
	printf("g:%d\n", g);


	return 0;
}