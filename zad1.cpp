#include <iostream>
using namespace std;
int sum = 0;

int main()
{
    for(int i=1;i<101;i++)
    {
        sum = sum + i*(i+1);


    }
    cout<<sum;
}
