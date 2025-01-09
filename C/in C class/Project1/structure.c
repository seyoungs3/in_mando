// 구조체
// 나만의 타입을 만드는 것

// typedef는 타입 이름 변경 : struct Node를 Node라고만 해도 된당 ㅎ

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
	struct Node t; // typedef 덕분에 Node t;로 쓸 수 있음
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