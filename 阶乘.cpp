#include <iostream>

using namespace std;

// long long jc(long long n,long long m){
//     if (n==0)
//     {
//         return 1;
//     }
//     else if(n==m)
//     {
//         return m;
//     }
//     return n*jc(n-1,m);
// }

// long jc2(unsigned int n){
//     if(n==0||n==1)
//     {
//         return 1;
//     }
//     if(n!=0&n!=1)
//     {
//         return n*jc2(n-1);
//     }
// }



long factorial_recursion(int n){
    if(n<=0){
        return 1;
    }else{
        return n * factorial_recursion(n-1);
    }
}

long factorial_iteration(int n){
    int result = 1;
    while(n>1){
        result *= n;
        n--;
    }
    return result;
}

int main()
{
    cout << factorial_iteration(26) << endl;
    //x=2,y=0;x=0,y=1;
}
