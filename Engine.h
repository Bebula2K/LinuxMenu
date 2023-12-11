#include <iostream>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <ncurses.h>
#include <unistd.h>
#include <sys/types.h>

#ifdef _WIN32
    // For Windows
    #define CLEARSCR "cls"
#else
    // For Linux  and others
    #define CLEARSCR "clear"
#endif

class Engine {
public:
    void executeCommand(const std::string& command) {
        std::string gameCommand = command;
        std::transform(gameCommand.begin(), gameCommand.end(), gameCommand.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        if (gameCommand == "w") {
            system("cowsay Welcome to Linux Menu v1.0!");
        } else if (gameCommand == "e") {
            system("clear");
            pid_t gid = getpgid(getpid());
            std::string command = "kill -9 " + std::to_string(getpid());
            std::system(command.c_str());
        } else if (gameCommand == "s") {
            system("whoami");
        } else if (gameCommand == "u") {
            system("uptime");
        } else if (gameCommand == "t") {
            system("alacritty");
        } else if (gameCommand == "c") {
            system("sudo pacman -Syu");
        } else if (gameCommand == "p") {
            std::system(CLEARSCR);
            printLogoOne();
            printMenu();
        } else {
            std::cout <<"Unrecognized command! Try again." << std::endl;
            refresh();
        }
    }
    std::string getCurrentTime() {
        auto now = std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(now);
        struct std::tm timeInfo;
        localtime_r(&time, &timeInfo);
        char buffer[9];
        strftime(buffer, sizeof(buffer), "%T", &timeInfo);
        return std::string(buffer);
    }
};
