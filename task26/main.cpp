#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double p;
        cout << "Input value of p: " << endl;
        cin >> p;
        
        cout << "Z = " << sin(pow((pow(p, 2) + 0.4), 3)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}