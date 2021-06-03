  
#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter the size:";
	cin>>n;
	
	for(int row=0; row<n; row++){
		for(int col = 0; col<n;col++){
			if(col==0 || row==n-1 || row==col){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
/*
row1 *
row2 **
row3 * *
row4 *  *
row5 *****
*/
