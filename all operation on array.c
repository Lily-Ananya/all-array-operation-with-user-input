#include <stdio.h>
#include <stdlib.h>
int create(int[],int);
int display(int[],int);
int traversal(int[],int);
int insertion(int[],int,int,int);
int deletion(int[],int,int);
int linear_search(int[],int,int);
int binary_search(int[],int,int);
int bubble_sort(int[],int);
int insertion_sort(int[],int);
int selection_sort(int[],int);
int reversal(int[],int);

int main()
{
	int a[50], n,ch, valid = 0,pos,num,element;
    while (1)
    {
        system("CLS");
        printf("Your choices are :\n");
        printf("0.Exit\n1.Create\n2.Display\n3.Traversal\n4.Insertion\n5.Deletion\n6.Linear Search.\n7.Binary Search.\n8.Bubble Sort.\n9.Insertion Sort.\n10.Selection Sort.\n11.Revesal");
        printf("\n\tEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            if (valid == 0)
            {
                n=create(a,n);
            }
            else
                printf("\n\t Array is already created!!");
            fflush(stdin);
            getchar();
            valid = 1;
            break;
        case 2:
            if (valid == 1)
            {
                display(a,n);
            }
            else 
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;
        case 3:
            if (valid == 1)
            {
                traversal(a,n);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 4:
            if (valid == 1)
            {
                n=insertion(a,n,num,pos);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 5:
            if (valid == 1)
            {
                n=deletion(a,n,pos);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 6:
            if (valid == 1)
            {
                linear_search(a,n,element);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 7:
            if (valid == 1)
            {
                binary_search(a,n,element);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 8:
            if (valid == 1)
            {
                bubble_sort(a,n);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 9:
            if (valid == 1)
            {
                insertion_sort(a,n);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 10:
            if (valid == 1)
            {
                selection_sort(a,n);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        case 11:
            if (valid == 1)
            {
                reversal(a,n);
            }
            else
                printf("\n\tArray is not created!");
            fflush(stdin);
            getchar();
            break;

        default:
            printf("\n\t WRONG CHOICE!!");
            fflush(stdin);
            getchar();
        }
    }
    return 0;
}
int create(int a[],int n)
{
    int i;
    printf("\nHow many elements you want?");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\tEnter the array element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n\tYour array is successfully created.");
   return n;
}
int display(int a[],int n)
{
    int i;
    printf("\n\tThe array elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int traversal(int a[],int n)
{
    int i;
    printf("\n\tThe array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("\ta[%d] : %d ", i, a[i]);
        printf("\n");
    }
    return 0;
}
int insertion(int a[],int n,int num,int pos)
{
    int i;
    display(a,n);
    printf("\n\n\tEnter the element you want to insert :");
    scanf("%d", &num);
    printf("\n\n\tEnter the position you want to enter the data: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
        for (i = n - 1; i >= pos - 1; i--)
            a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    n++;
    printf("\nThe new array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return n;
}
int deletion(int a[],int n,int pos)
{
    int i;
    display(a,n);
    printf("\n\tEnter the position from which you want to delete the data: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > n + 1)
    {
        printf("\nInvalid position");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];
    }
    n--;
    printf("\nThe new array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return n;
}
int linear_search(int a[],int n,int element)
{
    int i;
    printf("\n\t");
    display(a,n);
    printf("\n\tEnter the element you want to search : ");
    scanf("%d", &element);
    for (i = 0; i < n ; i++)
    {
        if (a[i] == element)
        {
            printf("\n\tElement %d is present at position %d.", element, i + 1);
        }
        if (i == n)
            printf("\n\tElement %d is not found.", element);
    }
    return 0;
}
int binary_search(int a[],int n,int element)
{
    int i, l = 0, u = n - 1, mid;
    bubble_sort(a,n);
    printf("\n\tEnter the element you want to search : ");
    scanf("%d", &element);
    
    while (l <= u)
    {
        mid = (l + u) / 2;
        if (a[mid] == element)
        {
            printf("\n\tThe element %d is present at position %d.", element, mid + 1);
            break;
        }
        else if (element < a[mid])
        {
            u = mid - 1;
        }
        else if (element > a[mid])
        {
            l = mid + 1;
        }
    }
    if (a[mid] != element)
    {
        printf("\n\tThe element is not present in the array.");
    }
    return 0;
}
int bubble_sort(int a[],int n)
{
    int i, j, flag = 0, temp;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
    printf("\n\t");
    display(a,n);
    printf("\n\n");
    printf("\n\n\tThe sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

int insertion_sort(int a[],int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    printf("\n\t");
    display(a,n);
    printf("\n\n");
    printf("\n\n\tThe sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

int selection_sort(int a[],int n)
{
    int i, j, temp, min;
    for (i = 0; i < n - 1; i++)
    {
         min=i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    printf("\n\t");
    display(a,n);
    printf("\n\n");
    printf("\n\n\tThe sorted array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

int reversal(int a[],int n)
{
    int i, temp;
    printf("\tThe original array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    display(a,n);
    printf("\n\n");
    printf("\nThe array after reversal is:");
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
