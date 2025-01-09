// 문장 입력받기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[3][21];

	for (int i = 0; i < 3; i++)
	{
		scanf("%s", arr[i]);
	}

	int maxlen = -21e8;
	for (int i = 0; i < 3; i++)
	{	
		int len = strlen(arr[i]);
		printf("%d글자\n", len);
		if ( len > maxlen)
		{
			maxlen = strlen(arr[i]);
		}
	}
	printf("%d", maxlen);
	

	

	return 0;
}