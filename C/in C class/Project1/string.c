#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//char a = 'A';
	//char arr[10] = "asdf"; // string의 끝에는 자동으로 NULL이 붙음, NULL전까지를 string으로 인식
	//char brr[] = "asdf"; // ***배열의 크기를 선언하지 않아도 크기를 맞게 피팅함(5칸)
	//char crr[10];
	//// char drr[]; 이건 안됨
	
	//char arr[10];  // 최대 9글자
	//scanf("%s", arr); // &arr아님
	// scanf("%s", &arr[0]); 같은 코드
	
	// 문자열의 길이 구하기 - 구현
	/*int len = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == NULL)
		{
			len = i;
			break;
		}
	}
	
	printf("%d", len);*/

	// 문자열의 길이 구하기 - <string.h>, strlen(arr)
	//int len = strlen(arr); // 문자열 시작 주소 입력
	//printf("%d", len);

	// -----
	// 입력받은 두 문자열이 같은 문자열인지 판별하기 - 구현
	//char arr[10];
	//char brr[10];

	//scanf("%s", arr);
	//scanf("%s", brr);

	//int alen = strlen(arr);
	//int blen = strlen(brr);

	//int len = alen <= blen? alen:blen; // ***조건 연산자

	//int isSame = 1;
	//for (int i = 0; i < len; i++)
	//{
	//	if (arr[i] != brr[i])
	//	{
	//		isSame = 0;
	//		break;
	//	}
	//}
	//printf("%d", isSame);

	// 문자열 비교하기 - strcmp(a,b)
	/*char arr[10] = "asdf";
	char brr[10] = "apple";
	int answer = strcmp(arr, brr);*/ // 같으면 0, 다르면 1 or -1

	// 문자열 복사 - strcpy(b,a) : a를 b에 복사
	/*char arr[10] = "asdf";
	char brr[10];
	strcpy(brr,arr);*/

	// 문자열 연결하기 - strcat(a,b): a에 b를 연결
	/*char arr[10] = "BBQ";
	char brr[10] = "ADS";
	strcat(arr, brr);*/

	// 공백이 있는 문자열 입력받기 - fgets(arr, sizeof(arr), stdin)
	//char arr[20];
	////scanf("%s", arr);
	//fgets(arr, sizeof(arr), stdin);
	//printf("%s", arr);
	

	return 0;
}