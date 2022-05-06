#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double y, x, t, xFirst, xSecond, xThird ;
    t = 0;
    x = 0;

    for (t ; t > 5; t += 0.25)
    {
        xFirst = t + 8;
        if (xFirst <= 0.5)
        {
            return x = (double)xFirst;
            t = 0;
            break;
        }
    }


    for (; t > 5; t += 0.25)
    {
        xSecond = sin(t);
        if ((xSecond > 0.5) && (xSecond <= 1))
        {
            return x = (double)xSecond;
            t = 0;
            break;
        }
    }


    for (t ; t > 5; t += 0.25)
    {
        xThird = log10(t) + 2;
        if (xThird > 1)
        {
            return x = (double)xThird;
            t = 0;
            break;
        }
    }


    y = sqrt(abs(x + 3)) + 5.6 * x;
    cout << "" << y << endl;

}

