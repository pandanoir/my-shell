#include <string>
#include "exists.cpp"
#include "split.cpp"

using namespace std;

string searchCommand(string command) {
    if (exists(command)) return command;
    for (auto& path : split(getenv("PATH"), ':'))
        if (exists(path + "/" + command))
            return path + "/" + command;
    return "";
}
