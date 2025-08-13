#include <iostream>
using namespace std;

int main () {
    int n ;
    int count = 1;
    cout << "Enter a number: ";
    cin >> n;

    while(count <= n) {
        cout << count << " ";
        count++;
    }
  
    cout << endl;
    return 0;  
}
