
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
string metric_standard;
float distance;
float time;
float per_hour;

cout << "Do you want this is kilometers per hour or miles per hour" << endl;
cin >> metric_standard;

transform(metric_standard.begin(), metric_standard.end(), metric_standard.begin(), ::tolower);

cout << "How far did you travel (just say number of " << metric_standard <<")"<< endl;
cin >> distance;
   
cout << "How long did you travel for(just say number of minutes)" << endl;
   
cin >> time;

per_hour = distance/time;

cout << per_hour << " "<< metric_standard << " "<< "per hour";

    return 0;

}



https://onecompiler.com/cpp/44vhn25rf
