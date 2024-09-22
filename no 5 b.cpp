

#include <iostream>
using namespace std;
int main() {
    // (i) Print out your name
    std::cout << "TAREMWA IVAN" << std::endl;

    // (ii) Print out the multiples of 3 from 1 up to 20
    std::cout << "Multiples of 3 from 1 to 20:" << std::endl;
    for (int i = 1; i <= 20; ++i) {
        if (i % 3 == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
