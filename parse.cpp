#include <vector>
#include <string>
using namespace std;

void parse(const string& line, vector<string>& res) {
    bool in_string = false;
    string term = "";
    for (auto& s : line) {
        if (s == '"') {
            if (!in_string) {
                in_string = true;
                term = "";
            } else {
                in_string = false;
                res.push_back(term);
                term = "";
            }
        } else if (in_string) term += s;
        else if (s == ' ') {
            if (term != "") res.push_back(term);
            term = "";
        } else term += s;
    }
    if (term != "") res.push_back(term);
}
