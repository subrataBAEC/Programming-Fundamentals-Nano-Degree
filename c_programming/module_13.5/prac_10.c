/*10.complete
Find the lexicographically smallest string from a list of strings
Example
Input:
5
banana
apple
apply
applet
app
Output:
Lexicographically smallest string is app
*/
#include <stdio.h>
#include <string.h>

int main()
{
	//Declare Variables
	//char string[100]; 
	int i, n,res;
	char prev[1000];
	char string[100]; 

	//Get the maximum number of strings
	printf("Enter number of strings to input\n");
	scanf("%d",&n);

	//Read the string from user
	printf("Enter Strings one by one: \n");
	for(i=0; i< n ; i++) {
		
		scanf("%s",string);
		int len=strlen(string);
		printf("len %d\n",len);
		
		if(i==0) {
			for(int i=0; i<len; i++){
				prev[i]=string[i];
			}
			prev[len]='\0';
			
			printf("when i==0 %s\n",prev);
		}
		else{
			res=strcmp(prev,string);
			printf("res %d\n",res);
			if(res>0) {
				//strcpy(prev,string);
				//prev[0]='\0';
				for(int i=0; i<len; i++){
				prev[i]=string[i];
				//printf("%c",prev[i]);
				}
				prev[len]='\0';
				
			}
			printf("when i>0 %s\n",prev);
		}
	}
	printf("%s\n",prev);
	return 0;
}