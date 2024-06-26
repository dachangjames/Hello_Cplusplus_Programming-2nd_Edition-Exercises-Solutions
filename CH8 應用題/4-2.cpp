#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if(n == 0)
        return m;

    return gcd(n, m % n);
}

int main()
{
    int m, n;
    cout << "請以m n的格式輸入m與n兩數的值：" << endl;
    cin >> m >> n;

    cout << "m、n兩數的最大公因數gcd為：" << gcd(m, n) << endl;

    return 0;
}
