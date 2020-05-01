#include <iostream>

void variables()
{
    int integer = 1;
    float float_number = 2.0;
    double double_number = 12.3;

    size_t safe_integer = 4;

    char character = 'a';
    char char_array[] = {'m', 'y', ' ', 's', 't', 'r', 'i', 'n', 'g'};

    std::string string = "A string";
}

int main([[maybe_unused]] int const argc, [[maybe_unused]] char const* argv[])
{
    variables();

    return EXIT_SUCCESS;
}