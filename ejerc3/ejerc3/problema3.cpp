//
//  main.cpp
//  ejerc6
//
//  Created by Usuario on 10/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>

#include <iostream>
using namespace std;
int factorprimo(int N){
    int contador=0,maxprim=0;
    for(int i=1;i<=N;i++)
        if(N%i==0){
            contador=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    contador=contador+1;
                }
            }
            if(contador==2){
                maxprim=i;
            }
        }
    return maxprim;
}
int main(){
    int N;
    cout<<"Ingrese numero: "<<endl;
    cin>>N;
    cout<<"El maximo primo es: "<<factorprimo(N)<<endl;
}

