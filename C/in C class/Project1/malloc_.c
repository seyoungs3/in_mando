// 잠깐 쓰는 변수는 동적할당으로 효율성을 높힌다.
// stack영역은 변수명으로 접근 가능
// heap영역은 변수명이 없어 주소값으로 접근 해야 한다. -> 포인터
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// int 타입
	/*int* p = (int*)malloc(sizeof(int));
	scanf("%d", p);
	printf("%d", *p);
	free(p);*/

	// char 타입
	/*char* p = (char*)malloc(sizeof(char) * 11);
	scanf("%s", p);
	printf("%s", p);*/

	// 여러 문장 입력받기1 - 이중 포인터 이용
	char** str = (char**)malloc(sizeof(char*) * 3); // 포인터 사이즈: 8바이트, 8*3 = 24바이트
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

	
	


	// 여러 문장 입력받기2 - 배열 포인터 이용
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