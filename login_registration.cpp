#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice;
    string username, password;
    string u, p;
    bool found = false;

    cout << "1. Register\n2. Login\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter new username: ";
        cin >> username;
        cout << "Enter new password: ";
        cin >> password;

        ofstream file("users.txt", ios::app);
        file << username << " " << password << endl;
        file.close();

        cout << "Registration successful!" << endl;
    }
    else if (choice == 2) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        ifstream file("users.txt");
        while (file >> u >> p) {
            if (u == username && p == password) {
                found = true;
                break;
            }
        }
        file.close();

        if (found)
            cout << "Login successful!" << endl;
        else
            cout << "Invalid username or password!" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
