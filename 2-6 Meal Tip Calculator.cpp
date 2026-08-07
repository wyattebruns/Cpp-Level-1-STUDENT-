#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    float meal;
    float tax;
    float tip;
    float final_tip;
    float final_tax;
    float final_one;
    float final_two;
    char output[50];

    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    cout << "Katsuya" << endl;
    cout << "16542 Ventura Boulevard" << endl;
    cout << "Encino, CA 91436" << endl;
    cout << "(818)788-2396" << endl;

    datetime.tm_isdst = -1;
    strftime(output, 50, "%m/%d/%y", &datetime);
    cout << output << "\n";

    cout << "How much did you spend on your meal." << endl;
    cin >> meal;

    cout << "What is the tax rate in your city." << endl;
    cin >> tax;

    final_tax = meal * tax / 100;
    final_one = meal + final_tax;

    cout << "Meal " << meal << endl;
    cout << "Final Tax " << final_tax << endl;
    cout << "Subtotal " << final_one << endl;
    cout << endl;

    cout << "What percent do you want to tip." << endl;
    cin >> tip;

    final_tip = meal * tip / 100;
    cout << "Final Tip " << final_tip << endl;

    final_two = final_one + final_tip;
    cout << "Final Cost " << final_two << endl;

cout << endl;
cout << "Thank you and have a great day!";


    return 0;
}




https://onecompiler.com/cpp/44vtrm3v3
