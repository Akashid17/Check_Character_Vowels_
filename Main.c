
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowels(char ch)
{
	if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||
		ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter Character\n");
	scanf("%c",&cValue);

	bRet = CheckVowels(cValue);

	if(bRet == TRUE)
	{
		printf("Character is Vowel\n");
	}
	else
	{
		printf("Character is Not Vowel\n");
	}

	return 0;
}