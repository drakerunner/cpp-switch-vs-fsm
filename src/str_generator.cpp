#include "str_generator.h"
#include <sstream>

const char *valid_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
const int valid_chars_len = 62;

std::string str_generator(int &len)
{
    std::ostringstream oss;
    srand(time(0));
    for (int i = 0; i < len; i++)
    {
        oss << valid_chars[rand() % valid_chars_len];
    }
    return oss.str();
}