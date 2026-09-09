#include <iostream>
#include <string>

int main() {
    int score = 0;
    int answer = 0;
    std::string name;

    std::cout << "Welcome to the Tiny C++ Quiz!\n";
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "\nHi, " << name << "! Answer these three questions.\n\n";

    std::cout << "1) What is 5 + 3? ";
    std::cin >> answer;
    if (answer == 8) {
        ++score;
    }

    std::cout << "2) What is 10 - 4? ";
    std::cin >> answer;
    if (answer == 6) {
        ++score;
    }

    std::cout << "3) What is 3 * 4? ";
    std::cin >> answer;
    if (answer == 12) {
        ++score;
    }

    std::cout << "\nYou got " << score << " out of 3 correct!\n";
    return 0;
}
