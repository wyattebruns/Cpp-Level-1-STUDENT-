#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

//turns everything the user says into lowercase letters

string lowercase(string s) {
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });
    return s;
}

int main() {
   
   //storing the questions and answers in a vector
   
    vector<string> questions = {
        "What is the capital of France?",
        "What is 5 + 7?",
        "What color do you get when you mix red and white?",
        "What does H20 make?"
    };

    vector<string> answers = { "Paris", "12", "Pink","Water" };

    //to keep track of score
    
    int right_answer = 0;
    
    //creates a random seed to make a diffent random number every time
    
    srand((unsigned)time(nullptr));

    //it will only give quesions that have not been asked yet
    
    while (!questions.empty()) {
        int random = rand() % questions.size();

        //asks the question and the user answers

        cout << questions[random] << "\n";
        cout << "Your answer: ";
        string answer_;
        cin >> answer_;

       //turns answer into lowercase so that it will work with random capitalization
       
        if (lowercase(answer_) == lowercase(answers[random])) {
          
          //tell you if you are right or wrong
          
            cout << "Correct!\n";
            right_answer++;
        } else {
            cout << "Wrong!\n";
        }

       //removes the question(s) and answer(s)that have already been asked
       
        questions.erase(questions.begin() + random);
        answers.erase(answers.begin() + random);
    }

   //says how many you get right
   
    cout << "You got " << right_answer << " correct.\n";
    return 0;
}


https://onecompiler.com/cpp/44wvz3vqf
