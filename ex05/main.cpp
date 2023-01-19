#include "Harl.hpp"

int main(int ac, char **av) {
    std::string smg = av[1];
    int i = (smg == "DEBUG") * 1 +
            (smg == "INFO") * 2 +
            (smg == "WARNING") * 3 +
            (smg == "ERROR") * 4;
    // std::cout << i << "\n";
    switch (i)
    {
    case 0:
        std::cout << "function not found\n";
        break;

    case 1:
        std::cout << "DEBUG function called\n";

    case 2:
        std::cout << "INFO function called\n";

    case 3:
        std::cout << "WARNING function called\n";

    case 4:
        std::cout << "ERROR function called\n";

    }
}