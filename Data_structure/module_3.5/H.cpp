// H
/* input,freq array=0
check who are present and count
if count >1, simmiliarity found
*/

#include<bits/stdc++.h> // all in one

using namespace std;

int main(){
    char s[30];

    cin>>s;
    int len=strlen(s);
    int ascii;
    //cout<<len<<endl;
    //frequency array for a-z
    int x, pos[26]={0};
    //int count=0;
    for(int i=0; i<len; i++){
          x=s[i]-'a';
          pos[x]++;
    }
    //check who are present
//     for(int i=0; i<26; i++){
//         ascii=i+97; //(ascii 97-122)
//         cout<<pos[i]<<" "<<ascii<<endl;
//     }
    //if similar break and o/p no
    int flag=0;
    for(int i=0; i<26; i++){
        if(pos[i]>1){
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"no"<<endl;
    else if(flag==0) cout<<"yes"<<endl;

    return 0;
}
