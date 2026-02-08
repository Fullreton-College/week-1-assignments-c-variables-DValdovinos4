#include <iostream>
#include <iomanip>

int main() {
    int num1, num2, num3, num4;
    std::cout << "Enter four integers:";
    std::cin >> num1 >> num2 >> num3 >> num4;

    //calculate the product and average of the four integers
    int product_int = num1 * num2 * num3 * num4;
    int average_int = (num1 + num2 + num3 + num4) / 4.0;
    std::cout << "product_int: " << product_int << " average_int: " << average_int << std::endl;

    double product_float = static_cast<double>(num1) * num2 * num3 * num4;
    double average_float = static_cast<double>(num1 + num2 + num3 + num4) / 4.0;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << product_float << " " << average_float << std::endl;
    
return 0;

}
