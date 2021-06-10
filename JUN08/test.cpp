#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int s,search,count=0#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int s,search,count=0;
	cin>>s;
	int arr[s];
	
	for(int i=0; i<s; i++){
		cin>>arr[i];
	}
	cin>>search;
	
	for(int i=0; i<s; i++){
		if(arr[i]==search){
			count++;
		}
	}
	
	cout<<search<<" "<<count;

	return 0;
};
	cin>>s;
	int arr[s];
	
	for(int i=0; i<s; i++){
		cin>>arr[i];
	}
	cin>>search;
	
	for(int i=0; i<s; i++){
		if(arr[i]==search){
			count++;
		}
	}
	
	cout<<search<<" "<<count;

	return 0;
}
