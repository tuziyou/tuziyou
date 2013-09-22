#include<iostream>
#include<stdlib.h>
using namespace std;
	int cf(int c){
           int f;
		   f=9/5*c+32;
		   return c;
}
	int fc(int f){
	       int c;
		   c=5/9*(f-32);
		   return f;
	}
	void main(){
	int n;
	char m;
	cout<<"请输入温度值："<<endl;
	cin>>n;
	cout<<"请输入温度类型，摄氏温度输入c，华氏温度输入f"<<endl;
	cin>>m;
	if(m=='c')
		cout<<cf(n)<<endl;
	else
		cout<<fc(n)<<endl;
	}