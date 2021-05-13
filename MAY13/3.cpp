#include<iostream>

using namespace std;

int main(){
	double a = 20.0;
	double b = 1.5;
	a = a + b; // a giin utga iig b geer ihseg
	a +=b;
	
	b = a*b;	//b giin utga iig a dahin ihseg
	b *=a;
	
	a = a - b;
	a -=b;
	
	a = a/b;
	a /=b;
	
	
	cout<<a;
	
	
	return 0;
}
