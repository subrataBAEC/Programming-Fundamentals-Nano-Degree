//Module 6.5 practice for 1 student
/* 
for 1 student
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
    //for testing
    void print_all(){
        cout<<name<<" "<<section<<" "<<roll<<" "<<english_marks<<endl;
        // cout<<section<<endl;
        // cout<<roll<<endl;
        // cout<<english_marks<<endl;
        // cout<<password<<endl;
    }



};

int main(){
    Student st;
    st.name="subrata saha";
    st.section='A';
    st.roll=12;    
    //marks and pass cant be access directly,need functions
    st.set_marks(96); 
    st.set_password("1234");

    // print default infos
    cout<<"before"<<endl;
    st.print_all();

    // print updates infos if password matches
    cout<<"after"<<endl;
    st.update_marks("1234",98);
    st.print_all();
    
    //find student with roll and update marks
    int roll,marks;
    cin>>roll>>marks;
    if(st.roll==roll){
        cout<<"student found and updates marks"<<endl;
        st.update_marks("1234",marks);
        st.print_all();
    }
    else{
        cout<<"roll not found"<<endl;
    }
    return 0;
}
