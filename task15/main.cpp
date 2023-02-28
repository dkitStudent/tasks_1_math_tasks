#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y;
        cout << "Input value of y: " << endl;
        cin >> y;

        cout << "H = " << sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}