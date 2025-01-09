// 포인터
// 다른 변수의 주소값을 저장하는 변수

// 장점: 다른 변수의 값을 바꿀 수 있음

// 기억할 것 3가지!
// 1. 포인터 변수는 다른 변수의 주소값을 저장하는 변수다.
// 2. 역참조 p = &a, p는 a를 가리킨다
// 3. 능력쓰기 *p = 10, a에 10을 대입


// arr = &arr[0] = arr + 0
// 
// int *p = &arr[0]
// arr[1] = *(arr+1)
// arr[1] = *(p+1)
// arr[1] = p[1]
#include <stdio.h>

// void abc (int arr[3])
void abc(int *p) // arr은 배열처럼 보이지만 int타입 포인터 -> void abc(int *p)
{ 
	printf("%d\n", p[1]);
	printf("%d\n", *(p + 1));
}

int main()
{
	// 포인터 변수
	/*int a = 5;
	int* p = &a;
	*p = 100;
	

	return 0;*/

	// 포인터 배열
	//int* arr[3]; // arr은 포인터의 배열
	//int a = 5;
	//int b = 10;
	//int c = 20;
	//arr[0] = &a;
	//arr[1] = &b;
	//arr[2] = &c;

	// 배열 포인터
	// &arr[0] : 배열 전체의 대표 주소값
	// arr: 배열 전체의 대표 주소값

	int arr[3] = { 7,8,9 };
	abc(arr);
	// abc(&arr[0]);

}