#include <iostream>

//cout << (insertion operator)
//cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name); // use if there is a line space & ws is meant for whitespaces
    //std::cin >> name;

    std::cout << "Whats your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";

    return 0;

}