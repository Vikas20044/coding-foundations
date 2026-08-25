#include <iostream>
using namespace std;

int main() {
    cout << "[";

    for (int i = 0; i < 100000; i++) {
        int value = (i % 20001) - 10000;

        if (i > 0)
            cout << ",";

        cout << value;
    }

    cout << "]" << endl;
}