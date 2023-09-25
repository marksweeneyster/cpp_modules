import speech;

#include <iostream>
#include <cstdlib>

// kind of yucky but until I have a cleaner solution ...
#ifdef _WIN32
#include <Windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    std::srand(std::time(nullptr));
    if (std::rand() % 2) {
        std::cout << get_phrase_en() << '\n';
    } else {
        std::cout << get_phrase_es() << '\n';
    }
}