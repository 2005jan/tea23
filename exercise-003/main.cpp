#include <fmt/chrono.h>
#include <fmt/format.h>

typedef enum{
    OBEN = 0,
    UNTEN = 1,
    HOCH = 2,
    RUNTER = 3,
    FEHLER = 4,
} States;

typedef enum{
    TASTE = 0,
    ES_O = 1,
    ES_U = 2,
} Events;

auto main(int argc, char** argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", argv[0]);


    return 0; /* exit gracefully*/
}
