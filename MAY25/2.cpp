#include<iostream>

using namespace std;

int main (){
	int num,lDigit,fDigit;
	cout<<"enter a number: ";
	cin>>num; //12345
	lDigit = num%10;
	//num = 1
	
	
	while(num>10){
		num = num/10;
	}
	fDigit = num;
	
	cout<<"First Digit: "<<fDigit<<endl; 
	cout<<"Last Digit: "<<lDigit<<endl;	
	
	
	return 0;
}
