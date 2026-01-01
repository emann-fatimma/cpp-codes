#include <iostream>
using namespace std;

int series(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;


    for(int i=0;i<5;i++){
        result = series(n);
    cout <<result<<",";
    n++;
    }
    return 0;
}

int series(int n) {
    if (n >1) {
        return n * series(n-1);
    } else {
        return 1;
    }
}
