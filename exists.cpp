#include<string>
#include<fstream>
#include<iostream>

bool exists(const std::string& str) {
    std::ifstream ifs(str);
    return ifs.is_open();
}
