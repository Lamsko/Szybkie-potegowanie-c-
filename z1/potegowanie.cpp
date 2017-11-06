#include "stdafx.h"
#include "potegowanie.h"


long long potegowanie(long long a, unsigned int n)
{
	long long wynik = 1;

	while (n > 0)
	{
		if (n % 2 == 1)
			wynik *= a;

		a *= a;
		n /= 2;
	}
	return wynik;
}
