#include<stdio.h>
int main ( )
 {
 char name [ 30 ] ;
 printf ( " Enter name : " ) ;
 fgets ( name , sizeof ( name ) , stdin ) ; // re ad s t r i n g
 printf ( "Name : " ) ;
 puts ( name ) ; // d i s pl a y s t r i n g
 return 0 ;
 }
