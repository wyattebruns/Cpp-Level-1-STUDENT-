#include <iostream>
using namespace std;

int main() 

{
float mass;
float thrust;
float weight;
float thrust_weight;
  
  
    cout << "What is your rockets mass" << "\n";
    cin >> mass;
     cout << "What is your rockets thrust in newton" << "\n";
   cin >> thrust;
   
   for(int i=0; i < mass; i++) {
    weight = mass * 9.8;
   }
   thrust_weight= thrust/weight;
  
cout<< "your weight is " << weight << "\n";
cout<< "your thrust to wight ratio is " << thrust_weight << "\n";

   if(thrust_weight > 1 && thrust_weight <= 4.9 ){
    cout << "Launching the rocket is risky";
   }

else if( thrust_weight >= 5) {
    cout << "Your rocket will fly";
}

else if( thrust_weight <= 1){
    cout <<" your rocket went no where";
}

    return 0;
}


https://onecompiler.com/cpp/44uf6tznz
