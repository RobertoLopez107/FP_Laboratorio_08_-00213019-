
#include <iostream>

using namespace std;

int main(void)
{
    char carnet[8];
    int fila=9;
    int col=5;
    char matriz[fila][col];
cout<<"Ingrese su numero de carnet: "<<endl;
if(fila%2==0){
    for(int i=0; i<9; i++){
        for(j=0; j<5; j++){
            cin>>matriz[i][j];
            //cout<<matriz[i][j];
        }   
    }
}else{
    for(int i=0; i>0; i--){
        for(int j=0; j>0; j--){
            cin>>matriz[i][j];
            //cout<<matriz[i][j];
        }
    }
    for(int i=0; i>0; i--){
        for(int j=0; j>0; j--){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}