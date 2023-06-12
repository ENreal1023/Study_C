#include <stdio.h>
// 정수와 실수의 출력
int main(void)
{
	
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);

	//상수와 데이터 표현 방법

	printf("%d\n", 12); // 그냥 12다
	printf("%d\n", 014); // 014는 8진수로 12라는 뜻이다
	printf("%d\n", 0xc); // 0xc는 16진수로 12라는 뜻이다

	//상수와 데이터 표현 방법

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);




	return 0;
}