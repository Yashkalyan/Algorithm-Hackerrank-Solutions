#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
   for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
        {
           printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("#");
        }
       printf("\n");
   }
 
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
