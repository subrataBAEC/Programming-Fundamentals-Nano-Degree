/* 
Q 5
*/
#include<stdio.h>
#include<string.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    char name[100];
    int class;
    int roll;
    struct Date dob;//struct inside struct
};

int main(){
    struct Student st={
        .class=7,
        .roll=10,
        .dob={1,1,2000}
    };
    strcpy(st.name,"Nicola tesla");
    printf("name:%s roll:%d\n",st.name,st.roll);
    //update
    st.roll=11;
    strcpy(st.name,"Thomas Edison");
    printf("name:%s roll:%d\n",st.name,st.roll);
}

