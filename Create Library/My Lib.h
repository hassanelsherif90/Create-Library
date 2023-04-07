#pragma once

#include <iostream>

using namespace std;

namespace MyLib
{
	void Tset()
	{
		cout << "Hi, this is My First Function From Library" << endl;
	}

	int Sum2Numbers(int Number1, int Number2)
	{
		return Number1 + Number2;
	}
}