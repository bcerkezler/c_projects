/* Verilen dizide en cok tekrar eden elemani bulan
 * program 
 */

#include <stdio.h>


int main()
{
    int list[100], counter[100] = {0}, i, n, max, cmax, mod = 0;
    
    printf("Please enter array size: ");
    scanf("%d", &n);
    
    printf("Please enter an integer array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);

    max = list[0];
    for (i = 1; i < n; i++)
    {
        if (list[i] >= max)
            max = list[i];
    }
        
    
    for (i = 0; i < n; i++)
            counter[list[i]]++;
    
    cmax = counter[0];
    for (i = 1; i <= max; i++)
    {
        if (counter[i] >= cmax) 
        {
            cmax = counter[i];
            mod = i;
        }    
    }
    
    printf("Mode of the array: %d", mod);

    return 0;
}