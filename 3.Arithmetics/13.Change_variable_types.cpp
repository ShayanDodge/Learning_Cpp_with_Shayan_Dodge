#include <iostream>

int main()
{
     float width = 4.5;
     float height = 5.5;

     int area_int = width * height;
     std::cout << "area_int = " << area_int<<'\n';
     float area_float = width * height;
     std::cout << "area_float = " << area_float<<'\n';

     return 0;
}
