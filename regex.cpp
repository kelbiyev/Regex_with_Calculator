#include <iostream>
#include <regex>

int main() {
    std::string inputLine;

    std::regex check1 {R"((?:(?: *(?:[\-]?\d+[\.]?\d*) *(?:[\-+*\^/]| *))*)\s*[\-]?\d+[\.]?\d*\s*)"};
    std::regex check2 {R"(\s+)"};

    std::cout << "Write your expression: ";
    std::getline(std::cin, inputLine);

    if (std::regex_match(inputLine, check1))
        std::cout << "Expression matches.\n";
    else
        std::cout << "Expression doesn't match.\n";

    std::string cleanedGap = std::regex_replace(inputLine, check2, "");
    std::cout << "Expression without gaps: " << cleanedGap;
    return 0;
}
