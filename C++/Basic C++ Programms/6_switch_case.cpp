#include<iostream>

using namespace std;

int main(){
	char ch;
	cin>>ch;
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<ch<<" Is an Vowel.";break;
		default:
			cout<<ch<<" Is an Consonant.";
	}
}
