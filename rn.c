#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int scores[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &scores[i]);
    }
    
    int kth_place_score = scores[k - 1];
    int participants_to_advance = 0;
    
    // Count participants with score greater than or equal to k-th place finisher's score
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= kth_place_score && scores[i] > 0) {
            participants_to_advance++;
        }
    }
    
    // Output the result
    printf("%d\n", participants_to_advance);
    
    return 0;
}
