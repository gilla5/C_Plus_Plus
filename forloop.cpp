#include <iostream>

int main() {

    //break = break out of loop
    //continue = skip current iteration

    /*
    for(int i = 10; i >= 1; i--){
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!\n";
    */

    for(int i = 1; i<= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}