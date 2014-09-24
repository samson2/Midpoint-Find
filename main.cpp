#include <iostream>
using namespace std;

int main()
{
    cout << "Find the midpoints of two points";
        cin.get();
    
    float x1, x2, y1, y2, midpoint;
    cout << "(x1 + x2)   (y1 + y2)\n "
         << " ---------   --------  = M\n" 
         << "    2     ,     2     \n\n"
         << "What is x1?\n";
        cin >> x1;
     cout<< "(x1 + x2)   (y1 + y2) \n"
         << " ---------   --------   = M\n" 
         << "    2     ,     2     \n\n"
         << "What is x2?\n";
        cin >> x2;
      cout<<"  (x1 + x2)   (y1 + y2) \n"
         << "   ---------   --------  = M\n" 
         << "      2     ,     2     \n\n"
         << "What is y1?\n";
        cin >> y1;
      cout<<"(x1 + x2)   (y1 + y2)\n "
         << " ---------   --------  = M\n" 
         << "    2     ,     2     \n\n"
         << "What is y2?\n";
        cin >> y2;
    float xcoord, ycoord;
        xcoord = (x1+x2)/2;
        ycoord = (y1+y2)/2;
    cout << "\n\n Midpoint: "
         << xcoord 
         << " , " 
         << ycoord;
    
}
