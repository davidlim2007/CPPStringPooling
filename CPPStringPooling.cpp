// CPPStringPooling.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

void DoTest()
{
	const char* pStr1 = "Hello World";
	const char* pStr2 = "Hello World";

	printf("%d\r\n", (void*) pStr1);
	printf("%d\r\n", (void*) pStr2);
}

void DoTest2()
{
	const char* pStr1 = "ABCDEFG";
	const char* pStr2 = "ABCDEFG";

	printf("%d\r\n", (void*) pStr1);
	printf("%d\r\n", (void*) pStr2);
}

int main()
{
	DoTest();
    return 0;
}

