#include <stdio.h>
// 특수한 연산자들
int main(void)
{
	// -------- 복합대입 연산자 --------

	int a1 = 10, b1 = 20, a, b;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a1 = %d, b1 = %d\n", a, b); // 30, 20
	printf("res = %d\n", res); // 60

	// -------- 복합대입 연산자 2 --------

	int a2 = 10, b2 = 20, res2;

	res2 = (a2 > b2) ? a2 : b2; // (조건식) ? (대입식-1) (대입식-2);
	printf("큰 값 : %d\n", res2);

	// -------- 비트식 연산자 --------

	int a3 = 10;
	int b3 = 12;

	printf("a3 & b3 : %d\n", a3 & b3);
	printf("a3 & b3 : %d\n", a3 ^ b3);
	printf("a3 & b3 : %d\n", a3 | b3);
	printf("~a3 : %d\n", ~a3);
	printf("a3 << 1 : %d\n", a3 << b3);
	printf("a3 >> 2 : %d\n", a3 >> b3);

	return 0;
}