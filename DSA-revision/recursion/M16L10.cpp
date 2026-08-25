//maze path move only right and down
#include<iostream>
using namespace std;
int maze(int rows , int cols)
{
   int grid=rows*cols;
   if(grid==0) return 0;
   if(grid==2) return 1;//if(rows=1 || cols==1) return 1;
   if(grid==3) return 1;//
   return maze(rows-1,cols)+maze(rows,cols-1);
}
//second method to find number of ways from source to destination
int maze2(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays=maze2(sr,sc+1,er,ec);
    int downWays=maze2(sr+1,sc,er,ec);
    return rightWays+downWays;

}
//printing path from source to destination
void printPath(int sr,int sc,int er,int ec,string s)
{
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec)
    {
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');
    printPath(sr+1,sc,er,ec,s+'D');

}
int main()
{
    int rows , cols;
    cout<<"enter rows :";cin>>rows;
    cout<<"enter columns :";cin>>cols;

    cout<<"number of ways "<<rows<<" * "<<cols<<" :"<<maze(rows,cols);
    cout<<endl<<maze2(1,1,rows,cols);
    cout<<endl<<"Paths from source to destination:"<<endl;
    printPath(1,1,rows,cols,"");
}

