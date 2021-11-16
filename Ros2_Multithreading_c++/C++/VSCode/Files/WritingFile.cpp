#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream writeObj;
    writeObj.open("Test.txt", ios::out);

    if (writeObj.is_open()) {
        writeObj << "TITLE" << endl;
        writeObj << 1 << ". Hello World " << endl;
        writeObj << 2 << ". Fuck the Whole World " << endl;
        writeObj << "END" << endl;
        writeObj.close();
    } else {
        cout << "Can't write the file " << endl;
    }

    return 0;
}