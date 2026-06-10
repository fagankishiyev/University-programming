#include <iostream>
#include <vector>
using namespace std;

class task{
public:
vector<int>s;
    task(vector<int>ss){
    s=ss;
    }
void Sort()
{
    int k=s.size()-1;
    while(k!=-1)
    {
        for ( int i = k; i < s.size()-1; i++)
        {
            if(s[i]>s[i+1])
            {
                int temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
        k--;
    }
}
void display()
{
    for (int i = 0; i < s.size(); i++)
    {
    cout<<s[i]<<" ";
    }
}
};
int main()
{
    vector<int>v={9,8,7,6,5,4,3,2,1};
    task t1(v);
    t1.Sort();
    t1.display();
}