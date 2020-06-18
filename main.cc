#include <iostream>

int f(int n) {
    if (n > 123)
        return 10;
    else if (n < 40)
        return 20;
    else
        return 1234;
}

int main() {
    std::cout << f(100);
}
