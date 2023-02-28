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
        cout << "R = " << sqrt(pow(sin(y + 6.835), 2)) + exp(x) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}