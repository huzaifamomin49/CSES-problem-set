#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<cmath>
#include<climits>
#include<map>
#include<stack>
#include<queue>
#include<iomanip>

using namespace std;

int findCombinationsCount(int amount, int coins[])
{
    // I am assuming amount >= 0, coins.length > 0 and all elements of coins > 0.
    if (coins.size() == 1)
    {
        return amount % coins[0] == 0 ? 1 : 0;
    }
    else
    {
        int total = 0;
        int[] subCoins = arrayOfCoinsExceptTheFirstOne(coins);
        for (int i = 0 ; i * coins[0] <= amount ; ++i)
        {
            total += findCombinationsCount(amount - i * coins[0], subCoins);
        }
        return total;
    }
}
int main() {
    int arr[4]={3,2,5};
    
    for(int i=2;i<4;i++){
        ans^=arr[i];
    }
    cout<<ans;
    return 0;
}
