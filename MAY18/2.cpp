#include <iostream>

using namespace std;

int main(){
	bool rain,goOut,shuherAvah;
	string hariult;
	cout<<"Boroo orj bainyy? ";
	cin>>hariult;
	
	if(hariult == "tiim"){
		rain = true;
	}else{
		rain = false;
	}
	//----------garah--------------------
	cout<<"garah ajil bainyy? ";
	cin>>hariult;
	
	if(hariult == "tiim"){
		goOut = true;
	}else{
		goOut = false;
	}
	
	//---------------------------------------
	
	if(rain && goOut){
		shuherAvah = true;
	}else{
		shuherAvah = false;
	}
	//---------------------------------------
	cout<<endl;
	if(shuherAvah){
		cout<<"Ta shuhree avlaa";
	}else{
		cout<<"Ta shuhree avsangui ee";
	}
	
	
	
    return 0;
}
