#include <iostream>

using namespace std;

void authenticate(int pin) {
    bool outOfAttempts = false;

    for(int attempts = 0; attempts < 3; attempts++) {
        cout << "Please input your 4-digit PIN: ";
        cin >> pin;

        if (pin == 5802) {
            cout << "Welcome! What would you like to do today?" << endl;
            return; 
        } else {
            cout << "Incorrect PIN, try again" << endl;
        }
    }

    outOfAttempts = true;
    cout << "You are out of attempts" << endl;
}

int main() {
    authenticate(5802);

    cin.get();
    cin.get();
    return 0;
}
