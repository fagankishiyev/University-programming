#include <iostream>
#include <list>
using namespace std;

class fibo {
public:
int n;
list<int>arr;
fibo(int num){
n=num;
}
void find(){
int i=1;
int a=1;
int b=1;
int s=0;
while (i<=n)
{
s=a+b;
a=b;
arr.push_back(b);
b=s;
i++;
}
}
void show(){

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