#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//for(initialize;condition;update){body}
	for(int i = 0;i<100;i = i+1){
		//body
		cout<<i<<" ";
	}
	cout<<endl;
	// 9 8 7 6 5 4 3 2 1
	int limit;
	cin>>limit;
	for(int i = limit; i>0; i = i-1){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<max(10,20);
	
	return 0;
}
