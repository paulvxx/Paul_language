#include <iostream>

using namespace std;

//example program to get something started
int main(int argc, char *argv[]) {
    int x = 12;
    if (x < 45) {
        int i = 0;
        while (i < 4 && x < 50) {
            x *= 2;
            x++;
        }
    }
    int* a = new int[13];
    cout << "Value of x is: " << x << endl;
    return 0;
}
