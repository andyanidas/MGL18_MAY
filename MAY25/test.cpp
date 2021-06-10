#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int a,b;
	cin>>a>>b;
	
	for(int i=a/2; i>1;i--){
		if(a%i==0 && b%i==0){
			a/=i;
		}
	}
	cout<<a*b;

	return 0;
}
