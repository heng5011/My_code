/*************************************************************************
	> File Name: 1062a.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 21 Apr 2019 06:43:11 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n,i,j,asd;
	while(cin>>n)
	{
		getchar();
		while(n--)
		{
			string s;
			getline(cin,s);
			j=0;
			asd=0;
			for(i=0;i<s.length();i++){
				if(s[i]==' '){
					for(j=i-1;j>=asd;j--){
						cout<<s[j];
					}
					cout<<" ";
					asd=i+1;
				}
			}
			for(j=i-1;j>=asd;j--)
				cout<<s[j];
			cout<<endl;
		}
	}
	return 0;
}
