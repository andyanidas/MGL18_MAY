#include<iostream>
using namespace std;
int main()
{
	for(int i = 1; i<=10;i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;


	int sum=0;
	for(int i = 1; i<=10;i++){
		sum = sum + i;
	}
	cout<<sum;
	
	
	return 0;
}
