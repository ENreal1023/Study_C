#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{

	int a = 0;
	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);



	// -------- 입력 응용 --------

	int age;
	double height;

	printf("나이와 키를 입력하시오 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height);

	// -------- 입력 응용 --------

	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf(" %c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);


	return 0;
}