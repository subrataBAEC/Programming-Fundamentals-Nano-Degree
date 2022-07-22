//exam 01- incomplete
/* 
restaurant billing system--complete until question 6
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
// //function for customer order
// void customer_order(){
//     int table,n;
//     cout<<"Enter table no: ";   
//     cin>>table;
//     cout<<"Enter Number of Items: ";
//     cin>>n;
//     int items[n],quantity[n];
//     for(int i=0; i<n; i++){
//         cout<<"Enter Item "<<i+1<<" Code : ";
//         cin>>items[i];
//         cout<<"Enter Item "<<i+1<<" Quantity : ";
//         cin>>quantity[i];
//     }
//     for(int i=0; i<5; i++){
//         cout<<food_item_codes[i]<<" ";
//     }
// }

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
    //call constructor to store value
    Restaurant *restaurant = new Restaurant(codes,names,prices);
    return restaurant;

}

int main(){
   
    cout<<"enter 5 values"<<endl;
    //cin>>n;
    Restaurant *restaurant; 

    //input    
    restaurant=storeValues();

    //output--food menue
    cout<<"                 MAKE BILL"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<setw(15)<<left<<"Item code"<<setw(15)<<left<<"Item name"<<setw(15)<<left<<"Item price"<<endl;
    cout<<setw(15)<<left<<"------"<<setw(15)<<left<<"------"<<setw(15)<<left<<"------"<<endl;
    
    for(int j=0; j<5; j++){
        cout<<setw(15)<<left<<restaurant-> food_item_codes[j]<<setw(15)<<left<<restaurant->food_item_names[j]<<setw(15)<<left<<restaurant->food_item_prices[j]<<endl;        
    }
    cout<<endl;
    cout<<endl;
    //table information- customer order
    int table,n;
    cout<<"Enter Table No : ";   
    cin>>table;
    cout<<"Enter Number of Items : ";
    cin>>n;
    int items[n],quantity[n];
    for(int i=0; i<n; i++){
        cout<<"Enter Item No "<<i+1<<" Code : ";
        cin>>items[i];
        cout<<"Enter Item No "<<i+1<<" Quantity : ";
        cin>>quantity[i];
    }
    cout<<endl;
    cout<<endl;
    //show bill summary
    cout<<"                 BILL SUMMARY"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Table No: "<<table<<endl; 
    cout<<setw(15)<<left<<"Item code"<<setw(15)<<left<<"Item name"<<setw(15)<<left<<"Item price"<<setw(15)<<left<<"Item Quantity"<<setw(15)<<left<<"Total Price"<<endl;
    int grand_total=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            if(restaurant->food_item_codes[j]==items[i]){
                //cout<<"found ";
                int item_total_price=0;
                item_total_price=quantity[i]*restaurant->food_item_prices[j];
                grand_total=grand_total+item_total_price;
                cout<<setw(15)<<left<<restaurant-> food_item_codes[j]<<setw(15)<<left<<restaurant->food_item_names[j]<<setw(15)<<left<<restaurant->food_item_prices[j]<<setw(15)<<left<<quantity[i]<<setw(15)<<left<<item_total_price<<endl;
            }
        }
        
    }
    
    double tax=grand_total*0.05; 
    cout<<"TAX"<<setw(57)<<left<<" "<<tax<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"NET TOTAL"<<setw(51)<<left<<" "<<ceil(grand_total+tax)<<" Taka(Rounded Value)"<<endl;

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