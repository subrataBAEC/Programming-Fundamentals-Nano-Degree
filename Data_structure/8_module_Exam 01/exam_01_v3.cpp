//exam 01- incomplete
/* 
restaurant billing system--complete except question 7
*/
#include<bits/stdc++.h> // all in one
using namespace std;
#define width 25
#define size 5

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
    void set_tax(int tax){
        total_tax=tax;
        cout<<"Tax received in Restaurant class: "<<total_tax<<endl;
    }
};

//function to store values
Restaurant* storeValues(){
    int codes[5],prices[5];
    string names[5];

    for(int i=0; i<5; i++){
        cin>>codes[i];
        //cin>>names[i];
        getline(cin>>ws,names[i]);//string with space
        cin>>prices[i];
    }
    //call constructor to store value
    Restaurant *restaurant = new Restaurant(codes,names,prices);
    return restaurant;
}

int main(){   
    cout<<"enter 5 values "<<width<<endl;
    Restaurant *restaurant; 

    //input    
    restaurant=storeValues();

    //output--offered food menue
    cout<<"                     MAKE BILL"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<setw(width)<<left<<"Item code"<<setw(width)<<left<<"Item name"<<setw(width)<<left<<"Item price"<<endl;
    cout<<setw(width)<<left<<"------"<<setw(width)<<left<<"------"<<setw(width)<<left<<"------"<<endl;
    
    for(int j=0; j<5; j++){
        cout<<setw(width)<<left<<restaurant-> food_item_codes[j]<<setw(width)<<left<<restaurant->food_item_names[j]<<setw(width)<<left<<restaurant->food_item_prices[j]<<endl;        
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
        int flag=0;
        cout<<"Enter Item No "<<i+1<<" Code : ";
        cin>>items[i];
        //check if item code is valid
    //     for(int j=0; j<5; j++){
    //         if(restaurant->food_item_codes[j]==items[i]){
    //            flag=1;                
    //         }
    //         else if(flag==0){
    //             cout<<"not found,invalid "<<endl;;
    //             break;
    //         }
    //     }
        cout<<"Enter Item No "<<i+1<<" Quantity : ";
        cin>>quantity[i];
    }
    cout<<endl;
    cout<<endl;

    //show bill summary
    cout<<"                                     BILL SUMMARY"<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Table No: "<<table<<endl; 
    cout<<setw(width)<<left<<"Item code"<<setw(width)<<left<<"Item name"<<setw(width)<<left<<"Item price"<<setw(width)<<left<<"Item Quantity"<<setw(width)<<left<<"Total Price"<<endl;
    int grand_total=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            if(restaurant->food_item_codes[j]==items[i]){
                //cout<<"found ";
                int item_total_price=0;
                item_total_price=quantity[i]*restaurant->food_item_prices[j];
                grand_total=grand_total+item_total_price;
                cout<<setw(width)<<left<<restaurant-> food_item_codes[j]<<setw(width)<<left<<restaurant->food_item_names[j]<<setw(width)<<left<<restaurant->food_item_prices[j]<<setw(width)<<left<<quantity[i]<<setw(width)<<left<<item_total_price<<endl;
            }
        }
        
    }    
    double tax=grand_total*0.05; 
    cout<<"TAX"<<setw(97)<<left<<" "<<tax<<endl;
    cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
    grand_total=ceil(grand_total+tax);
    cout<<"NET TOTAL"<<setw(91)<<left<<" "<<ceil(grand_total)<<" Taka(Rounded Value)"<<endl;
    
    // set tax to class member--total_tax
    restaurant->set_tax(tax);
    cout<<restaurant->total_tax<<endl;
    return 0;
}
/*
101 
chicken soup 
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

/*
170
Chicken Soup 1:2
260
171
Chicken Corn Soup 1:2
200
172
Thai Special Soup 1:2
300
260
Chicken Fried Rice 1:2
250
261
Egg Fried Rice 1:2
230

*/