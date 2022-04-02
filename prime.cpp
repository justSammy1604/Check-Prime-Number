#include<iostream>
using namespace std;
int main()
{
    int num,m,i,flag=0;
    cin>>num;
    m = num / 2;
    
    if (num==0 || num==1)
    flag=1;

    for (i=2; i<=m; i++){
        if (num%i==0){
flag=1;
break;
        }
    }
    if (flag==0)
        cout<<"Prime Number found"<<endl;
        else
        cout<<"Not a Prime Number"<<endl;
        return 0;
}
