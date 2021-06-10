#include<iostream>

using namespace std;

int main(){
	int num,lDig,fDig,temp,count=1,ten=1;
	cin>>num; //12341 % 10000 = 2341
	temp = num;
	
	lDig = temp%10;
	while(temp>10){
		temp/=10;
		count++; //count = heden tsiper baigaag tooljgoo
	}
	fDig = temp;
	
	num = num/10*10 + fDig; //12345
	
	temp = num;
	
	for(int i = 0; i<count-1; i++){
		ten = ten*10; // 10000
	}
	num = num%ten; //2341
	num = ten*lDig + num;
	
	cout<<num;
	
	
	return 0;
}
