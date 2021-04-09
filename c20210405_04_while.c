#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//반복문 : while
	//while (1) { //1 트루
	//	printf("c!!!");
	//}

	//break 반복문 탈출
	//int cnt = 0;
	//while (1) { //1:true, 0:false
	//	cnt++;//cnt += 1;//c=c+1;
	//	printf("c!!! %d번\n", cnt);
	//	if (cnt > 10 - 1) break;
		//printf("c!!! %d번\n", cnt+1);
		//cnt++;//cnt += 1;//c=c+1;
		//if (cnt > 9) break;


	//}
	//1~10까지의 합
	//int a=0, sum=0;
	//while (a<10) {
	//	//printf("%d\n",++a);
	//	sum += ++a;// <-----   a++; sum += a;
	//}
	//printf("합계:%d\n", sum);

	//합이 2000을 넘는 정수와 그 합을 구하라
	//int a=0, b=0;
	//while (b<2000) {
	//	//printf("%d\n",++a);
	//	a++;
	//	b += a;

	//}
	//printf("정수:%d합계:%d\n",a, b);

	//실습) 1~20까지의 수 중 3의 배수만 출력
	//int a=3;
	//while (a < 20) {
	//	printf("%d", a);
	//	a += 3
	//}

	//2
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	printf("%d", 3);
	//}
	//int a = 0;
	//while (1) {
	//	a += 3;
	//	if (a > 20) break;
	//	printf("%d", 3);
	//}
	
	//continue:계속 1~10짝수만 출력
	int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue;
		printf("%d\n", a); 
	}





}