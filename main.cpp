#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



int main()
{
	SetConsoleTextAttribute(hConsole, 10);
	cout << "\"U lukomor'a dub zelenij," << endl;
	cout << " Zlataya zep na dupe tom," << endl;
	cout << " I dnem i nochju kot uchenij" << endl;
	cout << " vse hodit po cepi krugom\"" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	return 0;
}