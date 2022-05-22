// To Format Data Output

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
     cout<<"print with set width = 10\n";
     cout<<"Ints"<<std::setw(10);
     cout<<"Floats"<<std::setw(10);
     cout<<"Doubles"<<std::setw(10) << "\n";

     cout<< a;
     cout<< std::setw(12)<< b;
     cout<< std::setw(10)<< c << "\n";    

     cout<< aa;
     cout<< std::setw(12)<< bb;
     cout<< std::setw(10)<< cc << "\n";  

     cout<< aaa;
     cout<< std::setw(12)<< bbb;
     cout<< std::setw(10)<< ccc << "\n\n"; 

     cout<<"print with tabs\n";
     cout<<"Int"<<"\tFloats"<<"\tDoubles\n";
     cout<< aaa<<"\t"<< bbb<<"\t"<< ccc <<"\n"; 
    
    return 0;
}
