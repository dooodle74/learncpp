#include <iostream>

int main() {
    int width;
    width = 5;
    // cout with endl
    std::cout << width << std::endl;
    std::cout << width;
    std::cout << width << std::endl;

    int x = 5; // copy-init: outdated?
    int y (5); // direct-init
    int z {5}; // list-init

    int height {}; // value-initialization / zero-initialization to value 0

    return 0;
}

int inits(){
    // An integer can only hold non-fractional values.
    // Initializing an int with fractional value 4.5 requires the compiler to convert 4.5 to a value an int can hold.
    // Such a conversion is a narrowing conversion, since the fractional part of the value will be lost.

    int w1 { 4.5 }; // compile error: list-init does not allow narrowing conversion

    int w2 = 4.5;   // compiles: w2 copy-initialized to value 4
    int w3 (4.5);   // compiles: w3 direct-initialized to value 4

    return 0;
}

int getUserInput(){
    int x;
    std::cin >> x;
}