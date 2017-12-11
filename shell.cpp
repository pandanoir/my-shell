#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include "parse.cpp"
#include "exec.cpp"
#include "search.cpp"

using namespace std;
int main() {
    string command;
    string line;
    string prompt = "$ ";
    vector<string> args;
    while (true) {
        cout << prompt;
        getline(cin, line);
        args.clear();

        parse(line, args);
        command = searchCommand(args[0]);
        if (args[0] == "exit") break;
        if (command == "") cout << args[0] << ": not found" << endl;
        else {
            args[0] = command;
            exec(command, args);
        }
    }
    return 0;
}
