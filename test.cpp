#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{

    const unsigned char WHITE = 219;

    const unsigned char GRAY = 176;

    unsigned char ch;

    for (int count = 0; count < 80 * 25 - 1; count++)
    {
        Sleep(20);
        ch = WHITE;
        for (int j = 2; j < count; j++)
            if (count % j == 0)
            {
                ch = GRAY;
                break;
            }
        cout << ch;
    }



    return 0;
}