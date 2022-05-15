#include<iostream>
using namespace std;
int dominopilling(int m,int n){
	//function calculates the dominos sideways
	int domino=0,space=0;
	for(int i=m;i>0;i--){
		for(int j=n;j>0;j-=2){
			if(j==1){
				space++;
				break;
			}else{
				domino++;
			}
		}
	}
	while(space>1){
		//loop for the space left
		domino++;
		space-=2;
	}
	return domino;
}
int main(){
	int m,n;
	cin>>m;
	cin>>n;
	cout<<dominopilling(m,n);
}
