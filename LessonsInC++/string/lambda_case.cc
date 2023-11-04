#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

int main() {
    std::string letters;

    std::cout << "Enter letters: ";
    std::getline(std::cin, letters);
    std::transform(letters.begin(), letters.end(), letters.begin(), [](char c) -> char {
        return std::isupper(c) ? std::tolower(c) : std::toupper(c);
    });

    std::cout << "Output: " << letters << std::endl;

    return 0;
}