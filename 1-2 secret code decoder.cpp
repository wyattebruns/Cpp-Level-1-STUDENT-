#include <iostream>
using namespace std;

int main() 
{
   cout << "Type in the message you want to turn into a code!!! \n";
   string  Message;
   cin >> Message; 
   string encoded;
   string Answer;
   for( int i = 0; i < Message.length(); i++ ) {
    //cout << Message[i];
    char Letter = Message[i];
    Letter= Letter*2-50;
    encoded+= Letter;
   }
cout << encoded << "\n";
for(int i = 0; i < encoded.length(); i++) {
    char Letter = encoded[i];
    Letter = (Letter + 50) / 2;
    Answer += Letter;
}
   
   cout << Answer;
    return 0;
}

https://onecompiler.com/cpp#draft-2t5y

