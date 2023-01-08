/*
----------------------
Name:  subrata saha
email: subratabaec@gmail.com
Date: Jan 7, 2023
-----------------------
//beautiful string//

incomplete

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char str[110];
    gets(str);
    // printf("%s",str);

    int chars_freq[26]={0}, val; // count freq. of each chars
    char char_arr[26];
    int freq[26]={0};
    int count, i=0, j=0;
    
    while(str[i]!='\0'){
        val=str[i]-'a';
        // printf("%d, %c\n",val, str[i]); //char to int
        chars_freq[val]++;
        i++;        
    }
    // j=0;
    for(int i=0; i<26; i++){
        if(chars_freq[i]>0){
            // printf("%d %c\n", chars_freq[i], i+'a');
            char_arr[j]=i+'a'; // characters to char array
            freq[j]=chars_freq[i]; //freq to freq array
            j++;

        }
    }
    // printf("%d\n",j);
    for(int k=0; k<j; k++){
        printf("%d ",freq[k]);
    }
    printf("\n");
    for(int k=0; k<j; k++){
        printf("%c ",char_arr[k]);
    }


    // int max=freq[0];
    // for(int i=1; i<j; i++){
    //     if(freq[i]>max){
    //         max=freq[i];
    //     }
    // }
    // sort freq array in descending
    for(int i=0; i<j; i++){
        for(int k=i+1; k<j; k++){
            if(freq[i]<freq[k]){
                int temp=freq[i];
                freq[i]=freq[k];
                freq[k]=temp;

                int temp_ch=char_arr[i];
                char_arr[i]=char_arr[k];
                char_arr[k]=temp_ch;
            }
        }
    }

    for(int k=0; k<j; k++){
        printf("%d ",freq[k]);
    }
    printf("\n");
    for(int k=0; k<j; k++){
        printf("%c ",char_arr[k]);
    }


    // for(int j=0; j<26; j++){
    //     int max=chars_freq[j];
    //     for(int k=j+1; k<26; k++){
    //         if(chars_freq[k]>max){
    //             max=chars_freq[k];
    //             printf("%d %c\n", max, k+'a');
    //             chars_freq[k]=0;
    //         }
    //     }
        // if(chars_freq[j]>0){  abdzazzcb
        //     // printf("%d %c\n", chars_freq[j], j+'a');
        //     int k=0;
        //     

        //     for(k=0; k<chars_freq[j]; k++){
        //         printf("%c",j+'a');
        //     }

        // }
    // }


}