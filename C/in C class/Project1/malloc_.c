// ��� ���� ������ �����Ҵ����� ȿ������ ������.
// stack������ ���������� ���� ����
// heap������ �������� ���� �ּҰ����� ���� �ؾ� �Ѵ�. -> ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// int Ÿ��
	/*int* p = (int*)malloc(sizeof(int));
	scanf("%d", p);
	printf("%d", *p);
	free(p);*/

	// char Ÿ��
	/*char* p = (char*)malloc(sizeof(char) * 11);
	scanf("%s", p);
	printf("%s", p);*/

	// ���� ���� �Է¹ޱ�1 - ���� ������ �̿�
	char** str = (char**)malloc(sizeof(char*) * 3); // ������ ������: 8����Ʈ, 8*3 = 24����Ʈ
	for (int i = 0; i < 3; i++)
	{
		str[i] = (char*)malloc(sizeof(char) * 3);
	}

	for (int i = 0; i < 3; i++)
	{
		scanf("%s", str[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%s", str[i]);
	}

	
	


	// ���� ���� �Է¹ޱ�2 - �迭 ������ �̿�
	char(* st)[11] = (char(*)[11])malloc(sizeof(char) * 11 * 3);
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", st[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", st[i]);
	}

	return 0;
}