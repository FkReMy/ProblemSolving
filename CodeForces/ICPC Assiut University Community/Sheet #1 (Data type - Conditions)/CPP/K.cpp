#include <bits/stdc++.h>
using namespace std;

int main(){

    long A,B,C,Max,Min;

    cin >> A >> B >> C;

    Max = A;
    if (B > Max){
        Max = B;
        if (C > Max){
            Max = C;
        }
    }
    else if (C > Max){
        Max = C;
    }

    Min = A;
    if (B < Min){
        Min = B;
        if (C < Min){
            Min = C;
        }
    }
    else if (C < Min){
        Min = C;
    }

    cout << Min << " " << Max << endl;
    return 0;
}