#include<iostream>
using namespace std;
int fac(int x,int y){
        int n,result=1;
		for(n=1;n<=y;n++)
			result=result*x;
		return result;
}
void main(){
int x,y;
cout<<"请输入底数x"<<endl;
cin>>x;
cout<<"请输入指数y"<<endl;
cin>>y;
cout<<fac(x,y)<<endl;
}