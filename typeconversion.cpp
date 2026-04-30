#include <iostream>

int main() {

    //implicit = automatic
    //explicit = preced value with new data type


    //double x = (int) 3.14;
    //char x = 100;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}