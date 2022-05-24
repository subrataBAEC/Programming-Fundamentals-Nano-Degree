/*
Asma wrote the following function to make an integer positive. 
void makePositive(int a) {
	if (a < 0) {
		a = -a;
	}
}
Will it work? If not, how can she fix it? 
*/
    #include<stdio.h>
    #include<string.h>

//prototype
        void makePositive(int a);

// driver code
int main(){

    int a=-50;
    //scanf("%d",&a);
    makePositive(a);
    
    return 0;
}
// function
    void makePositive(int a) {
	if (a < 0) {
		a = -a;
	}
    printf("%d",a);
}

