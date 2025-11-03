#include <stdio.h>
void main()
{
int a[100];
int n, i, pos, found;
// delete an element in an array
printf("Enter the size of the array: \n");
scanf("%d", &n);
printf("Enter the %d elements of the array: \n", n);
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);
}
printf("The array is: \n");
for (i = 0; i<n;i++)
{
printf("%d ,", a[i]);
}
printf("what position is to be deleted from the array: \n");
scanf("%d", &pos);
for(i=pos-1; i<n-1; i++)
{
a[i] = a[i+1];
}
n--;
printf("The new array is: \n");
for (i = 0; i<n;i++)
{
printf("%d ,", a[i]);
}
}

