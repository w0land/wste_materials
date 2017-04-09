#include <iostream>
#include <string>
#include <vector>

int my_atoi(const std::string& str) {
    int value = std::atoi(str.c_str());
    if (value == 0 && str == "0") {
        return value;
    }

    if (value != 0) return value;

    throw 10;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return EXIT_FAILURE;

    std::cout << my_atoi(argv[1]) << std::endl;
    return EXIT_SUCCESS;
}
