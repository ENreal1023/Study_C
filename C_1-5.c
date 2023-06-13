#include <stdio.h>

// 위 문장은 strcpy 가 제대로 작동하지 않을때 사용
// 문자열 저장 [배열]
int main(void)
{


	char fruit[6] = "apple";
	printf("%s", fruit);
	strcpy(fruit, "banana"); // fruit에 banana를 복사
	printf("%s", fruit);

	int income= 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.", tax);
	
	return 0;
}