#include<iostream>

using namespace std;

int main (){
	int num,sum=0;
	cout<<"enter a number: ";
	cin>>num; //1234
	
	
	
	while(num>0){
		sum = sum + num%10;
		num = num/10;
	}
	cout<<"Tsiipruudiin niilber: "<<sum;
	
	return 0;
}
