#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1,p=1,rd=4*(n-1);
	while(i<=n){
		int j=1;
		if(i==1){
			while(j<=n){
				cout<<p<<' ';
				p++;j++;
			}
		}
		else if(i==n){
			j=1;
			while(j<=n){
				cout<<rd;
				rd--;j++;
			}
		}
		else{
			cout<<rd;
			j=1;
			while(j<=n-2){
				cout<<' '<<' ';
				j++;
			}
			cout<<p;p++;rd--;
		}
		i++;
		cout<<endl;
	}

}
