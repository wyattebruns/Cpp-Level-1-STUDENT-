#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

float earth_mars(float weight) { return weight * 0.38; }
float earth_jupiter(float weight) { return weight * 2.5; }
float mars_earth(float weight) { return weight * 2.63; }
float mars_jupiter(float weight) { return weight * 6.68; }
float jupiter_earth(float weight) { return weight * .4; }
float jupiter_mars(float weight) { return weight * .15; }


int main() 
{
    float weight_on_planet;
    string planet_one;
    string planet_two;



    cout << "What planet are you starting on?\n";
   
    cin >> planet_one;
    
    transform(planet_one.begin(), planet_one.end(), planet_one.begin(), [](unsigned char c){ return tolower(c); });
    
    cout << "What is your weight?\n";
   
    cin >> weight_on_planet;
   
    cout << "What planet do you want to go to?\n";
   
    cin >> planet_two;
   
    transform(planet_two.begin(), planet_two.end(), planet_two.begin(), [](unsigned char c){ return tolower(c); });
   
    float weight = 0;
    if(planet_one == "earth" && planet_two == "mars"){
        weight = earth_mars(weight_on_planet);
    } 
    
    else if(planet_one == "earth" && planet_two == "jupiter"){
        weight = earth_jupiter(weight_on_planet);
    } 
    
    else if(planet_one == "mars" && planet_two == "earth"){
        weight = mars_earth(weight_on_planet);
    } 
    
    else if(planet_one == "mars" && planet_two == "jupiter"){
        weight = mars_jupiter(weight_on_planet);
    } 
    
    else if(planet_one == "jupiter" && planet_two == "earth"){
        weight = jupiter_earth(weight_on_planet);
    } 
    
    else if(planet_one == "jupiter" && planet_two == "mars"){
        weight = jupiter_mars(weight_on_planet);
    } 
    
    else if(planet_one == planet_two){
        weight = weight_on_planet;
    }
    
    else {
        cout << "Invalid planet.\n";
        return 1;
    }
   
    cout << "Your weight on " << planet_two << " is " << weight << endl;
    return 0;
}

https://onecompiler.com/cpp/44xk2cayq
