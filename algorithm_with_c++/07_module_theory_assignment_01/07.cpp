

#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    int N=30;

    for (int i = N; i > 0; i /= 2) {
        for (int j = 0; j < i; j++) {
            count += 1;
            cout<<count<<" "<<i<<" "<<j<<endl;
        }
    }
}

