#include <iostream>
#include <ctime> 
#include <iomanip>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS

struct Task {

};

int main() {

	std::vector<std::string,int> taskcount;
    std::string command;

    std::cout << "HELLO EVERYONE" << std::endl;
    while (command != "exit") {
        std::cout << "Enter command (begin, end, status, exit): ";
        std::cin >> command;

        std::time_t a = 0;
        if (command == "begin") {
            std::string task;
			std::cout << "Input tusk name: ";
			std::cin >> task;
            std::time_t a1 = std::time(nullptr);
            a = a1;
        }
        else if (command == "end") {
            std::time_t b = std::time(nullptr);
            double d = std::difftime(b, a);
            std::cout << d << std::endl;
        }
        else if (command == "status") {
            
        }
    }
    std::cout << "Choose way to transport" << std::endl;
    std::cout << "HUT HUY " << std::endl;
	std::cout << "How are you fine sank you" << std::endl;
}
