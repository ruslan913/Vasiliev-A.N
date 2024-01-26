#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    system("chcp 1251>nul");
    int n,i;
    n = 0;
    i = 10;
    while (n != i) {
        n++;
        cout << n << endl;
    }
    return 0;
}