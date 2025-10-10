#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h.in"

void changeValueByParameter(int value)
{
    value = 99;
    fmt::print("In fct byparam: {}\n", value);
}

void changeValueByPointer(int *ptr)
{
    *ptr = 77;
    fmt::print("In fct byptr: {}\n", *ptr);
}

int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */


    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print("Anzahl Argument (argc): {}\n",argc);
    for (size_t i = 0; i<argc; i++)
    {
        fmt::print("argv[{}]: {} | {}\n",i,argv[i], fmt::ptr(&argv[i]));
    }

    /* INSERT YOUR CODE HERE */

    int x = 10;
    int *p = &x;
    *p = 42;
    fmt::print("x: {} Adresse x: {}\n", x, fmt::ptr(&x));
    fmt::print("p: {} Adresse p: {}\n", *p, fmt::ptr(p));

    /* AUFGABE 2*/

    double* d = new double(3.1415);   // Speicher reservieren UND initialisieren
    fmt::println("Wert: {}", *d);    // Zugriff über Dereferenzierung
    delete d;            
    
    int y = 5;
    fmt::print("Vor 1. Aufruf: {}\n", y);
    changeValueByParameter(y);
    fmt::print("Nach 1. Aufruf: {}\n", y);

    fmt::print("Vor 2. Aufruf: {}\n", y);
    changeValueByPointer(&y);
    fmt::print("Nach 2. Aufruf: {}\n", y);

    return 0; /* exit gracefully*/
}
