
#include <cstdlib>
#include <iostream>

using namespace std;
bool bolundumu(int );

int main(int argc, char *argv[])
{
    int sayi;
    do{
    cout<<"Bir sayi giriniz(cikis icin 0'a basin)\n";
    cin>>sayi;
    if(sayi>1)
    {
    if(bolundumu(sayi)==1)
    cout<<sayi<<" sayi asal degildir\n\n";
    else
    cout<<sayi<<" sayi asal sayidir.\n\n";
    }
    else
     cout<<sayi<<" sayi asal degildir\n\n";

 }


 while(sayi!=0);
       
   system("pause");
   return 0; 
}   
bool bolundumu(int a)
{
     static int b=2;
     
     if(b*b<=a)
     {
     if(a%b==0)
     {
     b=2;
     return true;
     }
     else
     {
     b=b+1;
     return bolundumu(a);
     }
     }
     else
     {
     b=2;
     return false;
     }
      
}
