// //template- intro

#include <bits/stdc++.h>
using namespace std;

template<typename T>
T sum(T a, T b){
    T s=a+b;
    return s;
}

template<typename T>
T myMax(T a, T b){
    return (a>b)?a:b;
}

int main(){
    //1
    int a=20, b=30;
    int s=sum<int>(a,b);

    double x=22.2, y=0.8;
    double s2=sum<double>(x,y);

    cout<<s<<" "<<s2<<endl;

    //2
    cout<<myMax<int>(5,2)<<endl;
    cout<<myMax<char>('a','z')<<endl;

}

// //func
// // int max(int a,int b){
// //     return (a>b)? a:b;
// // }

// //function with template
 


// int main(){
//     // cout<<max(0,4)<<endl;
//     // cout<<max(1.2,4.5)<<endl;
//     // cout<<max('a','d')<<endl;

//     //funcName<dataType>(parameters)
//     int max=max<int>(0,4);
//     //cout<<max<double>(1.2,4.5)<<endl;
//     //cout<<max<char>('a','d')<<endl;

// }