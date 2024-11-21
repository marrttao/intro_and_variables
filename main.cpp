#include <iostream>
#include <Windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    cout << "Name\t   : ";
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\"Red Dead Redemption 2\"" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Avtor\t   : ";
    SetConsoleTextAttribute(hConsole, 5);
    cout << "\tRockstarGames" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Izdatelstvo:\t";
    cout << "Rockstar" << endl;
	SetConsoleTextAttribute(hConsole, 7);
    cout << "Hours to finish\t   : ";
    SetConsoleTextAttribute(hConsole, 9);
	cout << "65 hours" << endl;
    SetConsoleTextAttribute(hConsole, 7);

    return 0;
}
