#include <iostream>
using namespace std;

int func1() {
    int x = 3;
    int y = 2;
    int z = x + y;

    return z;
}
int func2() {
    int x = 1;
    int y = 2;
    int z = x * y;
    
    return z;
    
}
int func3() {
    int x = 3;
    int y = 2;
    int z = x - y;
    
    return z;
    }
    

int main() {
    cout << func1() << endl;
    cout << func2() << endl;
    cout << func3() << endl;
    
    return 0;
};
