#include <bits/stdc++.h>
#include <string>
using namespace std;
//create function to calculate the length of string
int lengthString( char name[]){
	int count=0;
	for(int i=0; name[i]!='\0'; i++){
		count++;
	}
	return count; 
}

int main(){
	
	char str[20];
	cout<<"enter the name: ";
	cin>>str;
	cout<<str<<endl;
	
	//now call the funtion of lengthString 
	
	cout<<"total length: "<<lengthString(str);
	
}

