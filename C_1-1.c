#include <stdio.h>
// C언어 printf 에 대해서
int main(void)
{
	
	printf("Be happy"); // 간단한 출력문
	printf("My friend"); // 결과는 이어져서 보기 불편함
	printf("\n "); // 줄바꿈 아래 자세한 사용법 나옴

	//-------------- 1차 개선 버전 --------------

	printf("\tBe happy"); // 간단한 출력문
	printf("\tMy friend"); // 결과는 이어져서 보기 불편함
	//하지만 이 코드는 맨 왼쪽 끝에 멀어저 보기 불편함

	//-------------- 2차 개선 버전 --------------

	printf("\n"); // \n은 엔터와 같은 역할을 함 이를 이용하면
	printf("Be happy"); 
	printf("\tMy friend"); // 해당 출력문에만 띄우기를 넣어 개선

	//-------------- 새로운 \ 연산자 --------------

	printf("\n"); 
	printf("Goot\bd\tchance\n");

	printf("Cow\rW\a\n");

	return 0;
}