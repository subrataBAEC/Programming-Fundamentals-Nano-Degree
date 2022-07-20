//Module 6.5 practice for N students with array--complete
/* 
for n number of  students
*/
#include<bits/stdc++.h> // all in one
using namespace std;

class Student{
public:
    string name;
    char section;
    int roll;
protected:
    int english_marks;
private:
    string password;
public:
    void set_marks(int marks){ // marks
        english_marks=marks;      
        }

    void set_password(string pass){ // password
        password=pass;
        //cout<<password<<endl;
    }
    int get_marks(){
        return english_marks;
    }
     //if pass match, update marks
    void update_marks(string pass, int marks){
        if(password==pass) {
            english_marks=marks;
        }
        else{
            cout<<"password error"<<endl;
        }
    }
    //print all informations except password
    void print_all(){
        cout<<name<<" "<<section<<" "<<roll<<" "<<english_marks<<endl;
        // cout<<section<<endl;
        // cout<<roll<<endl;
        // cout<<english_marks<<endl;
        // cout<<password<<endl;
    }
};

int main(){
    int n;
    cin>>n;
    Student st[n];
    char section;
    string name,password;
    int roll,marks;

    for(int i=0; i<n; i++){
        //user input
        cout<<"enter name,section,roll,marks,password"<<endl;
        cin>>name>>section>>roll>>marks>>password;
        st[i].name=name;
        st[i].section=section;
        st[i].roll=roll;    
        //marks and pass cant be accessed directly,need functions
        st[i].set_marks(marks); 
        st[i].set_password(password);

    }
    //input check
    for(int i=0; i<n; i++){
        st[i].print_all();
    }
    //find the student with roll and update marks with password
    cout<<"enter roll,marks,password to update"<<endl;
    cin>>roll>>marks>>password;
    int flag=0;
    for(int i=0; i<n; i++){
        if(st[i].roll==roll){
            flag=1;
            st[i].update_marks(password,99);
            break;
        }
        else flag=0;
    }
    if(flag==0) cout<<"not found"<<endl;

    //print all except password
    for(int i=0; i<n; i++){
        st[i].print_all();
    }
    return 0;
}
