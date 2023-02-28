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

        cout << "S = " << sqrt(cos(4 * pow(y, 2)) + 7.151) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}