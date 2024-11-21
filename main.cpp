#include <iostream>
using namespace std;

int main()
{
    cout << char(201);
    for (int i = 0; i <= 98; i++)
    {
        cout << (char)205;
    }
    cout << (char)187 << endl;
    cout << (char)186;
    for (int i = 0; i <= ((97 / 2) - (12 / 2)); i++)
        cout << " ";
    cout << "Vremena goda";
    for (int i = 0; i <= ((98 / 2) - (12 / 2)); i++)
        cout << " ";

    cout << (char)186 << endl;
    cout << (char)204;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i <= ((98 - 5) / 4); i++)
        {
            cout << (char)205;
        }
        cout << (j < 3 ? (char)203 : (char)185);
    }
    cout << endl;
    cout << (char)186;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < (((((98 - 5) / 4) - (j == 1 ? 5 : 4)) / 2) + 1); i++)
        {
            cout << " ";
        }
        cout << (j == 0 ? "Zima" : j == 1 ? "Vesna" : j == 2 ? "Leto" : "Osen");
        for (int i = 0; i < (((((98 - 5) / 4) - (j == 1 ? 5 : 4)) / 2) + (j == 1 ? 0 : 1)); i++)
        {
            cout << " ";
        }
        cout << (char)186;
    }
    cout << endl;

    cout << (char)200;
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i <= ((98 - 5) / 4); i++)
        {
            cout << (char)205;
        }
        cout << (j < 3 ? (char)202 : (char)188);
    }
    cout << endl;


    return 0;
}