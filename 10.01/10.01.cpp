// 10.01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "iArray.h"

using namespace std;

int main()
{
	iArray* item = new iArray;
	for (int i = 0; i < 10; i++)
	{
		item->set(); //item->get();
	}
	
	for (int i = 0; i < 10; i++)
	{
		item->get();
	}

	cout << "average = " << item->average(10) << endl;
	system("pause");
    return 0;
}

