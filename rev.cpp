#include <iostream>

using namespace std;

void rev(int digits[], int start, int end) {
    if (start < end) {
        int tmp = digits[start];
        digits[start] = digits[end];
        digits[end] = tmp;
        rev(digits, start + 1, end - 1);
    }
}

int main() {
    int x = 537;
    int y = 0;
    int digits[3];
    for (int i = 0; i < 3; ++i) {
        digits[i] = x / (int)pow(10, 2 - i);
        x = x % (int)pow(10, 2 -i);
    }
    rev(digits, 0, 2);
    for (int i = 0; i < 3; ++i) {
        y += digits[i] * (int) pow(10, 2 - i);
    }
    cout << y << endl;
    return y;
}