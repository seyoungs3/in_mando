#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int* FindABC(char *str1, char *str2, char c)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int count = 0;
	
	for (int i = 0; i < len1; i++)
	{
		if (str1[i] == c)
		{
			count++;
		}
		
	}
	for (int i = 0; i < len2; i++)
	{
		if (str2[i] == c)
		{
			count++;
		}
		

	}

	int arr[3] = { acount, bcount, ccount };

	return arr;

}


int main()
{	
	char s1[100];
	char s2[100];

	scanf("%s", s1);
	scanf("%s", s2);

	int answer[3];
	answer = FindABC(s1, s2);
	
	for (int i = 0; i < 3; i++)
	{
		printf("%c:%d", 'A' + i, answer[i]);
	}

	return 0;
}