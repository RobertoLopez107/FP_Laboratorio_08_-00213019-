#include <iostream>

using namespace std;

int main(void){
   char carnet[8];
   
    cout<<"Ingrese su carnet: "<<endl;
    for(int i=0; i<8; i++)
    {
        cin>>carnet[i];
    }
    for(int i=8; i>0; i--)
    {
        cout<<carnet[i];
    }
    
}