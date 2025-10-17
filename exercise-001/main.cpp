#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int globalVar = 1;
int static staticVar = 1;
int const constVar = 1;
int* heapVar = new int(3);

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
    
    int localVar = 1;
    int static localstaticVar = 1;
    int const localconstVar = 1;
    int* localheapVar = new int(3);

    fmt::print("Wert: {}, Adresse: {}\n", globalVar, fmt::ptr(&globalVar));
    fmt::print("Wert: {}, Adresse: {}\n", staticVar, fmt::ptr(&staticVar));
    fmt::print("Wert: {}, Adresse: {}\n", constVar, fmt::ptr(&constVar));
    //fmt::print("Wert: {}, Adresse: {}\n", &heapVar, fmt::ptr(heapVar));
    fmt::print("Wert: {}, Adresse: {}\n", localVar, fmt::ptr(&localVar));
    fmt::print("Wert: {}, Adresse: {}\n", localstaticVar, fmt::ptr(&localstaticVar));
    fmt::print("Wert: {}, Adresse: {}\n", localconstVar, fmt::ptr(&localconstVar));
    //fmt::print("Wert: {}, Adresse: {}\n", &localheapVar, fmt::ptr(localheapVar));

    return 0; /* exit gracefully*/
}
