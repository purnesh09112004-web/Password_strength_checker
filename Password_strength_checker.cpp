#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void checkPasswordStrength(const string& password) {
    int length = password.length();
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    // A simple list of special characters to check against
    string specialChars = "!@#$%^&*";

    // Loop through each character of the password
    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }
    
    if(length>=8 && hasUpper &&hasLower && hasDigit && hasSpecial){
       cout<<"The password is strong ";
    }else{
       cout<<"Password is weak ";
    }
    
}   

int main() {
    string password;

    cout << "Enter password: ";
    cin >> password;

    checkPasswordStrength(password);

    return 0;
}
    