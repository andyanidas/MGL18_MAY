#include<iostream>
using namespace std;
int main(){
	int arr[10] = {-1,-10,100,5,61,-2,-23,8,-90,51};
	int count=0;
	
	for(int i=0; i<10; i++){
		if(arr[i]<0){
			count++;
		}
	}
	int neg[count];
	
	//buh sorog toonuudiig neg[] arrayd bairshuulj baina
	for(int i=0,j=0; i<10; i++){
		if(arr[i]<0){
			neg[j] = arr[i];
			j++;
		}
	}
	
	for(int i=0; i<count ;i++){
		cout<<neg[i]<<" ";
	}
	
	return 0;
}
