#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float balance;
    float price;
    int items_bought;
  
  items_bought = 0;

    cout << "Enter starting amount of money $";
    cin >> balance;

    cout << "Enter item prices" << "\n";

    while (balance > 0) {
        cout << "Item price: $";
        cin >> price;

        if (balance <= 0) {
            break;
        }
        else if ( balance - price <0) {
            cout << "Choose another item" << "\n";
        }
        else {
            balance -= price; items_bought ++;
            }
        cout << "Remaining balance: $" << balance << "\n";
    }

    cout << "Final remaining balance: $" << balance << "\n" << "you bought " << items_bought << " items";
    return 0;
}


https://onecompiler.com/cpp/44uujjved
