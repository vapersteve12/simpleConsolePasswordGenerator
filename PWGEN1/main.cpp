#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "Windows.h"

using namespace std;

int nrofpw = 0;
int nrofchars = 0;
int yesno = 0;

int main()
{
onReset:

	nrofpw = 0;
	nrofchars = 0;
	yesno = 0;

	setlocale(LC_ALL, "");
	srand(time(0));
	cout << "IoT jelsz� gener�tor" << endl;
	cout << endl;
	cout << "H�ny jesz�t gener�ljunk?" << endl;
	cin >> nrofpw;
	cout << "H�ny karaktert tartalmazzanak a jelszavak?" << endl;
	cin >> nrofchars;
	char abc [] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','0','1','2','3','4','5','6','7','8','9'};
	system("cls");
	int randomNum;
	for (int i = 0; i < nrofpw; i++)
	{
		for (int i = 0; i < nrofchars; i++)
		{
			randomNum = rand() % sizeof(abc);
			cout << abc[randomNum];
		}
		cout << endl;
	}
	cout << "�jra(0) / Kil�p(1) ?" << endl;
	cin >> yesno;
	switch (yesno)
	{
	case 0:
		main();
		break;
	case 1:
		system("exit");
		break;
	}
}
