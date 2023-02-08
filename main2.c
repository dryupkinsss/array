#include <stdio.h>
#define MAXN 1000
int main() {
    int n;
    scanf("%d", &n);
    int arr[MAXN];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d", arr[i]);
        }
    }
    return 0;
}
