//finding most occuring word in a sentence
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    string s="this is a boy who lives in a village";
    stringstream ss(s);
    string temp;
    int maxCount=0;
    vector<string> words;
    while(ss>>temp)
    {
        words.push_back(temp);
    }
    sort(words.begin(),words.end());
    int count =0 , mxCount;
    string word="";
    string mostFreqWord="";
    for(int i=0;i<words.size();i++)
    {
        if(words[i]==word)
        {
            count++;
            maxCount=count;
            mostFreqWord=words[i];
        }
        else
        {
            word=words[i];
            count=1;
        }

    }
    cout<<endl<<mostFreqWord <<" has frequence :"<<maxCount<<endl;
}


