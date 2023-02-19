#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Even numbers from 2 to " << num << ":" << endl;
    for (int i = 2; i <= num; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}


