#include <iostream>

using namespace std;

float pow(float b, int p) {
    if (p == 0) {
        if (b == 0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    if (p == 1) {
        return b;
    }
    return b * pow(b, p - 1);
}

int main() {
    cout << pow(1, 2) << endl;
}