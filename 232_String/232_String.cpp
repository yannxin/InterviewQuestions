// 232_String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	char str1[] = "Hello world";
	char str2[] = "Hello world";

	char* str3 = "Hello world";
	char* str4 = "Hello world";

	char* str5 = NULL;
	char* str6 = NULL;
	str5 = "Hello world";
	str6 = "Hello world";

	if (str1 == str2)
		printf("Str1 and str2 are same.\n");
	else
		printf("Str1 and str2 are not same.\n");

		if (str3 == str4)
		printf("Str3 and str4 are same.\n");
	else
		printf("Str3 and str4 are not same.\n");

		if (str5 == str6)
		printf("Str5 and str6 are same.\n");
	else
		printf("Str5 and str6 are not same.\n");
	return 0;
}

