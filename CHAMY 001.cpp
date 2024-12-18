#include <iostream>
#include <string>

using namespace std;

bool validateCredentials(const string& username, const string& password) {
    
    const string correctUsername = "user123";
    const string correctPassword = "pass123";
    
    return (username == correctUsername && password == correctPassword);
}

int main() {
    string username, password;

    cout << "WELCOME TO AIR TAXI!" << endl;

    for (int attempts = 0; attempts < 3; ++attempts) {
        
        cout << "Enter your username: ";
        cin >> username;

        cout << "Enter your password: ";
        cin >> password;

        if (validateCredentials(username, password)) {
            cout << "Login successful!" << endl;
            break; 
        } else {
            cout << "Invalid username or password. Please try again." << endl;
        }

        if (attempts == 2) {
            cout << "Too many failed attempts. Exiting..." << endl;
        }
    }

    return 0;
}
