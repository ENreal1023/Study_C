#include <stdio.h>
// C��� printf �� ���ؼ�
int main(void)
{
	
	printf("Be happy"); // ������ ��¹�
	printf("My friend"); // ����� �̾����� ���� ������
	printf("\n "); // �ٹٲ� �Ʒ� �ڼ��� ���� ����

	//-------------- 1�� ���� ���� --------------

	printf("\tBe happy"); // ������ ��¹�
	printf("\tMy friend"); // ����� �̾����� ���� ������
	//������ �� �ڵ�� �� ���� ���� �־��� ���� ������

	//-------------- 2�� ���� ���� --------------

	printf("\n"); // \n�� ���Ϳ� ���� ������ �� �̸� �̿��ϸ�
	printf("Be happy"); 
	printf("\tMy friend"); // �ش� ��¹����� ���⸦ �־� ����

	//-------------- ���ο� \ ������ --------------

	printf("\n"); 
	printf("Goot\bd\tchance\n");

	printf("Cow\rW\a\n");

	return 0;
}