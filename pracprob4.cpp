#include <iostream>
using namespace std;

int main() {
    cout << "Numbers divisible by both 3 and 5 from 1 to 50:" << endl;

    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
