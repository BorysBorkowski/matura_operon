#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int plansza[10][10];
    fstream file ("plansza.txt");
    if(!file.is_open())
    {
        cout << "nope";
    }
    else
    {
        for(int i = 0; i < 10; ++i)
        {
            for(int j = 0; j < 10; ++j)
            {
                file >> plansza[i][j];
            }
        }
        for(int i = 0; i < 10; ++i)
        {
            a += plansza[i][1];
            a += plansza[9][i];
        }
        for(int i = 0; i < 10; ++i)
        {
            b += plansza[1][i];
            b += plansza[i][9];
        }
        cout << "a = " << a << '\n';
        cout << "b = " << b << '\n';
    }
    return 0;
}
