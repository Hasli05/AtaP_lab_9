#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double y, x;
    x = 0;

    for (double t = 0; t > 5; t += 0.25)
    {
        if ((t + 8) <= 0.5)
        {
            return x = (double)(t + 8);
            break;
        }
        else if (sin(t) > 0.5 && sin(t) <= 1)
        {
            return x = (double) sin(t);
            break;
        }
        else if ((log10(t) + 2) > 1)
        {
            return x = (double)(log10(t) + 2);
            break;
        }
        else
        {
            cout << "Error";
        }
    }


    y = sqrt(abs(x + 3)) + 5.6 * x;
    cout << "y = " << y << endl;

}

