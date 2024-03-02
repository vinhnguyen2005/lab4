#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

float calaverage(int *arr, int n)
{
    int sum = 0;
    float average = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = (float)sum / n;
    return average;
}
// su dung *n vi khi ta add hoac delete size cua mang se thay doi >> update size cua mang trong main
void addelement(int *arr, int *n, int pos, int num)
{
    for (size_t i = *n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i]; // dich sang phai de chua tro cho so can add
    }
    arr[pos - 1] = num; //khoảng trống vừa dịch sẽ đc set là số t muốn thêm vào
    printf("New array: ");
    for (size_t i = 0; i < *n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void removeelement(int *arr, int *n, int pos2)
{
    if (pos2 >= *n +1)
    {
        printf("Deltetion is impossible.\n");
    }
    else
    {
        for (size_t i = pos2 - 1; i < *n; i++)
        {
            arr[i] = arr[i+1]; // dich sang trai de xoa phan tu muon xoa
        }    
        printf("New array: ");
        for (size_t i = 0; i < *n - 1; i++)
        {
            printf("%d ", arr[i]);
        } 
    }
    printf("\n");
}

void reversearray(int *arr, int *n)
{
      
}

int main()
{
    int arr[] = {9, 6, 5, 3, 1, 6, 6, 3, 5, 4, 8, 5, 6, 6, 2, 1, 5, 8, 5, 6, 5, 4};
    int s = sizeof(arr) / sizeof(arr[0]);
    printf("Average value of this array: %.2f\n", calaverage(arr, s)); 
    int pos, num, pos2;
    printf("Enter the location you want to add an element: ");
    scanf("%d", &pos);
    printf("Enter the element you want to add: ");
    scanf("%d", &num);
    addelement(arr, &s, pos, num);
    printf("Enter the location you want to delete an element: ");
    scanf("%d", &pos2);
    removeelement(arr, &s, pos2);
    reversearray(arr, &s);

    return 0;
}
