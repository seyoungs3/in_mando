// ����ü
// ������ Ÿ���� ����� ��

// typedef�� Ÿ�� �̸� ���� : struct Node�� Node��� �ص� �ȴ� ��

#include <stdio.h>
typedef int minho;

typedef struct Node {
	int a;
	char b;
	int arr[3];
}Node;

struct Node abc(int n, char m, struct Node s)
{
	return s;
}

int main()
{
	struct Node t; // typedef ���п� Node t;�� �� �� ����
	t.a = 1;
	t.b = 'A';
	t.arr[0] = 5;

	struct Node k = { 4, 'B', {0,0,0} };
	int tt = 100;
	char tt2 = 'A';
	struct Node ret = abc(tt, tt2, (struct Node) { 3, 'T' });

	minho a = 1;
	printf("%d", a);

	return 0;
}