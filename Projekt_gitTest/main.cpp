#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	// *** test ***
	char *str = new char[15];
	for(int i = 0;i<10;++i){
		itoa(i,str,10);
		cout<<str<<endl;
	}
	cout<<"Hello world!"<<endl;
	// *** Dodatkowy kod dla galezi ***
	_getch();
}