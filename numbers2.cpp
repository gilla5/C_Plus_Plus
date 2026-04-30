#include <iostream>

int main() {

    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;
    int balance = 20000;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    double weight = 170.4;

    // single character
    char grade = 'A';
    char intial = 'B';
    char currency = '$';
    char symbol = '@';

    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = true;
    bool gender = true;

    //string (objects that represents a sequence of text)
    std::string name = "Brother";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake St.";
    std::string slogan = "We are the meats";
    
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    std::cout << "Hi my name is " << name << " I graduate college in " << year << "." << '\n';
    std::cout << "I have a " << grade << " in my math class." << student << '\n';

    return 0;
}