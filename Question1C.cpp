#include <iostream> 
using namespace std;
int main(){
int i=1, n;
cout<<"Enter the number of consecutive positive integers:"<<endl;
cin>>n;
int sum=0;
do{
    sum=sum+i;
    i++;
}
while(i<=n);
cout<<sum;
    return 0;
}