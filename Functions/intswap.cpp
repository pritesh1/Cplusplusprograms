//Detect Pangrams.
//

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;


int swap(int rev[],int rev1[],int a , int b);


//int size(char  arr[]);

int main(){
	int i;
	int input[20];
	for (i=0;i<5;i++){
		cin>>input[i];
	}
	swap(input,input,3,4);
	for (i=0;i<5;i++){
		cout<<input[i];
	}
	//cout<<"\nYe lo:"<<inputa;
}




int swap(int rev[],int rev1[],int a , int b){
		int temp;
		temp =rev[a-1];
		//cout<<temp<<"\n";		
		rev[a-1] =rev1[b-1];
		rev1[b-1]= temp;
}



