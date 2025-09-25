#include "lb1_func.h"
#include <cctype>

bool palindrom(const std::string& stroka) {
    if (stroka.empty()) return true;

    size_t left_i = 0;
    size_t right_i = stroka.size() - 1;

    while (left_i < right_i) {
        if (std::tolower(static_cast<unsigned char>(stroka[left_i])) != 
            std::tolower(static_cast<unsigned char>(stroka[right_i]))) {
            return false;
        }

        ++left_i;
        --right_i;
    }

    return true;
}
