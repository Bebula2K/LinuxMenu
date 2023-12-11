#ifndef MENUSCREEN_H
#define MENUSCREEN_H

#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>
#include <algorithm>
#include <ncurses.h>
using namespace std;

//Variant 1
void printLogoOne(){
cout << "██     ██  ██      ██  ██    ██  ██      ██                   " << endl;
cout << "\033[36m██     ██  ████    ██  ██    ██    ██  ██      \033[0m" << endl;
cout << "\033[36m██     ██  ██  ██  ██  ██    ██      ██        \033[0m" << endl;
cout << "\033[34m██     ██  ██    ████  ██    ██    ██  ██      \033[0m" << endl;
cout << "\033[34m█████  ██  ██      ██    ████    ██      ██    \033[0m"<< endl;
cout << "\n";
}
//Variant 2
void printLogoTwo(){
cout << "\033[33m┌──────────────────────────────┐\033[0m" << endl;
cout << "╗       ╗  ╔════╗  ╗    ╔  ╗   ╔            " << endl;
cout << "\033[36m║       ║  ║    ║  ║    ║  ╚╗ ╔╝    \033[0m" << endl;
cout << "\033[36m║       ║  ║    ║  ║    ║   ╠═╣     \033[0m" << endl;
cout << "\033[34m║    ╗  ║  ║    ║  ║    ║  ╔╝ ╚╗    \033[0m" << endl;
cout << "\033[34m╚════╝  ╚  ╝    ╚  ╚════╝  ╝   ╚    \033[0m" << endl;
cout << "\033[33m└──────────────────────────────┘\033[0m" << endl;
}

void printMenu(){
    cout << "┌\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[33mMenu v1.0\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[0m┐" << endl;
    cout << "\033[36m█\033[0m[W]elcome                    \033[36m █\033[0m" << endl;
    cout << "\033[34m█\033[0m[S]ysop                      \033[34m █\033[0m" << endl;
    cout << "\033[36m█\033[0m[U]ptime                     \033[36m █\033[0m" << endl;
    cout << "\033[34m█\033[0m[T]erminal                   \033[34m █\033[0m" << endl;
    cout << "\033[36m█\033[0m[C]heck for updates          \033[36m █\033[0m" << endl;
    cout << "\033[34m█\033[0m[P]urge text                 \033[34m █\033[0m" << endl;
    cout << "\033[36m█\033[0m[N]eofetch                   \033[36m █\033[0m" << endl;
    cout << "\033[34m█\033[0m[E]xit                       \033[34m █\033[0m" << endl;
    cout << "└\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[33m\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[33m\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m█\033[34m█\033[36m\033[0m┘" << endl;
}

#endif
