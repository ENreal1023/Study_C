#include <stdio.h>
// ������ ������ �Է�
int main(void)
{

	printf("������ ũ�⸦ ���¹� : %d����Ʈ\n", sizeof(int));

	int a;
	int b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	// ������ ���
	printf("������ a�� �� : %d\n", a);
	printf("������ b�� �� : %d\n", b);
	printf("������ c�� �� : %d\n", c);
	printf("������ da�� �� : %.1lf\n", da);
	printf("������ ch�� �� : %c\n", ch);



	// -------- �������� ������ ���� --------

	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ������ ��� : %d\n", sh);
	printf("int�� ������ ��� : %d\n", in);
	printf("long�� ������ ��� : %d\n", ln);
	printf("long�� ������ ��� : %d\n", ln);
	printf("long long�� ������ ��� : %lld\n", lln);

	// -------- unsigned ��? --------

	unsigned int a1;
	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);


	return 0;
}