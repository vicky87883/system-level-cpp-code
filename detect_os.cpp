#include <iostream>

int main() {
#if defined(_WIN32) || defined(_WIN64)
    std::cout << "Operating System: Windows" << std::endl;
#elif defined(__APPLE__) || defined(__MACH__)
    std::cout << "Operating System: macOS" << std::endl;
#elif defined(__linux__)
    std::cout << "Operating System: Linux" << std::endl;
#elif defined(__unix__)
    std::cout << "Operating System: Unix" << std::endl;
#else
    std::cout << "Operating System: Unknown" << std::endl;
#endif
    return 0;
}