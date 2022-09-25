#include <bits/stdc++.h>
using namespace std;




int main(){

	int a[]={-12,11,-13,-5,6};
	int n= sizeof(a)/sizeof a[0];
	int m=0, h=n-1;
	
	while(m<=h){
		if(a[m]<0)
		m++;
		else{
		swap(a[h], a[m]);
		h--;
	}
	}
	
	cout<<"printed the sorted array: ";
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
} 
