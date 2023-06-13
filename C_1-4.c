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


	return 0;
}