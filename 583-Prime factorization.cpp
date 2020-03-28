#include <iostream>
using namespace std;

int main(){
	int n=0,sum;
    while(cin>>n){
    	cout<<n<<"=";
    	if(n==1) cout<<n;
		for(int i=2;i<=n;i++){
                while(n%i==0){
                    if(n%(i*i)==0){
						sum=0;
						while(n%i==0){
							sum++;
							n/=i;
						}
						cout<<i<<"^"<<sum;
					}
					else{
						cout<<i;
						n/=i;
					}
					if(n>1)cout<<"*";
                }
      	}
      cout<<"\n";
    } 
    return 0;
}
