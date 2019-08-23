#include <bits/stdc++.h>

int main() {
    std::string linea;
    bool openQuote = false;
    while (getline(std::cin, linea)) {
        for (auto && character: linea) {
            if (character == '"') {
                if (!openQuote) {
                    std::cout << "``";
                    openQuote = true;
                } else {
                    std::cout << "''";
                    openQuote = false;
                }
            } else {
                std::cout << character;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}