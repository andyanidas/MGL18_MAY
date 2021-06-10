#include<iostream>
using namespace std;
int main(){
	int s;
	cout<<"Enter the size: ";
	cin>>s;
	
	int arr[s];
	
	//hereglegchees s toonii elementuudiig avan array d bairshuulj baina
	for(int i=0; i<s;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
