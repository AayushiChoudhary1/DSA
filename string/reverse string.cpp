#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
  int start=0;
  int end=str.size()-1;
  while(start<end){
      char temp=str[start];
      str[start++]=str[end];
      str[end--]=temp;
  }
  return str;
}

int main(){
	
	
	string str;
	cout<<"enter the string : ";
	cin>>str;
	cout<<"string: "<<str<<endl;
	
	//call the function of reverse string;
	cout<<"print after reverse string: "<<reverseWord(str);
}
