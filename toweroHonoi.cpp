#include<iostream>

using namespace std;
int count=1;
void tower(int n, char R1, char R2, char R3) {
    if(n == 1) {
        // cout << "n -> " << n << " " << "inside - 1" << endl;
        cout << R1 << " to " << R3 << endl;
        return;
    }
    // cout << "n -> " << n << " " << "tower - 1" << endl;
    tower(n-1, R1, R3, R2);
    // cout << "n -> " << n << " " << "tower - 2" << endl << " " ;
    cout <<R1 << " to " << R3 << endl;
    tower(n-1, R2, R1, R3);
}

int main(){

    tower(5 , 'A', 'B', 'C');
    return 0;
}


// A B C
// A -> B
// A -> C
// B -> C
// A -> B
// C -> A
// C -> B
