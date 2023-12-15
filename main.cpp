#include <iostream>

// Function to calculate the area of a trapezoid
double calculateTrapezoidArea(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    double base1, base2, height;

    // Get the bases and height from the user
    std::cout << "Enter the length of the first base: ";
    std::cin >> base1;

    std::cout << "Enter the length of the second base: ";
    std::cin >> base2;

    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    // Calculate and display the area of the trapezoid
    double trapezoidArea = calculateTrapezoidArea(base1, base2, height);

    std::cout << "Area of the trapezoid: " << trapezoidArea << std::endl;

    return 0;
}
