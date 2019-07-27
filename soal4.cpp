#include<iostream>
#include<string>

using namespace std;
int olah(string kata) ;
int hitung(char s) ;
int main() {
string kata;
cin >> kata;
cout << olah(kata) <<endl;

return 0;
}
int olah(string kata) {
int c = 0;
for(int i = 0 ; i < kata.length(); i++) 
{
		if(hitung(kata.at(i))==1)c++;
} 
return c;
} 
int hitung(char s) {
if(s == 'a' || s == 'i' || s == 'u' || s == 'e' || s=='o') return 1;
else return 0;
}
