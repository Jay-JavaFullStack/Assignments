//Write a function formatFollowersCount(count) that takes a number and returns a formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers below 1000 as-is. Add clear comments and use proper indentation.

#include <stdio.h>

// Function to format follower count like Instagram (e.g., 1.5K, 1.2M)
void formatFollowersCount(int count, char result[]){
    // If count is 1 million or more, format as "X.XM"
    if (count >= 1000000) {
        sprintf(result, "%.1fM", count / 1000000.0);
    }
    // If count is 1 thousand or more, format as "X.XK"
    else if (count >= 1000) {
        sprintf(result, "%.1fK", count / 1000.0);
    }
    // If count is below 1000, return it as-is
    else {
        sprintf(result, "%d", count);
    }
}

void main() {
    char formatted[20];

    // Example usage
    formatFollowersCount(1500, formatted);
    printf("%s\n", formatted);  // 1.5K

    formatFollowersCount(1200000, formatted);
    printf("%s\n", formatted);  // 1.2M

    formatFollowersCount(850, formatted);
    printf("%s\n", formatted);  // 850
}