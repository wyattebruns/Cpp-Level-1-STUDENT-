#include <iostream>
using namespace std;

int main()
{
    int size = 5;

    for (int i = 0; i < size + 2; i++)
    {
        for (int j = 0; j < size + 3; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
                cout << "# ";
            else
                cout << "  ";
        }
        cout << "\n";
    }

    return 0;
}


https://onecompiler.com/cpp/44tsd4h4k
