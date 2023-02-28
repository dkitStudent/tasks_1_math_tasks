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

        cout << "Z = " << 3 * pow(y, 2) + sqrt(pow(y, 3) + 1) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}