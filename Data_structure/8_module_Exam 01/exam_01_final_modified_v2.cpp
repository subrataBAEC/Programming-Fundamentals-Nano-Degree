//exam 01- complete
/* 
restaurant billing system--complete
*/
#include<bits/stdc++.h> // all in one
using namespace std;
#define width 25
//#define sz 12 //array size

class Restaurant{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;

    //constructor-store values
    Restaurant(int codes[], string names[], int prices[]){
        //int sum=0;
        //cout<<"hi"<<endl;
        for(int i=0; i<12; i++){            
            food_item_codes[i]=codes[i];
            food_item_prices[i]=prices[i];
            food_item_names[i]=names[i];
            total_tax=0;   //to set default value to zero         
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
        
        for(int j=0; j<12; j++){
            cout<<setw(width)<<left<<food_item_codes[j]<<setw(width)<<left<<food_item_names[j]<<setw(width)<<left<<food_item_prices[j]<<endl;        
        }
        cout<<endl;
    }
};

//function to store values
Restaurant* storeValues(){
    int codes[12],prices[12];
    string names[12];

    for(int i=0; i<12; i++){
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
    int sz;
    cout<<"enter no of food items"<<endl;
    cin>>sz;
    cout<<"Restaurant bill system: "<<sz<<" food Items"<<endl;
    //object
    Restaurant *restaurant; 
    //input    
    restaurant=storeValues();

    //keep whole thing in an infinite loop
    for(int k=0; ; k++){
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
                again:
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
                cout<<"Error: Code Is Invalid,Enter Code Again "<<endl;
                //return 0;//end everything
                //continue;
                goto again;//enter this item again
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
            cout<<"want to place another order? enter any digit(1-9). if not enter 0"<<endl;
            int quit=1;
            cin>>quit;
            if(quit==0) return 0;
            else continue;
        }
        return 0;

}
