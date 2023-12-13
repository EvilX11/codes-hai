#include <iostream>

using namespace std;

void towerOfHanoi(int n, char src, char helper, char dest) {
    if (n == 1) {
        cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    // Transfer top n-1 from src to helper using dest as 'helper'
    towerOfHanoi(n - 1, src, dest, helper);
    // Transfer nth from src to dest
    cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
    // Transfer n-1 from helper to dest using src as 'helper'
    towerOfHanoi(n - 1, helper, src,dest);
}

int totalMoves(int n) {
    return (1 << n) - 1;  // Equivalent to 2^n - 1
}

int main() {
    int n;
    cout<<"Enter number of Disks: ";
    cin>>n;
    towerOfHanoi(n, 'S', 'H', 'D');

    cout<<"\n";

    int moves = totalMoves(n);
    cout << "Total number of moves: " << moves << endl;
    return 0;
}
