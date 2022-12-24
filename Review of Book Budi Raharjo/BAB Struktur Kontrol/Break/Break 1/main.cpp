/**********************************************************
Nama file: break1.cpp
***********************************************************/

#include <iostream>
#include <string> // string

using namespace std;

const string USERNAME = "cpp";
const string PASSWORD = "cplusplus";

int main(){
    string username, password;

    for ( ; ; ) {
        cout << "Masukkan username dan password" << endl;
        cout << "Username\t: ";
        cin >> username;
        cout << "Password\t: ";
        cin >> password;
        cout << endl;
        if ((username.compare(USERNAME) == 0) && (password.compare(PASSWORD) == 0)) {
            break;
        }
    }

    cout << "Selamat datang...";
    return 0;
}
