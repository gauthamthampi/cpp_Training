#include <iostream>
#include <string>
using namespace std;
#define MAX 25

struct Question {
    string ques;
    string options[4];
    int correctOption; 
};

Question quiz[MAX];
int queCount = 0;

void addQuestion() {
    if (queCount >= MAX) {
        cout << "Question limit reached!\n";
        return;
    }

    Question q;
    cout << "Enter the question:\n";
    cin.ignore();
    getline(cin, q.ques);

    for (int i = 0; i < 4; i++) {
        cout << "Enter option " << (i + 1) << ": ";
        getline(cin, q.options[i]);
    }

    cout << "Enter the correct option number (1-4): ";
    cin >> q.correctOption;
    q.correctOption--; 

    if (q.correctOption < 0 || q.correctOption > 3) {
        cout << "Invalid correct option. Question not added.\n";
        return;
    }

    quiz[queCount++] = q;
    cout << "Question added successfully!\n";
}

void playQuiz() {
    if (queCount == 0) {
        cout << "No questions added yet!\n";
        return;
    }

    int score = 0;

    for (int i = 0; i < queCount; i++) {
        cout << "\nQ" << (i + 1) << ": " << quiz[i].ques << "\n";
        for (int j = 0; j < 4; j++) {
            cout << (j + 1) << ". " << quiz[i].options[j] << "\n";
        }

        int userAnswer;
        cout << "Enter your answer (1-4): ";
        cin >> userAnswer;

        if (userAnswer - 1 == quiz[i].correctOption) {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong! Correct answer: " << (quiz[i].correctOption + 1) << ". "
                << quiz[i].options[quiz[i].correctOption] << "\n";
        }
    }

    cout << "\nQuiz Over! Your score: " << score << "/" << queCount << "\n";
}

int main() {
    int choice;

    do {
        cout << "--- Quiz Application ---\n";
        cout << "1. Add Question\n";
        cout << "2. Play Quiz\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addQuestion();
            break;
        case 2:
            playQuiz();
            break;
        case 3:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
