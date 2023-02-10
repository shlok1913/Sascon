#include<iostream>
using namespace std;
int middleOfThree(int a, int b, int c)
{
    // Checking for b
    if ((a < b && b < c) || (c < b && b < a))
       return b;
 
    // Checking for a
    else if ((b < a && a < c) || (c < a && a < b))
       return a;
 
    else
       return c;
}
int main() {
    int query;
    cin>>query;
    while(query) {
        int n;                              //shlok molester
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        cout<<middleOfThree(a,b,c);
        query--; 
    }
}
