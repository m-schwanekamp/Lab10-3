//Lab10-3
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int STUDENTS = 5;
const int QUIZZES = 3;
int quizTotal(int scores[STUDENTS][QUIZZES], int students);

int main() {
    string first_name;
    string last_name;
    int scores[STUDENTS][QUIZZES];
    string name;
    string names[STUDENTS];

    for (int i = 0; i < STUDENTS; i++) {
        cout << "Enter first and last name of student #" << (i + 1) << ": ";
        cin >> first_name >> last_name;
        names[i] = last_name + ", " + first_name;
    }


    for (int qz = 0; qz < QUIZZES; qz++) {
        for (int st = 0; st < STUDENTS; st++) {
            cout << "Quiz " << (qz + 1) << " score for " << names[st] << ": ";
            cin >> scores[st][qz];
        }
    }
    cout << endl;

    for (int qz = 0; qz < QUIZZES; qz++) {
        int sum = 0;
        for (int st = 0; st < STUDENTS; st++) {
            sum += scores[st][qz];
        }
        cout << "Quiz " << (qz + 1) << " average: " << (double)sum / STUDENTS << endl;
    }
    cout << endl;

    for (int st = 0; st < STUDENTS; st++) {
        int total = quizTotal(scores, st);
        cout << "Total score for " << names[st] << ": " << total << endl;
    }
    cout << endl;

    return 0;
}

int quizTotal(int scores[STUDENTS][QUIZZES], int students) {
    int total = 0;
    for (int qz = 0; qz < QUIZZES; qz++) {
        total += scores[students][qz];
    }
    return total;
}
