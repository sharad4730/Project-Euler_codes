#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long int n1,n2,n3,n,sum1,sum2,sum3,sum;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%3==0)
            n1=(int)floor((double)n/3)-1;
        else
            n1=(int)floor((double)n/3);
        if(n%5==0)
            n2=(int)floor((double)n/5)-1;
        else
            n2=(int)floor((double)n/5);
        if(n%15==0)
            n3=(int)floor((double)n/15)-1;
        else
            n3=(int)floor((double)n/15);
        sum1=3*(n1)*(n1+1)/2;
        sum2=5*(n2)*(n2+1)/2;
        sum3=15*(n3)*(n3+1)/2;
        sum=sum1+sum2-sum3;
        cout<<sum<<endl;
    }
    return 0;
}
