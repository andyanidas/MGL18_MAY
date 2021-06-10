#include<iostream>

using namespace std;

int main (){
	int num;
	cout<<"enter a number: ";
	cin>>num; //123456
	
	int count=0;
	while(num>0){
		count++;
		num = num/10;
	}
	
	cout<<"Number of digits: "<<count; 





	
	
	
	return 0;
}
