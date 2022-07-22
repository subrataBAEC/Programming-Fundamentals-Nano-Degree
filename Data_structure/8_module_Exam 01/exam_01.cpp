//exam 01- incomplete
/* 
restaurant billing system-up to question 4 complete
*/
#include<bits/stdc++.h> // all in one
using namespace std;

class Restaurant{
public:
    int food_item_codes[5];
    string food_item_names[5];
    int food_item_prices[5];
    int total_tax;

    //constructor-store values
    Restaurant(int codes[], string names[], int prices[]){
        //int sum=0;
        //cout<<"hi"<<endl;
        for(int i=0; i<5; i++){            
            food_item_codes[i]=codes[i];
            food_item_prices[i]=prices[i];
            food_item_names[i]=names[i];            
        }
    }


};

//function to store values
Restaurant* storeValues(){
    //cout<<"enter food code "<<num<<endl;
    int codes[5],prices[5];
    string names[5];

    for(int i=0; i<5; i++){
        cin>>codes[i];
        cin>>names[i];
        cin>>prices[i];
    }
    //call constructor
    Restaurant *restaurant = new Restaurant(codes,names,prices);
    return restaurant;


}
//function for customer order


void customer_order(){
    int table,n;
    cout<<"Enter table no: ";   
    cin>>table;
    cout<<"Enter Number of Items: ";
    cin>>n;
    int items[n],quantity[n];
    for(int i=0; i<n; i++){
        cout<<"Enter Item "<<i+1<<" Code : ";
        cin>>items[i];
        cout<<"Enter Item "<<i+1<<" Quantity : ";
        cin>>quantity[i];
    }
    // for(int i=0; i<5; i++){
    //     for(int j=0; j<n; j++){
    //         if(restaurant-> food_item_codes[i]==item[j]){
    //             cout<<"found"<<endl;
    //         }
    //         else{
    //             cout<<"not found"<<endl;
    //         }
    //     }
    // }
}
int main(){
    int n;
    cout<<"enter 5 values"<<endl;
    //cin>>n;
    Restaurant *restaurant; 

    //input    
    restaurant=storeValues();
    

    //output--food menue
    cout<<"                   MAKE BILL"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Item code"<<"    "<<"Item name"<<"    "<<"Item price"<<endl;
    for(int j=0; j<5; j++){
        cout<<restaurant-> food_item_codes[j]<<"        "<<restaurant->food_item_names[j]<<"        "<<restaurant->food_item_prices[j]<<endl;        
    }
    //table information
    customer_order();

    //check customer order

    

    return 0;
}
/*
101 
vaat 
30
102 
mach 
50
103 
murgi 
60
104 
vorta 
20
105 
daal 
10
*/