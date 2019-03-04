// test2_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

bool isCircle(unsigned long num);

int main()
{
	bool isc1 = isCircle(123455321);
	bool isc2 = isCircle(121);
	printf("isc1:%d,isc2:%d", isc1, isc2);
	return 0;
}

/*判断是否是回环数*/
bool isCircle(unsigned long num)
{
	char arr [10];
	_ltoa(num, arr, 10);
	int length = strlen(arr);
	for (int i = 0; i < length / 2; i++)
	{
		char headChar = arr[i];
		char tailChar = arr[length - i - 1];
		if (headChar != tailChar)
		{
			return false;
		}
	}
	return true;
}