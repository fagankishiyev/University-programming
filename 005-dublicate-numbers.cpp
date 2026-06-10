#include <iostream>
#include <vector>
using namespace std;

class dublicate{
public:
vector<int> dub;
void find(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for(int x : arr)
        {
            if(arr[i] == x){
            count++;
            }
        }
        if(count > 1)
        {
            int cdub = 0;
            for(int h : dub)
            {
                if(arr[i] == h)
                cdub++;
            }
            if(cdub==0)
            {
            dub.push_back(arr[i]);

            }
        }
    }
}
void show(){
if(dub.size() == 0)
{
    cout<<"no duplicate number"<<endl;
    return;
}

for(int x : dub)
cout<<x<<" ";

}
};

int main(){
    dublicate db1;
    db1.find({1,0,0,2,2,3,4,5});
    db1.show();

}