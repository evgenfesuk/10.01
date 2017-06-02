#include "stdafx.h"
#include "iArray.h"
#include <iostream>

int count = 0;
int step = 0;
iArray::iArray()
{
	xArray = arr;
}

void iArray::get()
{
	
	std::cout << "data = " << *(xArray + step++) << std::endl;
}

void iArray::set()
{
	std::cout << "Input data\n";
	std::cin >> *(xArray+count++);
}

float iArray::average(int length)
{
	float av = 0, result;
	for (int i = 0; i < length; i++)
	{
		av += *(xArray + i);
	}
	result = av / length;
	return result;
}


iArray::~iArray()
{
}
