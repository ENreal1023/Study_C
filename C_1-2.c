#include <stdio.h>
// ������ �Ǽ��� ���
int main(void)
{
	
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);

	//����� ������ ǥ�� ���

	printf("%d\n", 12); // �׳� 12��
	printf("%d\n", 014); // 014�� 8������ 12��� ���̴�
	printf("%d\n", 0xc); // 0xc�� 16������ 12��� ���̴�

	//����� ������ ǥ�� ���

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);




	return 0;
}