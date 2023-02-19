#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter an odd number: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Error: The number is not odd." << endl;
        return 0;
    }
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
