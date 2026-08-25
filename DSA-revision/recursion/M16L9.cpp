//stair case problem
#include<iostream>
using namespace std;
int stairs(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    int n;
    cout<<"enter number of stairs :";
    cin>>n;
    cout<<"number of ways to climb "<<n<<" stairs is :"<<stairs(n);
}

