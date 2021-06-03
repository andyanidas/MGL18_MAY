  
#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter the size:";
	cin>>n;
	
	for(int row=0; row<n; row++){
		for(int col = 0; col<n;col++){
			if(col==n-1 || row==n-1 || n-row == col +1){
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
row1     *
row2    **
row3   * *
row4  *  *
row5 *****
*/
