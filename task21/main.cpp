#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, h;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of h: " << endl;
        cin >> h; 
        cout << "P = " << exp(y + 5.5) + 9.1 * pow(h, 3) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}