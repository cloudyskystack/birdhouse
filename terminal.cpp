/* disclaimer:
there is no narrative significance regarding my choice to write in c++
it is the programming language i am most comfortable with
i would write in assembly if i could
or heck even make my own language
thats almost what this is anyway */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    print("> ");
    string command;
    getline(cin, command);
    cout << "received, processing..." << endl;

    stringstream ss(command)
    string arg;
    
}