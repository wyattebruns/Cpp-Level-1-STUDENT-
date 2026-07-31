#include <iostream>
using namespace std;
#include <string>
#include <cmath>

float addition (float x, float y) {
  return x + y;
}


float subtraction (float x, float y) {
  return x - y;
}

float avrage (float x, float y) {
  return (x + y)/2;
}

float power (float x, float y) {
  float power_answer;
  power_answer = 1;



 for (int i = 0; i < y; i++) {
    power_answer= power_answer * x;
    
 }
  return power_answer ;
}

int main() 
{
    string operation;
    float number_one;
    float number_two;
    float final_answer;


    cout << "Select a operation (addition, subtraction, avrage, or power)" << endl;
    cin >> operation;
    cout << "Choose two numbers you want to use (1 number at a time)"<< endl;
    cin >> number_one;
    cin >> number_two;
    
   if(operation== "addition"){
    final_answer= addition(number_one, number_two);
   }
   
    else if( operation== "subtraction"){
        final_answer= subtraction(number_one,number_two);
    }
    
    else if(operation== "avrage"){
        final_answer=avrage(number_one,number_two);
    }
    else if (operation== "power"){
        final_answer= power(number_one,number_two);
    }

    cout << final_answer;
    
    return 0;
}


https://onecompiler.com/cpp/44wawm82z
