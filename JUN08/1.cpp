#include<iostream>
using namespace std;
int main(){
	int x = 15;
	int numbers[100];
	int grade[5];
	grade[0] = 10;
	grade[1] = 100;
	grade[2] = 50;
	grade[3] = -10;
	grade[4] = 90;
	
	cout<<grade[3]<<endl;
	
	for(int i = 0; i<100;i++){
		numbers[i] = i*2;
	}
	
	for(int i=0;i<100;i++){
		cout<<numbers[i]<<" ";
	}	
	
	return 0;
}
