/*
module 26, vid 26-6
--> Generic queue implementation using LL

Note:

*/

#include <bits/stdc++.h>
//#include "MYQUEUE_INT.h"
#include "MYQUEUE.h"

using namespace std;

typedef pair <char, int>mytype;

int main()
{
    Queue <mytype> q; // declaration
    int n;
    cin>>n;
    //input
    for(int i=0; i<n; i++){
        char val1;
        int val2;
        cin>>val1>>val2;
        q.push(make_pair(val1,val2));
    }
    //Front
    if (!q.empty()){
        mytype chk;
        chk=q.Front();
        cout<<chk.first<<" "<<chk.second<<endl;
    }
    //Back
    if (!q.empty()){
        mytype chk;
        chk=q.Back();
        cout<<chk.first<<" "<<chk.second<<endl;
    }
    //all po
    while(!q.empty()){
        mytype chk;
        chk=q.pop();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }

    
    // q.push(10);
    // q.push(20);

    // cout<<q.pop()<<endl;
    // if (!q.empty()){
    //     cout<<q.Front()<<endl;
    // }
    // if (!q.empty()){
    //     cout<<q.Back()<<endl;
    // }
    
    
    
    
    // Queue <int> q; // declaration
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     float val;
    //     cin>>val;
    //     q.push(val);
    // }

    // while(!q.empty()){
    //     cout<<q.pop()<<endl;
    // }
    // // if (!q.empty()){
    // //     cout<<q.Front()<<endl;
    // // }
    // // if (!q.empty()){
    // //     cout<<q.Back()<<endl;
    // // }

    // // q.push(10);
    // // q.push(20);

    // // cout<<q.pop()<<endl;
    // // if (!q.empty()){
    // //     cout<<q.Front()<<endl;
    // // }
    // // if (!q.empty()){
    // //     cout<<q.Back()<<endl;
    // // }

}
