#include <bits/stdc++.h>
using namespace std;

int main(){
	int x[3][4]={{0,1,3,6}, {4,5,5,9}, {8,9,0,2}};
	
	/***********************************print the elements***********************************/
	
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
