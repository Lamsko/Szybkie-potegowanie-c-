// z1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "potegowanie.h"

using namespace std;

int main()
{
	unsigned int n;
	long long a;

	cout << "Podaj podstawe: ";
	cin >> a;
	cout << "Podaj wykladnik: ";
	cin >> n;

	cout << a << " podniesione do potegi " << n << " rowna sie " << potegowanie(a, n) << endl;

	return 0;
}

