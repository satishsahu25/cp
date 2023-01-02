#include <bits/stdc++.h>
using namespace std;

int solve (int N, int* W) {
    // Write your code here
    int arr[N],maxx=W[0],maxind;
    for(int i=1;i<N;i++){
        arr[i]=W[i];
        if(maxx<=W[i]){
             maxx=W[i];
             maxind=i;
        }
    }
    sort(arr,arr+N);

int cnt,restart=0, k,ind=N-1;
    for(int j=maxind;j<N;j++){
        if(arr[ind]>=W[j]){
            cnt++;
            ind--;
        }
       
        }

    return cnt;

    
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        scanf("%d", &N);
        int i_W;
        int *W = (int *)malloc(sizeof(int)*(N));
        for(i_W = 0; i_W < N; i_W++)
        	scanf("%d", &W[i_W]);

        int out_ = solve(N, W);
        printf("%d", out_);
        printf("\n");
    }
}