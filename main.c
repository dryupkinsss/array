#include <stdio.h>

int main() {
    int N, K;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i <= N -1; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < N; i++) {
        if(arr[i] % 2 == 1) {
            printf("%d", arr[i]);
            ++K;

        }
    }
    printf("%d", K);
    return 0;
}
