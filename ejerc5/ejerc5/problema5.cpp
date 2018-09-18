//
//  main.cpp
//  ejerc5
//
//  Created by Usuario on 8/09/18.
//  Copyright © 2018 Usuario. All rights reserved.
//

#include <iostream>
using namespace std;
int numeromenor(){
    int N=1;
    bool a=true;
    while(N<=999999999999){
        a=true;
        for(int i=1;i<=20;i++){
            if(N%i==0)
                continue;
                else
                    a=false;
        }
        if(a==true)
            return N;
        N++;
    }
    return 0;
}
int main(){
    cout<<"El numero menor div entre los 10 es:"<<numeromenor()<<endl;
}
