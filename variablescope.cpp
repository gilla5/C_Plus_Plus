#include <iostream>

void printNum();

int main() {

    //local variables = declared inside a function or block {}
    //global variables = declared outside of all functions

    int myNum = 1;

    std::cout << myNum << "\n";
    
    printNum();

    return 0;
}
void printNum() {
    int myNum = 2;
    std::cout << myNum << "\n";
}