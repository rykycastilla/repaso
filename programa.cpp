#include <iostream>
#include <math.h>
using namespace std ;
int main(){
 int x=0;
 string  nombre ="";
 cout<<" mamahuevo dime tu nombre y edad ";
 cin>>nombre>>x;
 if(x>=18){
  cout<<nombre<<" entras "<<endl;
 }
 else if(x=17){
cout<<nombre<<" entras "<<endl;
 }
 else{
  cout<<nombre<<" no entras"<<endl;
 }
 

return 0;
}