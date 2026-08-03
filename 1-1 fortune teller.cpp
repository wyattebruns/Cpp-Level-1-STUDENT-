#include <iostream>
#include <string>
using namespace std;

int main() 
{
   cout << "number \n";
   int number; 
   cin >> number; 
   cout << number << "\n";
  
   string favoriteColor;
   cout << "favoriteColor" << "\n";
   cin >> favoriteColor;
   cout << favoriteColor << "\n";
   
   string FavoriteAnimal;
   cout << "What is your favorite animal?" << "\n";
   cin >> FavoriteAnimal;
   cout << FavoriteAnimal << "\n";
    
    if (number > 1000) {
        cout << "You will get $1000\n";
    }

     if (number < 1000) {
        cout << "You do not have good luck.\n";
    }
    return 0;

https://onecompiler.com/cpp/44sg8mdrz
