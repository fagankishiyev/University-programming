#include <iostream>
#include <list>
#include <cmath>
using namespace std;

class fibo {
public:
int n;
list<int>arr;
fibo(int num)
{
    n=num;
}

void find()
{
    int i=0;
    int b;
    while (i<n)
    {
        double r1 = (1 + sqrt(5)) / 2;
        double r2 = (1 - sqrt(5)) / 2;
        b=(pow(r1, i) - pow(r2, i)) / sqrt(5);
        arr.push_back(b);
        i++;
    }
}

void show()
{
    for(int k:arr){

    cout<<k<<" ";
    }
}

};

int main(){
int a;
cout<<"Enter number of elements: ";
cin>>a;
fibo f1(a);
f1.find();
f1.show();

}