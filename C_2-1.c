#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{

	int a = 0;
	scanf("%d", &a);
	printf("�Էµ� �� : %d\n", a);



	// -------- �Է� ���� --------

	int age;
	double height;

	printf("���̿� Ű�� �Է��Ͻÿ� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);

	// -------- �Է� ���� --------

	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf(" %c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);


	return 0;
}