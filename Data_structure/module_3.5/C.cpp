// C 
/* input,freq array=0
check who are present
find minimum of who are not present
convert ascii to alphabet*/

#include<bits/stdc++.h> // all in one 

using namespace std;

int main(){ 
    char s[100000];

    cin>>s;
    int len=strlen(s);
    int min=97,ascii;
    //cout<<len<<endl;
    //frequency array for a-z
    int pos[26]={0};

    for(int i=0; i<len; i++){
        if(s[i]>='a' && s[i]<='z'){
            pos[s[i]-'a']=1;        
        }
    }
    //check who are present
    /*
    for(int i=0; i<26; i++){
        ascii=i+97; //(ascii 97-122)
        cout<<pos[i]<<" "<<ascii<<endl;
    }
    */
    //find minimum ascii char-who are not present
    int flag=0;
    for(int i=0; i<26; i++){        
        if(pos[i]==0){
            ascii=i+97;
            //cout<<ascii<<" ";
            flag=1;
            break;
        }
        else flag=0;     
    }
    if(flag==1) cout<<char(ascii)<<endl;
    else if(flag==0) cout<<"None"<<endl;
    return 0; 
}