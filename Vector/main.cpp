﻿#include <iostream>
#include "Vector.h"

using namespace std;



int main(int argc, char* argv[])
{
	Vector<int> v;
	v.insert(1);
	cout << v[0] << endl;
	system("pause");
	return 0;
}
