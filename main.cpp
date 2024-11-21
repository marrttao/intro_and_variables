#include <iostream>
using namespace std;

int main() {
    double v, t, a, S;

    cout << "v, t, a: ";
    cin >> v;
    cin >> t;
    cin >> a;
    S = v * t + (a * t * t) / 2;
    cout << "S: " << S << endl;
    return 0;
}
