// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "sit";
    
    do {
        cout << "Enter the password: ";
        cin >> password;
        
        if (password != correctPassword) {
            cout << "Invalid password\nTry again!!\n";
        }
    } while (password != correctPassword);
    
    cout << "Success!!\n";
    return 0;
}
