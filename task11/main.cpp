#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, x;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "S = " << 9.756 * pow(y, 7) + 2 * tan(x) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}