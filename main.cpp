#include <iostream>
using namespace stdio;

void sum(int a, int b, int c){
    c=a+b;
}
int main(){
	int a=1;
	int b=4;
	int c=0;
	sum(a,b,c);
	cout<<a<<” + ”<<b<<” = ”<<c; 
}
