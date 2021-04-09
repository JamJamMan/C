#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문 : for
	//int i; //반복할 변수
	//for (i=10;i<20;i+=2) {   // 1;2;4 순서 3은 아래 printf 먼저 시행
	//	//1은 1번만 시행
	//	printf("%d\n", i);
	//}

	//구구단을 출력
	//int b;
	//printf("몇 단?");
	//scanf("%d", &b);
	//for (int a = 1; a < 10; a++) {
	//	printf("%d * %d = %d\n",b, a, b * a);
	//}

	//while 로
	//int b;
	//do {
	//printf("몇 단?");
	//scanf("%d", &b);
	//if (b!=0)
	//	for (int a = 1; a < 10; a++) {
	//		printf("%d * %d = %d\n",b, a, b * a);
	//	}
	//} while (b != 0);

	//이중 for
	//for (int i = 2; i < 10; i++) {
	//	printf("-----%d단-----\n",i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j,i*j);
	//	}

	//3중 for
	//for (int i = 0; i < 10; i++){
	//	for (int j = 0; j < 10; j++)
	//		for (int k = 0; k < 10; k++)
	//			printf("%d %d %d\n", i, j, k);
	//}

	//1~100까지의 합
	//예) 1부터 100까지의 합은 5050 입니다.
	//int sum=0;
	//for (int a = 1; a < 101; a++) {
	//	sum += a;
	//}
	//printf("1부터 100까지의 합은 %d 입니다.\n", sum);



	//1부터 입력 받은 수까지의 합 
	//예) 1부터 몇까지 더할까요? 50 
	//1부터 50까지의 합은 1275 입니다.
	//int a, sum = 0;
	//printf("몇까지 더할까요?");
	//scanf("%d", &a);
	//for (int b = 1; b < a + 1; b++) { //b는 for의 지역변수로 {}바깥에 사용불가
	//	sum += b;
	//}
	//printf("1부터 %d까지의 합은 %d입니다.\n", a, sum);
	////printf("b의 현재값 : %d\n", b);//b 사용불가

	//실습) 두 정수를 입력받아 큰 수에서 작은 수를 빼라
	//0을 입력하면 종료 반복횟수 10번
	//int a, b;
	//for (int c = 0; c<10; c++) {
	//	printf("두 수를 입력하세요.");
	//	scanf("%d %d", &a, &b);
	//	if (a > b)
	//		printf("첫번째가 더 크고 결과는 %d입니다.", a - b);
	//	else if (a < b)
	//		printf("두번째가 더 크고 결과는 %d입니다.", b - a);
	//	else
	//		printf("두 수는 같습니다.");

	//int a, b;
	//for (int c = 0; c < 10; c++) {
	//	printf("두 수를 입력하세요.");
	//	scanf("%d", &a);
	//	if (a == 0) break;
	//	scanf("%d", &b);
	//	if (a > b)	printf("첫번째가 더 크고 결과는 %d입니다.\n", a - b);
	//	else if (a < b) printf("두번째가 더 크고 결과는 %d입니다.\n", b - a);
	//	else printf("두 수는 같습니다.\n");

	//별찍기 1
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//별찍기 2
	//for (int i = 0; i < 7; i++) {
	//	for (int j = 7; j > i; j--) {
	//		printf("*");
	//}
	//printf("\n");
	//}

	//별찍기 3
	//for (int i = 0; i < 7; i++) {
	//	//공백출력
	//	for (int j = 7; j > i; j--) {
	//		printf(" ");
	//	}
	//	//별출력
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//			
	//		}
	//	printf("\n");
	//}

	//별찍기 4
	//for (int i = 0; i < 7; i++) {
	//	//공백
	//	for (int j = 7; j > i; j--) {
	//		printf(" ");
	//	}
	//	//별
	//	for (int j = 0; j < i + 1; j++) {
	//		printf("*");		
	//	}
	//	for (int j = 0; j < i; j++ ) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	//별찍기4 답
	for (int i = 0; i < 7; i++) {
		//공백출력
		for (int j = 0; j < 7-i; j++) {
			printf(" ");
		}
		//별출력
		for (int j = 0; j < (i*2)+1; j++) {
			printf("*");
				
			}
		printf("\n");
	}



	return 0;
}