#include <iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	/*
	if(num%5==0){
		if(num%11==0){
			cout<<"2 uuland huvaagdana!";
		}else{
			cout<<"zovhon 5d huvaagdana!";
		}
	}else{
		if(num%11==0){
			cout<<"zovhon 11d huvaagdana!";
		}else{
			cout<<"2 uuland n huvaagdahgui!";
		}
	}
	*/
	if(num%5==0 && num%11==0){
		cout<<"2 uuland huvaagdana!";
	}else if(num%5==0){
		cout<<"zovhon 5d huvaagdana!";
	}else if(num%11==0){
		cout<<"zovhon 11d huvaagdana!";
	}else{
		cout<<"Alindanch huvaagdahgui";
	}
	
	
	
    return 0;
}
