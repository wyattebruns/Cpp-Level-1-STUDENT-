#include <iostream>
using namespace std;

int main() 
{  
    int Feeling;
   
    cout << "How are you doing today 1-5" << "\n";
    cin >> Feeling;

    while (true) {
        if (Feeling == 1) {
            cout << "😭";
            break;
        }
        else if (Feeling == 2) {
            cout << "😓";
            break;
        }
        else if (Feeling == 3) {
            cout << "😐";
            break;
        }
        else if (Feeling == 4) {
            cout << "🙂";
            break;
        }
        else if (Feeling == 5) {
            cout << "😆";
            break;
        }
        else {
            cout << "You should follow instructions!!!" << "\n";
            cin >> Feeling;
        }
    }
    return 0;
}
https://onecompiler.com/cpp#draft-ccwx
