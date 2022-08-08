#include "Passport.h"
#include "Visa.h"
using namespace std;
int main()
{
	Passport a;
	ForeignPassport b;
	Visa c;
	Visa g("Poland", "20.12.2019", "28.06.2024");
	b.AddVisa(c);
	for (int i = 0; i < 3; i++)
	{
		b.AddVisa(g);
	}
	b.Print();
}