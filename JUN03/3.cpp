  
#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter the size:";
	cin>>n;
	
	for(int row=0; row<n; row++){
		for(int space = 0; space<n-row-1;space++){
			cout<<" ";
		}
		for(int star = 0; star<row*2+1; star++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	
	
	
	return 0;
}
/*
row1     *
row2    ***
row3   *****
row4  *******
row5 *********
*/
