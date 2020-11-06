#include <iostream> 
#include <io.h>
#include <fcntl.h>
#define a L'\u2588'
#define b L'\u2500'
#define c L'\u2502'
#define p L'\u2571'
#define J std::wstring
int q=0;J A(wchar_t ch){return J(q*4,ch);}int main(){_setmode(_fileno(stdout),_O_U16TEXT);std::cin>>q;if(q<=0)exit(0);J x=J(q+1,' ')+a+A(b)+L"\u2588\n";for(int i=0;i<q;i++)x+=J(q-i,' ')+p+A(' ')+p+J(i,' ')+c+L'\n';x+=a+A(b)+a+J(q,' ')+L"\u2502\n";for(int i=0;i<q-1;i++)x+=c+A(' ')+c+J(q,' ')+L"\u2502\n";x+=c+A(' ')+c+J(q,' ')+L"\u2588\n";for(int i=0;i<q;i++)x+=c+A(' ')+c+J(q-i-1,' ')+L"\u2571\n";x+=a+A(b)+a;std::wcout<<x;}
