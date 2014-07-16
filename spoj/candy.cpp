#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(1){
        scanf("%d",&n);
        if(n==-1)
            break;
        vector<int> a;
        int sum = 0;
        for(int i=0; i < n; i++){
            int t;
            scanf("%d",&t);
            a.push_back(t);
            sum+=t;
        }
        if(sum%n!=0){
            printf("-1\n");
        } else {
            int n_sum = 0;
            for(int i = 0; i < n; i++){
                int t = a[i];
                if(t > sum/n)
                    n_sum += t-(sum/n);
            }
            printf("%d\n",n_sum);
        }
    }
    return 0;
}