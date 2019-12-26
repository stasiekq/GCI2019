#include <iostream>
#include <math.h>

using namespace std;

float a = 0, under = 1, c = 0, prev = -1;
float n; // useless???

int mypi()
{
    while(1)
    {
        c = 1 /(under * under);
        a += c;
        if(a == prev) break;
        prev = a;
        under ++;
    }
    a *= 6;
    a = sqrt(a);
    cout << a;
}

int main()
{
    cin >> n;
    mypi();
    return 0;
}
