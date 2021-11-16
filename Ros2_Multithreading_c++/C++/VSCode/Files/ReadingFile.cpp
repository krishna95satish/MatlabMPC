#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream readObj;
    readObj.open("Test.txt", ios::in);

    if (readObj.is_open() ) {
        while (!readObj.eof()) {
            string line;
            readObj >> ws;  // reads all the white spaces
            getline(readObj, line, '.');
            cout << line << endl;
        } 
        readObj.close();
    }
    return 0;
}