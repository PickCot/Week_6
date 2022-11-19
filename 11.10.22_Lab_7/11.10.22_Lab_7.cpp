#include <iostream>
using namespace std;

int main()
{
    int N = 0, divider = 0, multiply = 1, temp;
    int i = 1, j = 0;
    int last = 0;
    cout << "Введіть число:\n";
    cin >> N;
    int n = N;
   
    while (N > 10){
        N /= pow(10, i);
        N *= pow(10, i);
        if (N == 0)
        {
            break;
        }
        else if (int((n - N) / pow(10, j)) % 2 == 0)
        {
            multiply *= int((n - N) / pow(10, j));
        }
        i++; j++;
    } 

    if (int(n / pow(10, j)) % 2 == 0)
    {
        multiply *= int(n / pow(10, j));
    }
    else if (multiply == 1)
    {
        multiply = 0;
    }
    cout << "multiply = " << multiply << endl;
}