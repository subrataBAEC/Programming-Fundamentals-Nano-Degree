//exam 01- complete
/* 
restaurant billing system--complete
*/
#include<bits/stdc++.h> // all in one
using namespace std;
#define width 25
#define sz 12 //array size

class Restaurant{
public:
    int food_item_codes[sz];
    string food_item_names[sz];
    int food_item_prices[sz];
    int total_tax=0;

    //constructor-store values
    Restaurant(int codes[], string names[], int prices[]){
        //int sum=0;
        //cout<<"hi"<<endl;
        for(int i=0; i<sz; i++){            
            food_item_codes[i]=codes[i];
            food_item_prices[i]=prices[i];
            food_item_names[i]=names[i];
            //total_tax=0;   //to set default value to zero         
        }
    }
    //set tax value
    void set_tax(int tax){
        total_tax=total_tax+tax;
        cout<<endl;
        cout<<"Tax received in Restaurant class:(including all previous taxes)  "<<total_tax<<endl;
    }
    //print food menue
    void show_menue(){
        cout<<"                     MAKE BILL"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<setw(width)<<left<<"Item code"<<setw(width)<<left<<"Item name"<<setw(width)<<left<<"Item price"<<endl;
        cout<<setw(width)<<left<<"------"<<setw(width)<<left<<"------"<<setw(width)<<left<<"------"<<endl;
        
        for(int j=0; j<sz; j++){
            cout<<setw(width)<<left<<food_item_codes[j]<<setw(width)<<left<<food_item_names[j]<<setw(width)<<left<<food_item_prices[j]<<endl;        
        }
        cout<<endl;
    }
};

//function to store values
Restaurant* storeValues(){
    int codes[sz],prices[sz];
    string names[sz];

    for(int i=0; i<sz; i++){
        cin>>codes[i];
        //cin>>names[i];// doesnot work with space
        getline(cin>>ws,names[i]);//string with space
        cin>>prices[i];
    }
    //call constructor to store value
    Restaurant *restaurant = new Restaurant(codes,names,prices);
    return restaurant;
}

int main(){   
    cout<<"Restaurant bill system: "<<sz<<" food Items"<<endl;
    //object
    Restaurant *restaurant; 
    //input    
    restaurant=storeValues();

    //keep whole thing in an infinite loop
    for(int k=0; ; k++){
        start:
            //output--offered food menue
            restaurant->show_menue();
        
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
                for(int j=0; j<sz; j++){
                    if(restaurant->food_item_codes[j]==items[i]){
                    flag=1; 
                    break;               
                    }
                }
                if(flag==0){
                cout<<"Code Not found,invalid,Start Again "<<endl;
                //return 0;//end everything
                //continue;
                goto start;
                //break;
                }
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
                for(int j=0; j<sz; j++){
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
            cout<<"tax in this order "<<tax<<endl;
            
            // set tax to class member--total_tax
            restaurant->set_tax(tax);
            
            cout<<"output from restaurant class "<<restaurant->total_tax<<endl;
            cout<<endl;
            //press 1 to continue, 0 to end
            cout<<"want to place another order? enter 1. if not enter 0"<<endl;
            int quit=1;
            cin>>quit;
            if(quit==0) return 0;
            else continue;
        }
        return 0;

}

    
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
262
Prawn Fried Rice 1:2
300
310
Beef Mutton Kabab 1:1
150
311
Chicken Grill 1:4
340
450
Chicken Curry 1:3
550
451
Beef Special Curry 1:3
760
452
Chicken Sizzling 1:3
710
453
Beef Sizzling 1:3
970
*/