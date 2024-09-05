#include <vector>
#include <iostream>
using namespace std;
int main() {
    int a = 0b1010;
    int b = 0b1100;
    int c = 0b1001;

    int result = a & b & c;
    cout << "The result is: " << result << endl;

    return 0;
}