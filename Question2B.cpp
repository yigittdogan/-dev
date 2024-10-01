#include <iostream>
using namespace std;
void printSum(int n, int sum=0) {
if (n>0){
sum=sum+n;
printSum(n-1,sum); 
}
else{
cout<<sum<<endl;
}
}

int main() {
int n; 
cout << "Enter the number: ";
cin >> n;
printSum(n);
return 0;
}
