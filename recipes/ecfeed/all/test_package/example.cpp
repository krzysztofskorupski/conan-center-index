#include "ecfeed.hpp"
#include <iostream>
#include <sstream>

int main() {
    ecfeed::template_type type = ecfeed::template_type::csv;
    std::cout << ecfeed::template_type_url_param(type) << std::endl;
}
