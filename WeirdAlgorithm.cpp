#include <iostream>
using namespace std;
int main() {
    int n; cin>> n;
    int x= n; cout<< n<< " ";
    while (x!=1)
    {if (x%2==0) {x=x/2;}
    else  {x=3*x+1;}
    cout<<x<<" ";}

    return 0;
}
