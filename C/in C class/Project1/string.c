#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//char a = 'A';
	//char arr[10] = "asdf"; // string�� ������ �ڵ����� NULL�� ����, NULL�������� string���� �ν�
	//char brr[] = "asdf"; // ***�迭�� ũ�⸦ �������� �ʾƵ� ũ�⸦ �°� ������(5ĭ)
	//char crr[10];
	//// char drr[]; �̰� �ȵ�
	
	//char arr[10];  // �ִ� 9����
	//scanf("%s", arr); // &arr�ƴ�
	// scanf("%s", &arr[0]); ���� �ڵ�
	
	// ���ڿ��� ���� ���ϱ� - ����
	/*int len = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == NULL)
		{
			len = i;
			break;
		}
	}
	
	printf("%d", len);*/

	// ���ڿ��� ���� ���ϱ� - <string.h>, strlen(arr)
	//int len = strlen(arr); // ���ڿ� ���� �ּ� �Է�
	//printf("%d", len);

	// -----
	// �Է¹��� �� ���ڿ��� ���� ���ڿ����� �Ǻ��ϱ� - ����
	//char arr[10];
	//char brr[10];

	//scanf("%s", arr);
	//scanf("%s", brr);

	//int alen = strlen(arr);
	//int blen = strlen(brr);

	//int len = alen <= blen? alen:blen; // ***���� ������

	//int isSame = 1;
	//for (int i = 0; i < len; i++)
	//{
	//	if (arr[i] != brr[i])
	//	{
	//		isSame = 0;
	//		break;
	//	}
	//}
	//printf("%d", isSame);

	// ���ڿ� ���ϱ� - strcmp(a,b)
	/*char arr[10] = "asdf";
	char brr[10] = "apple";
	int answer = strcmp(arr, brr);*/ // ������ 0, �ٸ��� 1 or -1

	// ���ڿ� ���� - strcpy(b,a) : a�� b�� ����
	/*char arr[10] = "asdf";
	char brr[10];
	strcpy(brr,arr);*/

	// ���ڿ� �����ϱ� - strcat(a,b): a�� b�� ����
	/*char arr[10] = "BBQ";
	char brr[10] = "ADS";
	strcat(arr, brr);*/

	// ������ �ִ� ���ڿ� �Է¹ޱ� - fgets(arr, sizeof(arr), stdin)
	//char arr[20];
	////scanf("%s", arr);
	//fgets(arr, sizeof(arr), stdin);
	//printf("%s", arr);
	

	return 0;
}