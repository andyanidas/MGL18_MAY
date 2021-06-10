#include<iostream>
using namespace std;
int main(){
	int arr[10] = {-1,-10,100,5,61,-2,-23,8,-90,51};
	int sum=0;
	
	for(int i=0; i<10;i++){
		sum = sum + arr[i];
	}
	
	cout<<"Total = "<<sum;
	
	
	return 0;
}
