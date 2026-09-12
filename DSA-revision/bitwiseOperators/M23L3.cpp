//converting decimal to binary using 
#include <iostream>
using namespace std;
string decimalToBinary(int num)
{
    string result="";
   while(num>0)
   {
    if(num%2==0)
      result='0'+result;
    else 
      result='1'+result;
    num /=2;//in place of this we can use right shift num=num>>1;
   }
    return result;
}
int main()
{
    int n;
    cout<<"enter a num :";
    cin>>n;
    cout<<decimalToBinary(n);

}