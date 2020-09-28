#include <iostream>

using namespace std;

int main() {
    string cadena; 

    // cin >> cadena; // lee hasta espacio o /n
    getline(cin, cadena); // lee con espacios 
    cout << cadena.size() << endl;

    return 0;
}