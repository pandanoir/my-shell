#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int exec(string command, vector<string> args) {
    int pid, code, status;
    pid_t result;

    char** arg = NULL;
    arg = new char*[args.size() + 1];
    for(size_t i = 0; i < args.size(); i++) arg[i] = (char*) args[i].c_str();
    arg[args.size()] = NULL;

    pid = fork();
    if (pid == -1) cerr << "Error" << endl;
    else if (pid == 0) execv(command.c_str(), arg);
    else {
        result = wait(&status);
        if (result < 0) {
            cerr << "Wait Error." << endl;
            exit(-1);
        }
        if (!WIFEXITED(status))
            cout << "wait失敗" << endl << "終了コード: " << status << endl;
    }
    return 0;
}
