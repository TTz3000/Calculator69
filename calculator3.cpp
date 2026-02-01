#include <stdio.h>
int main() {
    int num[100] , i = 0 ;
    while ( i < 10 )
    {
        printf ( "enternum\n" ) ;
        scanf( "%d" , &num[i] ) ;
        i++ ;
    }
    printf ( "%d \n" , num ) ;
    
    printf ( "end" ) ;
    return 0 ;
}
