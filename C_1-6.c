#include <stdio.h>
// Ư���� �����ڵ�
int main(void)
{
	// -------- ���մ��� ������ --------

	int a1 = 10, b1 = 20, a, b;
	int res = 2;

	a += 20;
	res *= b + 10;

	printf("a1 = %d, b1 = %d\n", a, b); // 30, 20
	printf("res = %d\n", res); // 60

	// -------- ���մ��� ������ 2 --------

	int a2 = 10, b2 = 20, res2;

	res2 = (a2 > b2) ? a2 : b2; // (���ǽ�) ? (���Խ�-1) (���Խ�-2);
	printf("ū �� : %d\n", res2);

	// -------- ��Ʈ�� ������ --------

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