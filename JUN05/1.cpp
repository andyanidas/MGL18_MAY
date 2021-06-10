/*Hallow mirrord
Rhombus Star Pattern
col 123456789
row1*****
row2-*   *
row3--*   *
row4---*   *
row5----***** 
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the size";
	cin>>num;
	
	for(int r = 0; r<num; r++){
		for(int r1=0; r1<r;r1++){
				cout<<num-r1;
		}
		for(int r1=0; r1<(num-r)*2-1;r1++){
				cout<<num-r;
		}
		for(int r1=0; r1<r;r1++){
				cout<<num-r+r1+1;
		}
		
		cout<<endl;
	}
	
	for(int r = 1; r<num; r++){
		for(int r1=0; r1<num-r;r1++){
				cout<<num-r1;
		}
		for(int r1=1; r1<r*2+1;r1++){
				cout<<r+1;
		}
		for(int r1=1; r1<num-r;r1++){
				cout<<r1+r+1;
		}
		
		cout<<endl;
	}
	
	
	
	return 0;
}
