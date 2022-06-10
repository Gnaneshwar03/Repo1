#include <iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int A[n],sum=0;
    for(int i=0;i<(n-1);i++){ cin>> A[i];sum=sum+ A[i];}
    cout<< (n*(n+1)/2)-sum ;
    
    return 0;
}
