#include <stdio.h>
// 변수를 데이터 입력
int main(void)
{

	printf("변수의 크기를 보는법 : %d바이트\n", sizeof(int));

	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	// 변수를 출력
	printf("변수의 a의 값 : %d\n", a);
	printf("변수의 b의 값 : %d\n", b);
	printf("변수의 c의 값 : %d\n", c);
	printf("변수의 da의 값 : %.1lf\n", da);
	printf("변수의 ch의 값 : %c\n", ch);


	// -------- 여러가지 정수형 변수 --------

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수를 출력 : %d\n", sh);
	printf("int형 변수를 출력 : %d\n", in);
	printf("long형 변수를 출력 : %d\n", ln);
	printf("long형 변수를 출력 : %d\n", ln);
	printf("long long형 변수를 출력 : %lld\n", lln);

	// -------- unsigned 란? --------

	unsigned int a1;
	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	// -------- 형변환 --------

	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // (double)을 사용해 a와 b의 값을 실수로 변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %1lf\n", res);

	a = (int)res; // (int)를 사용해 res의 값에서 정수 부분만 추림
	printf("(int) %.1lf의 결과 : %d\n", res, a);
	
	// -------- 복합대입 연산자 --------

	int a1 = 10, b1 = 20;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a1 = %d, b1 = %d\n", a, b); // 30, 20
	printf("res = %d\n", res); // 60


	return 0;
}