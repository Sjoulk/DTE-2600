#include <iostream>
#include <algorithm>
#include <cmath>


int main()
{
    const double PI = 3.14159;

    double radius = 10;
    double circumference = 2 * PI * radius;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double x = 3.14;
    double y = 4;
    double z;

    z = std::max(x, y);
    //z = std::min(x, y);

    // pow(x opphøyd i y)
    //z = pow(x, y);

    //z = sqrt(9);

    // abs() absoluttverdi

    //z = abs(-3);
    // Avrunding: ceil() avrunder opp, floor() avrunder ned, round() avrunder vanlig
    //z = round(x);

    std::cout <<"Max value between x and y: " << z << std::endl;

    std::cout << circumference << "cm";
    return 0;
}
