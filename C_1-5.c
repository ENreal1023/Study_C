#include <stdio.h>

// �� ������ strcpy �� ����� �۵����� ������ ���
// ���ڿ� ���� [�迭]
int main(void)
{


	char fruit[6] = "apple";
	printf("%s", fruit);
	strcpy(fruit, "banana"); // fruit�� banana�� ����
	printf("%s", fruit);

	int income= 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.", tax);
	
	return 0;
}