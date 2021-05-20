#include <iostream>

using namespace std;

int main(){
	int negj,tolbor=0;
	cout<<"negj dung oruul: ";
	cin>>negj; //500
	
	if(250<negj){
		tolbor = tolbor + (negj-250)*150;
		negj = 250;
	}
	
	if(150<negj){
		tolbor = tolbor + (negj-150)*120;
		negj = 150;
	}
	
	if(50<negj){
		tolbor = tolbor + (negj-50)*75;
		negj = 50;
	}
	
	tolbor = tolbor + negj*50;
	
	cout<<"Tanii tolbor : "<<tolbor;

	
    return 0;
}
