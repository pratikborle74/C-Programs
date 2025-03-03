#include <stdio.h>

int trapWater(int height[], int n) 
{
    int trapped = 0;

    for (int i=1; i<n-1; i++) 
    {
        int left = height[i];
        for (int j = 0; j<i; j++) 
        {
            if (height[j] > left) 
            {
                left = height[j];
            }
        }

        int right = height[i];
        for (int j = i+1; j<n; j++) 
        {
            if (height[j] > right) 
            {
                right = height[j];
            }
        }

        if (left < right) 
        {
            trapped = trapped + (left - height[i]);
        } 
        else 
        {
            trapped = trapped + (right - height[i]);
        }

    }

    return trapped;
}

int main() 
{
    int n;
    printf("Enter the number of bars in the elevation map: ");
    scanf("%d", &n);

    int height[n];
    printf("Enter the heights of the bars: ");
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &height[i]);
    }

    int total_water = trapWater(height, n);
    printf("Tot6al water trapped: %d units\n", total_water);

    return 0;
}

/*
Algorithm:

1. Start.
2. Input the number of bars, `n`.
3. Input the heights of the bars into an array, `height[]`.
4. Initialize `trapped` as 0 to store the total amount of trapped water.
5. For each bar from the second to the second-to-last bar:
   1. Find the maximum height to the left.
   2. Find the maximum height to the right.
   3. Calculate the trapped water for the current bar as the smaller of the two maximum heights minus the current bar's height.
   4. Add this trapped water to `trapped`.
6. Print the total trapped water.
7. End.

*/