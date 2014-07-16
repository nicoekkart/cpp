#include <cstdio>
using namespace std;

int main() {
    int a1,a2,a3;
    while(scanf("%d %d %d",&a1,&a2,&a3) && !(a1==0 && a2==0 && a3==0)){
        if(a3-a2==a2-a1)
            printf("AP %d\n",a3 + a3 - a2);
        else if (a2/a1==a3/a2)
            printf("GP %d\n",a3*a3/a2);
    }
    return 0;
}