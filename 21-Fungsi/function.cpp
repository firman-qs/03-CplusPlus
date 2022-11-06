#include <cmath>
#include <iostream>

int main() {
    int x;
    double y;

    std::cout << "Hitung nilai dari sinus :";
    std::cin >> x;

    y = std::sin(x*M_PI/180);
    std::cout << "nialai sinusnya adalah :" << y << std::endl;

    return 0;
}