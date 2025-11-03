#include<stdio.h>
#include<stdlib.h>
int a[100],i;
int n=0;

void create()
{
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter each elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}

void insert()
{
int i ,value ,pos;
printf("The element to be added: \n");
scanf("%d", &value);
printf("At what position: \n");
scanf("%d", &pos);
if (pos < 1 || pos > n + 1)
{
printf("Invalid position!\n");
}
for (i = n;i> pos-1; i--)
{
a[i] = a[i-1];
}
a[pos-1] = value;
n++;
printf("The new array is: \n");

for (i = 0; i<n;i++)
{
printf("%d", a[i]);
}
}

void delete()
{
int pos,i;
printf("what position is to be deleted from the array: \n");
scanf("%d", &pos);
if (pos < 1 || pos > n)
{
printf("Invalid position!\n");
}
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

void view()
{
int i;
printf("Elements are :\n");
for (i = 0; i<n;i++)
{
printf("%d ,", a[i]);
}
}

void main()
{
int opt=0;
while(1)
{
printf("1.CREATE\n");
printf("2.INSERT\n");
printf("3.DELETE\n");
printf("4.VIEW\n");
printf("5.QUIT\n");
printf("Choose your option : ");
scanf("%d",&opt);
switch(opt)
{
case 1:
create();
break;
case 2:
insert();
break;
case 3:
delete();
break;
case 4:
view();
break;
case 5:exit(0);
default:
printf("Invalid option! Try Again.");
}
}
}


