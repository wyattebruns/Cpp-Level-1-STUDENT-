#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string starting;
    string ending;
    float money;
    float final;
    float conversion_rate = 1.0;

    cout << "What currency do you want to convert? (usd/pound/peso)" << endl;
    cin >> starting;

    transform(starting.begin(), starting.end(), starting.begin(), ::tolower);

    cout << "Enter the money amount: " << endl;
    cin >> money;

   cout << "what currency do you want to convert to? (usd/pound/peso)" << endl;
   cin >> ending;

transform(ending.begin(), ending.end(), ending.begin(), ::tolower);


    if (ending == "usd" && starting == "pound") {
        conversion_rate = 1.33;
    } 
    else if (ending == "pound" && starting == "usd") {
        conversion_rate = 0.75;
    }
    else if (ending == "peso" && starting == "usd"){
        conversion_rate = 17.543;
    }
    else if (ending == "peso" && starting == "pound"){
        conversion_rate = 23.255;
    }
    else if (ending == "usd" && starting == "peso"){
    conversion_rate = 0.057;
    }
    else if (ending == "pound" && starting == "peso"){
    conversion_rate = 0.043;
    }

    final = money * conversion_rate;

    cout << final;

    return 0;
}



https://onecompiler.com/cpp/44v5msatx
