#include <iostream>
#include "MenuScreen.h"
#include "Engine.h"
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>
#include <string>
#ifdef _WIN32
    // For Windows
    #define CLEARSCR "cls"
#else
    // For Linux  and others
    #define CLEARSCR "clear"
#endif

using namespace std;

int main(){
    Engine engine;
    std::system(CLEARSCR);
        printLogoTwo();
        printMenu();
    while(true){
        std::string currentTime = engine.getCurrentTime();
        std::cout << "[" << currentTime << "] > ";
        std::string userInput;
        std::getline(std::cin, userInput);
        if (!userInput.empty()) {
            engine.executeCommand(userInput);
            if (userInput == "debug") {
                std::cout << "debug stuff" << std::endl;
            }
        } else {
            cout << "\33[2K" << endl;
        }
	}
}
