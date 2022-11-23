#include <iostream>
using namespace std;

int main() {
    int a=1,b=1,i=3,n=0;
    cin>>n;
    if (n>=2)
    {cout<<a<<endl<<b<<endl;
    while(i++ <=n){
        cout<<a+b<<" "<<endl;
        if(a<b){
            a+=b;
        }else
        {b+=a;}
    }
    }else {cout<<"errore";}
    cout<<endl;
   return 0;
}
