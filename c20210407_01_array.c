#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5
int main() {
	//배열 : array
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	//printf("%p %d\n", arr,sizeof(arr));
	//반복문을 이용해서 초기화
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%d", arr[i]);
	//}
	//실습)
	//double arr[3] = { 1.1,2.1,3.1 };
	//double arr[3];
	////배열의 크기 구하기
	//int size = sizeof(arr) / sizeof(double); // 24/8 3이 나옴
	//printf("사이즈:%d\n", size);

	////반복문을 이용해서 초기화
	//for (int i = 0; i < size; i++) {
	//	arr[i] = i+1.1;
	//}

	////반복문을 이용해서 출력
	//	for (int i = 0; i < size; i++) {
	//	printf("%.1f", arr[i]);
	//}

	//문자형 배열
	//char arr[6] = { 'p','y','t','h','o','n' }; //문자가 6개인걸 알기때문에 공백으로해도됨 -> arr[]
	//int size = sizeof(arr) / sizeof(char); //6/1
	//for (int i = 0; i < size; i++) {
	//	printf("%c", arr[i]);
	//}

	//배열값의 합
	//int arr[] = { 4,5,9,12,34 };//1개 4바이트
	//int sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//	printf("%d\n", arr[i]);
	//}
	//printf("%d\n", sum);

	//c는 정적배열
	//a에 값이 할당되는 시점은 런타임시
	
	//#define에 정의된 매크로 상수 : 컴파일되기 전에 대체
	//int arr[LEN], sum = 0;
	//int size = sizeof(arr) / sizeof(int);
	////입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("[%d]정수는?",i+1);
	//	scanf("%d", &arr[i]);
	//}
	////출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d %p\n", arr[i],&arr[i]);//%p, &arr[i] 주소도 출력
	//}
	////합계구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계 : %d\n", sum);

	//반 학생의 점수를 입력 받아 번호대로 배열에 저장, 반 번호 순서대로 출력
	//예시 1번 점수 : 90, 2번 점수 : 88
	//추가) 1) 합계와 평균 출력
	//2) 원하는 학생번호를 입력하면 해당학생의 점수를 출력

	//int arr[5],sum=0;
	//int size = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < size; i++) {
	//	printf("학생점수 입력 : ");
	//	scanf("%d", &arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수 : %d\n",i+1,arr[i]);
	//}
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("합계 : %d\n평균 : %.2f\n",sum,(double)sum/size);
	////검색
	//int no;
	//char quit; //종료변수
	//do {
	//	printf("검색번호는?");
	//	scanf("%d", &no);
	//	getchar(); //엔터처리
	//	//잘못된 번호 처리
	//	if (no < 1 || no>5) {
	//		printf("잘못된번호\n");
	//		continue;//계속진행
	//	}
	//	printf("점수는 %d\n", arr[no - 1]);
	//	printf("*************\n");
	//	printf("종료(q)?");
	//	scanf("%c", &quit);
	//	if (quit == 'q') break;
	//} while (quit !='q');

	////테스트 중
	//int grade[3] = { 20,50,30 };
	//char num[2];
	//int newnum;
	//while (1) {
	//	printf("number 1~%d(q:stop)? :", 3);
	//	scanf("%s", num);
	//	
	//}

	//피보나치의 수열 구하기
	//0 1 1 2 3 5 8 13 ......
	int fibo[20];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2; i < 20;i++) {
		fibo[i]=fibo[i - 2] + fibo[i - 1];
	}
	//출력
	for (int i = 0; i < 20; i++) {
		printf(" %d", fibo[i]);
	}






	return 0;
}