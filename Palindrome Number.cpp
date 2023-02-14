// Given an integer x, return true if x is a palindrome, and false otherwise.
#include <iostream>
using namespace std;

void Irasymas(int& skaicius)
{
    cout << "skaicius - ";
    cin >> skaicius;
}

int Skaiciavimas(int& skaicius, int& kipras)
{
    kipras = skaicius;
    kipras = kipras - skaicius / 10 * 10;
    while (skaicius > 9)
    {
        skaicius = skaicius / 10;
    }
    return kipras, skaicius;
}

int main()
{
    int skaicius;
    int kipras;
    Irasymas(skaicius);
    Skaiciavimas(skaicius, kipras);
    if (skaicius == kipras)
        cout << "Taip, sis skaicius yra palindromas!";
    else
        cout << "Ne, sis skaius nera palindromas...";
    return 0;
}