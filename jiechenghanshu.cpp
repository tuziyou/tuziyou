#include <iostream>
using namespace std;
int fac(int n){
return n==1?1:n*fac(n-1);
}
void main(){
	int m;
	int n;
	cout<<"������׳˵����������"<<endl;
	cin>>m;
	cout<<"������׳����������"<<endl;
	cin>>n;
	cout<<fac(m)/(fac(n)*fac(m-n))<<endl;
}