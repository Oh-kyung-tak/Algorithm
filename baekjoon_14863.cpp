#include <bits/stdc++.h>

using namespace std;

int n, k, i, j, dp[105][100005], a, b, c, d, ans;

int main() {
    scanf("%d%d", &n, &k);
    for(i=1; i<=k; i++) dp[0][i] = INT_MIN;
    for(i=1; i<=n; i++) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        for(j=0; j<=k; j++) {
            dp[i][j] = INT_MIN;
            if(j-a>=0) dp[i][j] = max(dp[i][j], dp[i-1][j-a]+b);
            if(j-c>=0) dp[i][j] = max(dp[i][j], dp[i-1][j-c]+d);
        }
    }
    ans = dp[n][0];
    for(i=1; i<=k; i++) ans = max(ans, dp[n][i]);
    printf("%d", ans);
    return 0;
}
