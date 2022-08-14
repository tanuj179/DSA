#include<iostream>
 using namespace std;
 int main(){
    int n;
    cin >>n;//user input
    int i=1;//iteration start with i
    int sum=0;//sum is initally is 0
    while(i<=n)//upto n value it will check
    {
        sum=sum+i;//In sum it will +i value
        i=i+1;//I value increment by 1

    }
    cout<<"Sum is "<<sum<<endl;

 }