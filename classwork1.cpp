#include <iostream>
#include <cmath>
int main() {
    double a,b,c;
   std::cout << "Enter value of side (a)";
   std::cin >> a; 

   std::cout << "Enter value of side (b)";
   std::cin >> b; 
   
   c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    std::cout << "Value of side (c) " << c << std::endl;
    return 0;

}