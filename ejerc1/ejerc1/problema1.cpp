//
//  main.cpp
//  ejerc1
//
//  Created by Usuario on 8/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int multiplos(int N){
    int suma;
    suma=0;
    for (int i=1;i<N;i++){
        if (i%3==0 || i%5==0)
            suma=suma+i;
    }
    return suma;
}
int main(){
    int N;
    cout<<"Number?"<<endl;
    cin>>N;
    cout<<"Sum of all the multiples of 3 or 5 below: "<<N<<" are "<<multiplos(N)<<endl;
}
