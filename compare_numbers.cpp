
#include <iostream>

int main() {
    int t, a, b;
    std::cin >> t; // Read the number of test cases.

    for(int i = 0; i < t; ++i) {
        std::cin >> a >> b; // Read the two integers.
        if(a > b) {
            std::cout << '>' << std::endl; // If a is greater than b.
        } else if(a < b) {
            std::cout << '<' << std::endl; // If a is less than b.
        } else {
            std::cout << '=' << std::endl; // If a is equal to b.
        }
    }

    return 0;
}
