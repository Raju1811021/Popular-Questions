#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cin>>n;cout<<endl;
	int n1=(n+1)/2;
	while(i<=n1){
		int j=1;
		while(j<=n){
			if(i==j){
				cout<<i;j++;
			}
			else if(j==n-i+1){
				cout<<i;j++;
			}
			else{
				cout<<' ';j++;
			}
		}
		i++;
		cout<<endl;
	}
	int n2=n-n1;
	i=n2;
	while(i>=1){
		int j=1;
		while(j<=n){
			if(i==j){
				cout<<i;
			}
			else if(j==n-i+1){
				cout<<i;
			}
			else{
				cout<<' ';
			}
			j++;
		}
		i--;cout<<endl;
	}
}
