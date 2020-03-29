//Huruf Kecil ke Kapital

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
int i,jum;

char string[100];

cout<<"Masukan sembarang kalimat:\n";
cin.getline(string,100);


if((string[0]>='a')&& (string[0]<='z'))
string[0]=(char)string[0]-32;


jum=1;int d=2;
for(i=0;i<(int)strlen(string);i++)
{
    if(i%2==0){
   
if((string[jum]>='a')&& (string[jum]<='z'))
string[jum]=(char)string[jum]-32;
jum++;}
}


for(i=0;string[i]!='\0';i++)
{
    if(string[i]==' ') d++;
if((i-1-d)%1==0)
{
if(string[i]>='a' && string[i]<='z')
string[i]=(char)(string[i]-32);
}
}


cout<<"Hasil Akhir : "<<string<<endl;
getch();
}
