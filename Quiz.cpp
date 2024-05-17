#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to display a question and get user's answer
bool askQuestion(const string& question, const string& correctAnswer) {
    string userAnswer;
    cout << question << endl;
    cout << "Your answer: ";
    cin >> userAnswer;

    // Convert both answers to lowercase for case-insensitive comparison
    transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(), ::tolower);
    transform(correctAnswer.begin(), correctAnswer.end(), correctAnswer.begin(), ::tolower);

    return userAnswer == correctAnswer;
}

int main() {
    int score = 0;

    // Questions and answers
    string questions[] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "What is the chemical symbol for water?"
    };

    string answers[] = {
        "paris",
        "mars",
        "h2o"
    };

    // Loop through questions
    for (int i = 0; i < 3; ++i) {
        if (askQuestion(questions[i], answers[i])) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
        }
    }

    cout << "Your final score is: " << score << "/3" << endl;

    return 0;
}
