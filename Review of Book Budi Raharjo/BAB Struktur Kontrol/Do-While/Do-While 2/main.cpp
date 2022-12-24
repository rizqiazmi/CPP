/**********************************************************
Nama file: do_while2.cpp
***********************************************************/

#include <iostream>
#include <string> // string

using namespace std;

// mendefinisikan konstanta
const string USERNAME = "cpp";
const string PASSWORD = "cplusplus";

int main(){
    string username, password;

    do {
        cout << "Masukkan username dan password" << endl;
        cout << "Username\t: ";
        cin >> username;
        cout << "Password\t: ";
        cin >> password;
        cout << endl;
    } while ((username.compare(USERNAME) != 0) || (password.compare(PASSWORD) != 0));

    cout << "Selamat datang...";

    return 0;
}
