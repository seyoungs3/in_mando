#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//// 전치 연산자, 후치 연산자
	//int a = 3;
	//int b = 5;

	//b = ++a;
	//printf("%d %d\n", a, b); // 4 4

	//b = a++;
	//printf("%d %d", a, b); // 5 4

	//return 0;

	

	/*int a, b;
	
	scanf("%d %d", &a, &b);

	int val;
	val = (a < b) ? a : b;

	printf("%d", val);*/

	//int x;
	//for (int x = 1; x < 4; x++) {
	//	printf("%d ", x); // 1 2 3
	//}
	//printf("%d", x); // 4
	
	/*for (int i = 0; i < 4; i++) {
		printf("#");
	}*/

	//for (int i = 0; i < 6; i++) {
	//	if (i == 3) {
	//		printf("\n");
	//	}
	//	printf("#");
	//}

	/*for (int i = 2; i < 6; i++) {
		printf("%d\n", i);
	}*/

	//for (int i = 1; i <= 8; i++) {
	//	printf("%d", i);
	//	if (i == 4) {
	//		printf("\n");
	//	}
	//}


	/*for (int i = 1; i <= 4; i++) {
		printf("%d %d\n", i, i + 4);
	}*/

	//for (int i = 1; i <= 4; i++) {
	//	printf("%d %d %d\n", i, i + 1, i + 2);
	//}

	/*int a, b;
	scanf("%d %d", &a, &b);
	printf("%d ", (a < b) ? a : b);
	printf("%d", (a > b) ? a : b);*/

	//int a;
	//scanf("%d", &a);
	//for (int i = 1; i <= a; i++) {
	//	if (i % 2 == 1) {
	//		printf("%d ", i);
	//	}
	//}

	// 배열

	/*int arr[4];
	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}*/

	//int arr[5] = { 1,2,3,4,5 }; // 하드코딩
	//int vect[3] = {1,}; // 남는 메모리는 0으로 초기화, **배열 초기화 방법**

	//int brr[1000] = {0}
	
	// 배열 원소의 합
	/*int arr[6] = { 5,4,3,6,2,4 };
	int sum = 0;

	for (int i = 0; i < 6; i++) {
		sum += arr[i];
	}

	printf("%d", sum);*/

	//int arr[6] = { 5,3,4,2,3,6 };

	//int cnt = 0;
	//for (int i = 0; i < 6; i++) {
	//	if (arr[i] % 2 == 0) {
	//		cnt++;
	//	}
	//}
	//
	//printf("%d", cnt);
	
	//int a = 65;
	//char b = 'A';

	//printf("%c", b); // A
	//printf("%d", b); // 65
	//printf("%c", a); // A


	//char a, b;
	//char c, d;
	//scanf("%c %c", &a, &b);  // A B
	//scanf(" %c %c", &c, &d);  // C D

	//printf("%c %c %c %c", a, b, c, d); // scanf에서 엔터도 입력을 받아서 D가 출력이 안됨

//char arr[4] = { 'A', 'B', 'C', 'D' };
	//char brr[5] = { "ABCD" }; // Null 때문에 배열의 크기 = 문자크기 + 1

	//for (int i = 0; i < 4; i++) {
	//	printf("%c ", arr[i]);
	//}

	//printf("%s", brr);
	
	/*int a = 65;
	char b = (char)a;
	char c = 'D';
	printf("%c", b);

	char ans;
	ans = c - 'A' + 'a';
	printf("%c", ans);*/

	/*char a = '3';
	int n = a - '0';
	printf("%d", n);*/

	//char arr[6];

	//for (int i = 5; i >= 0; i--) {
	//	arr[i] = 'C' + i;
	//}

	//for (int i = 5; i >= 0; i--) {
	//	printf("%c ", arr[i]);
	//}

	
	return 0;
}