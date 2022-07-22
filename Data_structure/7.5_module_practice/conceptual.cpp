//conceptual_18th_july
/* 
student gpa calculation
*/
#include<bits/stdc++.h> // all in one
using namespace std;

class Student{
public:
    float gpa;
    int marks[5];
    //constructor-store marks
    Student(int arr[]){
        float sum=0;
        //cout<<"hi"<<endl;
        for(int i=0; i<5; i++){            
            marks[i]=arr[i];
            if(arr[i]>=80){
                sum=sum+5;
            }
            else if(arr[i]>=70){
                sum=sum+4;
            }
            else {
                sum=sum+0;
            }
            gpa=sum/5;
        }
    }
};
//function to store marks: for 1 student
Student* storeMarks(int num){
    cout<<"enter marks for student no "<<num<<endl;
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    //call constructor
    Student *student = new Student(arr);
    return student;

}


int main(){
    int n;
    cout<<"number of students"<<endl;
    cin>>n;
    Student *student[n]; 

    //input
    for(int i=0; i<n; i++){
        student[i]=storeMarks(i+1);
    }

    //output
    for(int i=0; i<n; i++){
        cout<<"GPA for student "<<i+1<<endl;
        cout<<student[i]->gpa<<endl;
        cout<<"marks for student "<<i+1<<endl;
        for(int j=0; j<5; j++){
            cout<<student[i]-> marks[j]<<" ";        
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
    }
    
    return 0;
}
