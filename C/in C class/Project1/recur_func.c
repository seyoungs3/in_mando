// ����Լ�


// n���� �ֻ����� ������ ��, ���� �� �ִ� ��� �ֻ��� ����

#include <stdio.h>
int n;
int arr[10];
void abc(int level)
{
	if (level == n)
	{
		for (int x = 0; x < n; x++)
		{
			printf("%d ", arr[x]);
		}
		printf("\n");
		return;
	}
	for (int x = 0; x < 6; x++)
	{
		arr[level] = x + 1;
		abc(level + 1);
	}
}

int main()
{
	scanf("%d", &n);
	abc(0);
	return 0;
}
