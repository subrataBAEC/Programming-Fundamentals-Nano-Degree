/*
Module 14.5 ;
5-make duplicate elements of a matrix -1: complete
method: 2
ফ্রিকোয়েন্সী এরের কন্সেপ্ট ব্যবহার করে তবে আরো একটু সহজেও করা যায়।
১.ইনপুট এর সময় ম্যাক্স বের করে নেবো
২.ম্যাক্স+১ সাইজের এরে ডিক্লেয়ার করবো এবং ০ দিয়ে ইনিশিয়ালাইজ করবো।
ধরে নেই সেই এরে c[max+1]
৩. ম্যাট্রিক্স এর i,j তম ভেলুকে k ধরে c এর k তম ইন্ডেক্স ০ কিনা চেক করবো, ০ হলে প্রিন্ট করবো আর k তম ইন্ডেক্সে 1 করে দেবো। না হলে -১ প্রিন্ট করবো!! ডান!!
এখানে কিন্তু ফ্রিকোয়েন্সী কাউন্ট করার কোনো প্রয়োজন পরে নি!
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"input row,col and elements of 2D array"<<"\n";
    int row,col;
    cin>>row>>col;
    int array[row][col];
    //input
    int max=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>array[i][j];    
            if(max<array[i][j]) max=array[i][j];        
        }
    }
    cout<<"max "<<max<<"\n";
    
    //freq array size should be max value of array
    int sz=max+1;
    int freq[sz]={0};

    //finding duplicate value
    cout<<"\n"<<"duplicate elemets to -1 "<<"\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if (freq[array[i][j]]==0){
                //cout<<i<<" "<<j<<" "<<array[i][j]<<endl;
                cout<<array[i][j]<<" ";
                freq[array[i][j]]++;
            }
            else cout<<-1<<" ";;
        }
        cout<<"\n";
    }
    return 0;
}
