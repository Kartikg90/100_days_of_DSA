//Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int n , i ; 
    printf("Enter the size of the array : ") ; 
    scanf("%d", &n) ; 
    int *A = (int *) malloc ( n * sizeof ( int ) ) ;
printf ( "Enter the array elements : " ) ;
    for ( i = 0 ; i < n ; i ++ ) 
    {
        scanf ( "%d" , &A[i] ) ; 
    }
    int left = 0 , right = n - 1 ;
    while ( left < right ) 
    {
        int temp = A[left] ; 
        A[left] = A[right] ; 
        A[right] = temp ; 
        left ++ ; 
        right -- ; 
    }
    printf ( "Reversed array : " ) ;
    for ( i = 0 ; i < n ; i ++ )
    {
        printf ( "%d " , A[i] ) ; 
    }
    free ( A ) ;
    return 0 ;
}

#include <stdio.h>
#include <stdlib.h>
int main () 
{
    int n , i ; 
    printf("Enter the size of the array : ") ; 
    scanf("%d", &n) ; 
    int *A = (int *) malloc ( n * sizeof ( int ) ) ;
printf ( "Enter the array elements : " ) ;
    for ( i = 0 ; i < n ; i ++ ) 
    {
        scanf ( "%d" , &A[i] ) ; 
    }
    int left = 0 , right = n - 1 ;
    while ( left < right ) 
    {
        int temp = A[left] ; 
        A[left] = A[right] ; 
        A[right] = temp ; 
        left ++ ; 
        right -- ; 
    }
    printf ( "Reversed array : " ) ;
    for ( i = 0 ; i < n ; i ++ )
    {
        printf ( "%d " , A[i] ) ; 
    }
    free ( A ) ;
    return 0 ;
}