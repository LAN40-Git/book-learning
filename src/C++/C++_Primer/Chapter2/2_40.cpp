#include <string>

struct Sales_data {
    std::string book_no;
    std::string custom_name;
    double discount;
    uint32_t units_sold = 0;
    double revenue = 0.0;
};