#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
//	//do ~while
//	int a = -1;
//	do {
//		printf("%d\n", a);
//	} while (a > 0); //최소 한번은 실행

	//사용자에게 입력을 받아서 y이면 "뮤직플레이" 출력
	//char answer='y';
	//do {
	//	printf("뮤직을 플레이 할까요(y)?");
	//	scanf("%c", &answer);
	//	getchar(); //엔터값 처리
	//	printf("랄라라라라\n");
	//} while (answer == 'y');
	int a, b = 0;
	do {
		printf("정수를 입력하세요.");
		scanf("%d", &a);
		b +=a;
		

	} while (a != 0);
		printf("%d\n", b);




	return 0;
}