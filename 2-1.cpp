#include <iostream>
using namespace std;

int main() 
{
  int age;  
  string dog_or_cat;
  int new_dog;
  int new_cat;
   
   cout << "Type in an age" << "\n";
    cin >> age;
    cout << " Would you like dog years or cat years" << "\n";
    cin >> dog_or_cat;
    
       while(true)
        
        if (dog_or_cat == "dog"|| dog_or_cat == "Dog"){
            new_dog = age * 7;
            cout << new_dog;
       break;
        }

        else if (dog_or_cat == "cat"|| dog_or_cat == "Cat"){
                new_cat = age * 15;
                cout << new_cat;
       break;
        }
        else {
 
 
    cout << "Please type cat or dog" << "\n";
   
    cin >> dog_or_cat;
}


    return 0;
}



https://onecompiler.com/cpp/44uf4c3p7
