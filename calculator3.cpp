#include <stdio.h>
int main() {
    int num[100] , i = 0 ;
    printf ( "enternum\n" ) ;
    while ( scanf( "%d" , &num[i] ) != 34 ) {
        printf ( "enternum\n" ) ;
        scanf( "%d" , &num ) ;
        printf ( "%d\n" , &num[i] ) ;
        i++ ;
    }
    printf ( "end" ) ;
    return 0 ;
}
