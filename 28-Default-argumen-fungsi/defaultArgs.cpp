#include <iostream>
using namespace std;

double kubus_volume(double p, double l, double t);
void tampilkan_variabel(double p = 1, double l = 1, double t = 1);

int main() {
    cout << "DEFAULT ARGUMEN FUNGSI" << endl;
    tampilkan_variabel(4, 3, 2);
    tampilkan_variabel(4, 3);
    tampilkan_variabel();
    return 0;
}

void tampilkan_variabel(double p, double l, double t) {
    cout << "Volume Kubus"
         << " p = " << p << ", l = " << l << ", t = " << t << " adalah :" << kubus_volume(p, l, t) << endl;
}

double kubus_volume(double p, double l, double t) {
    return p * l * t;
}