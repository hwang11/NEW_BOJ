#include <iostream>
using namespace std;
int n;

int main(int argc, const char * argv[]) {
    int step[301] = {0};
    int sum_steps[301] = {0};
    cin >> n;
    for(int i=1 ; i <= n ; i++ ){
        cin >> step[i];
    }
    sum_steps[1] = step[1];
    for(int i=2 ; i <= n ; i++ ){
        sum_steps[i] = max(step[i-1]+sum_steps[i-3],sum_steps[i-2]) + step[i];
    }
    cout << sum_steps[n];
    return 0;
}
/*#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[300];
    int arr[300];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    dp[0]=arr[0];
    dp[1]=arr[1];
    dp[2]=max(arr[0]+arr[2],arr[1]+arr[2]);
    for(int i=3;i<n;i++){
        dp[i]=max(dp[i-3]+arr[i-1]+arr[i-2],dp[i-2]+arr[i]);
    }
    cout << dp[n-1] <<endl;
    return 0;
}*/
