#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kalimat1[100];
	char kalimat2[100];
	
	cout<<"Masukkan kalimat : ";
	gets(kalimat1);
	
	cout<<"Masukkan kalimat pengganti : ";
	gets(kalimat2);
	
	strcpy(kalimat1,kalimat2);
	cout<<kalimat1;
}
