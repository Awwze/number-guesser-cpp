#include <iostream>


using namespace std;

int user_input;

int main() {
    srand(time(NULL));
    int rand_num = 1 + rand() % 15; // randomizer system
    bool stop = false;

    cout << "Welcome to Number Guesser" << endl;
    cout << "You need to find the number I have in mind (from 1 to 15) " << endl;
    cout << "So lets try! What is the number in my mind?: ";
    cin >> user_input;

    do {
        if (user_input != rand_num) {
            cout << "Wrong, but in this attempt will be right: " << endl;
            cin >> user_input;
        }
        else {
            stop = true;
        }

    } while (!stop);  // while stop wont be false

    cout << "Yes, you are right, the number is " << user_input << endl;

    return 0;
}
