#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string text{"592 +  2 + 1 + 1"};
    std::regex  pattern{("[\\-]?\\d+[ \t]([+][ \t]*\\d+[ \t])*")};
    std::smatch result;
    std::regex_search(text , result , pattern);
    for (auto x : result) {
        std::cout<< x <<" ";
    }
    return 0;
}
