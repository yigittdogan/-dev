#include <iostream>
using namespace std;

void printfunction(int n){
if (n>0) { 
printfunction(n-1); 
cout<<n<<" ";
}
}
int main() {
int n=50; 
printfunction(n); 
cout<<endl;
return 0;
}
