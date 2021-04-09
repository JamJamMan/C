#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	////문자열의 포인터
	//char str[] = "happy";
	////str = "angry"; //str은 상수 변경 불가
	//char* p = str;
	//printf("%s\n", p);

	//p = "python";
	//puts(p);//문자열전용함수

	//실습) 이름을 입력 받고 출력
	char str[4];
	char* p = str;
	scanf("%c", *p);
	

}