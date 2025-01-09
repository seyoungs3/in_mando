// 두개 이상의 값을 리턴하고 싶을 때
// 방법 1 포인터 사용
#include <stdio.h>

//void abc(int *p1, int *p2)
//{
//	int t1 = 10;
//	int t2 = 20;
//
//	*p1 = t1 + t2;
//	*p2 = t1 * t2;
//}
//
//int main()
//{
//	int S, M;
//	abc(&S, &M);
//	return 0;
//}

// 방법2 배열 사용

void abc(int arr[2])
{
	int t1 = 10;
	int t2 = 20;

	arr[0] = t1 + t2;
	arr[1] = t1 * t2;
}

int main()
{
	int S, M;
	int arr[2] = { 0 };
	abc(arr);

	return 0;
}

// 방법 3 구조체 사용

//typedef struct Node {
//	int a;
//	int b;
//}Node;
//
//void abc(int arr[2])
//{
//	int t1 = 10;
//	int t2 = 20;
//
//	arr[0] = t1 + t2;
//	arr[1] = t1 * t2;
//}
//
//int main()
//{
//	int S, M;
//	int arr[2];
//	abc();
//	return 0;
//}