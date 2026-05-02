#include <iostream>

int main() {

    //std::string students[] = {"Paige", "Aiden", "Ariel","Hunter"};
    int grades[] = {65, 72, 56, 99};

    for(int grade : grades){
        std::cout << grade << '\n';
    }


    return 0;
}