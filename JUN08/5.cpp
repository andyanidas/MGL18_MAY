#include<iostream>
using namespace std;
int main(){
	int arr[10] = {-1,-10,100,5,61,-2,-23,8,-90,51};
	int maxim = arr[0];
	int minim = arr[0];
	
	for(int i=0; i<10;i++){
		if(arr[i]>maxim){
			maxim = arr[i];
		}
		if(arr[i]<minim){
			minim = arr[i];
		}
	}
	
	cout<<"Max element = "<<maxim<<endl;
	cout<<"Min element = "<<minim;
	
	return 0;
}
