#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int e[n],f[n],g[n];
    for(int i=0;i<n;i++){ cin>> e[i];f[i]=e[i];}
    for(int i=1;i<n;i++){
        if (e[i-1]<e[i]){e[i]=e[i];}
        else {e[i]=e[i-1];}
    }
    for(int i=0;i<n;i++){g[i]=e[i]-f[i];}
    int sum=0;
    for(int i=0;i<n;i++){sum= sum+g[i];}
    cout<< sum;
    return 0;
}
