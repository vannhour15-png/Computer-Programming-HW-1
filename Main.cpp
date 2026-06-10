#include <iostream>
using namespace std;

int func1();

int main() {
    cout << func1() << endl;
    return 0;
}
int func1() {
    int x = 2, y = 3;
    int z = x + y;

    cout << "The sum of x and y is: " << z << endl;
    return 0;
}