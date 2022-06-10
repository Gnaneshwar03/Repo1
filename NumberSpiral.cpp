#include <iostream>
#include <math.h> 
using namespace std;
int main() {
    int t,x[t],y[t],N[t]; cin>>t;
    for(int i=0;i<t;i++){cin>>x[i]>>y[i];}
    for (int i=0;i<t;i++){
    if (x[i]==y[i]){N[i]=x[i]*(x[i]-1)+1;}
    else if (x[i]<y[i]){N[i]= y[i]*(y[i]-1)+1-(y[i]-x[i])*(pow((-1),y[i]));}
    else {N[i]= x[i]*(x[i]-1)+1+(x[i]-y[i])*(pow((-1),x[i])) ;}
    }
    for(int i=0; i<t; i++){cout<< N[i]<< endl;}
    return 0;
}
