#include <iostream>
using namespace std;
int fac(int n){
return n==1?1:n*fac(n-1);
}
void main(){
	int m;
	int n;
	cout<<"请输入阶乘的上面的数字"<<endl;
	cin>>m;
	cout<<"请输入阶乘下面的数字"<<endl;
	cin>>n;
	cout<<fac(m)/(fac(n)*fac(m-n))<<endl;
}