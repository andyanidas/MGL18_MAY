  
#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter the size:";
	cin>>n;
	
	for(int row=0; row<n; row++){
		for(int col = 0; col<n;col++){
			if((row%2==0 && col%2==0) || (row%2==1 && col%2==1)){
				cout<<1;
			}else{
				cout<<0;
			}
		}
		cout<<endl;
	}
	return 0;
}


/*
10101010  r=0,c=0 // r=0 c=2 // r=0 c=4
01010101  r=1,c=1 // r=1 c=3 // r=1 c=5
10101010
01010101
10101010
*/

