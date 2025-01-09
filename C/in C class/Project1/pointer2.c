// 배열 포인터
// int (*p)[3] = &vect[0][0]

//#include <stdio.h>
//// void abc(int vect[2][3])
//void abc(int (*p)[3])
//{
//	printf("%d", p[0][1]);
//}
//
//int main()
//{
//	int vect[2][3] = { 2,3,4,5,6,7 };
//	abc(vect); //abc(&vect[0][0])
//
//	return 0;
//}

// 이중 포인터
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** r = &p;
//	return 0;
//}

// 구조체 포인터

#include <stdio.h>

typedef struct Node {
	int a;
	int b;
}Node;

void abc()
{

}

int main()
{
	Node t = { 3,4 };
	Node* p = &t;
	p->a = 13; //(*p).a = 13;

	return 0;
}