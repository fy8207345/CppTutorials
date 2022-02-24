#include <iostream>
#include <iomanip>
#include <cmath> // https://en.cppreference.com/w/cpp/header/cmath

int main(int argc, char** argv)
{
    double_t weight {7.7};
    std::cout << "floor: " << std::floor(weight) << std::endl;
    std::cout << "cel: " << std::ceil(weight) << std::endl;

    int v {-900};
    std::cout << "abs for -900 : " << std::abs(v) << std::endl;

    double_t cos {3.141592653589 / 2};
    std::cout << "cos: " << std::cos(cos) << std::endl;
    std::cout << "sin: " << std::sin(cos) << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "e: " << std::exp(1) << std::endl;
    double_t e{2.7182818284590450908};

    std::cout << "log2: " << std::log2(e) << std::endl;
    std::cout << "loge: " << std::log(e) << std::endl;

    std::cout << "pow: " << std::pow(e, 2) << std::endl;

    std::cout << "tan: " << std::tan(cos) << std::endl;

    std::cout << "sqrt: " << std::sqrt(e) << std::endl;

    std::cout << "round: " << std::round(3.654) << std::endl;
    std::cout << "round: " << std::round(2.5) << std::endl;
    std::cout << "round: " << std::round(2.4) << std::endl;

    char c = 'a';
    c += 1;
    std::cout << c << std::endl;
    
    return 0;
}