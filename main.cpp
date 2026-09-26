#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer > = 1" << endl;
    cin >> n;
    // Without  exit (0)
    int s= n%2;
    for (int i = 3; i <= n/2 ;i+=2)
    {
        s *= n%i;
    }
    // n = 1, n = 2
    if ((s == 0 || n== 1) && n != 2) cout << n << " is not prime!"
        << endl;
    else cout << n << " is prime!"
        << endl;
    return 0;
}
