#include <iostream>
#include <string>
using namespace std;

int Count(const string s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find("while", pos)) != string::npos) {
        k++;
        pos++;
    }
    return k;
}

string Change(string& s) {
    size_t pos = 0;
    while ((pos = s.find("while", pos)) != string::npos)
        s.replace(pos, 5, "***");
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "String contained " << Count(str) << " groups of 'while'" << endl;
    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}