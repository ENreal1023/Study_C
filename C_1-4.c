#include <stdio.h>
// 변수를 데이터 입력
int main(void)
{
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

	return 0;
}