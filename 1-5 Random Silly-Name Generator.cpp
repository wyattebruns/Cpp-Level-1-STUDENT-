#include <iostream>
using namespace std;

int main() 
{
   string nouns [] = {
    "Waffle", "Pancake", "Bread", "Pasta", "Scone"
   };
   
  string adj [] = {
    "Funny", "Awesome", "Cool", "Super"
  } ;
   
   string animals [] = {
    "Tiger", "Hippo", "Bird", "Zebra"
   };
   
    cout << "Your Funny Name" << "\n";
  
    srand(static_cast<unsigned int>(time(0)));
    
    int a1 = rand () % 4 ;
    int a2 = rand () %5;
    int a3 = rand () %4;
    
    cout << adj  [a1] << " ";
    cout << nouns  [a2 ] << " ";
    cout << animals  [a3];
    return 0;
}



https://onecompiler.com/cpp#draft-8ybg
