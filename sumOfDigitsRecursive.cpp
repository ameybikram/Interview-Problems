#include <bits/stdc++.h>

int sumOfDigits(int n)
{
    if(n == 0)
        return 0;
    else{
        return n%10 + sumOfDigits(n/10);
    }
}

int main()
{
    int testcases;
    std::cin>>testcases;
    while(testcases--){
        int n;
    std::cin>>n;
    std::cout<<sumOfDigits(n)<<std::endl;

    }
    
    return 0;
}
