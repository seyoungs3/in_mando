#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1 swap하기

	/*int a;
	int b;
	int temp = 0;
	scanf("%d %d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d", a, b);*/

	//2 이중 for문

	/*for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("#");
		}
		printf("\n");
	}*/

	// 이중 for문 문제모음

	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("#");
		}
		printf("\n");
	}

	int cnt = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", cnt);
			cnt++;
		}
		printf("\n");
	}

	for (int i = 1; i <= 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d", i);
		}
		printf("\n");
	}

	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d %d\n", i, j);
		}
	}*/

	//3 while문

	/*int x = 1;
	while (x < 5)
	{
		printf("%d ", x);
		x++;
	}

	while (1)
	{
		printf("#");
	}*/

	// while문 예제
	
	/*int x = 1;
	while (x <= 3) {
		int y = 0;
		while (y < 4) {
			printf("#");
			y++;
		}
		printf("\n");
		x++;
	}*/

	// for문 무한루프

	/*for (;;)
	{
		printf("#");
	}*/

	//4 break
	// 가장 가까운 반복문만 꺼짐

	/*int val = 1;
	int flag = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (val == 7) {
				flag = 1;
				break;
			}
			printf("%d ", val);
			val++;
		}
		printf("\n");
		if (flag) {
			break;
		}
	}*/

	//5 2차원 배열
	
	/*int brr[2][4];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &brr[i][j]);
		}
	}
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}*/

	// 2차원 배열 연습문제
	
	/*int arr[3][4];
	int val = 1;
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = val;
			val++;
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/

	// 연습문제

	/*char arr[3][4];
	char val = 'A';
	
	for (int j = 3; j >= 0; j--)
	{
		for (int i = 2; i >= 0; i--)
		{
			arr[i][j] = val;
			val++;
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}*/
	
	/*int arr[3][3] = { 0 };

	int n;
	scanf("%d", &n);

	if (n % 2 == 1)
	{
		int val = 2;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == j)
				{
					arr[i][j] = val++;
				}
			}
		}
	}
	else if (n % 2 == 0)
	{
		int val = 2;
		for (int j = 3; j >= 0; j--)
		{
			for (int i = 0; i < 3; i++)
			{
				if (i + j == 2)
				{
					arr[i][j] = val++;
				}
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == 0)
			{
				printf(" ");
			}
			else
			{
				printf("%d", arr[i][j]);
			}
		}
		printf("\n");
	}*/

	/*char arr[5][5] = { 0 };
	for (int i = 0; i < 5; i++)
	{	
		for (int j = 0; j <= i; j++)
		{
			arr[i][j] = '*';
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}*/


	// flag

	/*int arr[5][5] = { 0 };
	int n;
	scanf("%d", &n);
	int val = 1;
	for (int j = 4; j >= 0; j--)
	{
		for (int i = 0; i < 5; i++)
		{
			arr[i][j] = val++;
		}
	}

	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] % n == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}

	if (flag)
	{
		printf("존재");
	}
	else
	{
		printf("없음");
	}*/
	

	
	

	return 0;
}