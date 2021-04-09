#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다
void voidTest() {
	printf("void함수\n");
}
//매개변수:한개, 반환값:없다
void voidTest2(int a) {
	printf("매개변수:%d\n",a);
}

void voidTest3(int a, int b) {
	printf("두 수의 합:%d\n", a + b);

}
//매개변수:반지름
//원의넓이를 출력해주는 기능
//함수의 이름 : area, 매개변수이름 : r(double)
//call by value 방식,   call by reference도 뭔지 알아야함 
void area(double r2) { //지역변수
	printf("원의넓이는 %.2f 입니다,", r2 * r2 * 3.14);//double 이니까 %f로 해야함
}
//매개변수:반지름(double)
//반환값:넓이(double)
//원의 넓이를 구해서 반환하는 함수
double areaReturn(double r) { //void는 리턴이 없을때 씀, 리턴 다음의 형을써줌 return 다음 double나옴
	double area = r * r * 3.14;
	return area; //반환값은 한개
}

//세 정수를 매개변수로 받아서 합을 반환하는함수
int aaa(int a, int b, int c) {

	return a+b+c;
}

//두개의 정수를 매개변수로 받아서 나눈 실수의 값을 반환하는 함수
double bbb(int a, int b) {

	return (double)a / b;
}

int max(int a, int b) {
	int m;
	if (a > b)
		m = a;
	else if (b > a)
		m = b;
	else
		m = 0; //두수가 같을 때는 0을 리턴

	return m;//return은 함수의 종료
}

//진입점함수
int main() {
	//함수
	//voidTest(); //위의 보이드 함수를 실행
	//voidTest2(10);
	//voidTest3(20,30);
	//double r;
	//printf("반지름은?");
	//scanf("%lf", &r); //double을 읽을때는 %lf
	//area(r);
	// 
	//double r = 3.6;
	//double rValue = areaReturn(r);
	//printf("넓이:%.2f", rValue);
	//
	//printf("합계:%d\n", aaa(10, 20, 30));
	//
	//int a = 10, b = 3;
	//double d = bbb(a, b);
	//printf("나눈값:%.2f", d);
	//
	int a = 20, b = 20;
	int m = max(a, b);
	if (m != 0)
		printf("큰수는 %d\n", m);
	else
		printf("%d == %d\n", a, b);
	
	
	return 0;
}