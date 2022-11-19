#include <iostream>

using namespace std;
int digitSum(int n)
{
    if (n < 10) return n;
    int res = n / 10;
    return n - res * 10 + digitSum(res);
}
int main() {
    int a;
    int res = 0;
    int temp;
    cin >> a;
    while (true)
    {
        if (a < 10) {
            res += a;
            break;
        }
        else
        {
            temp = a / 10;
            res += a - temp * 10;
        }
        
    }
    cout << res;
}