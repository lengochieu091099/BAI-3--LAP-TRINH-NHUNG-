#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <float.h>


int main(int argc, char *argv[]){
char kieu[10];
char kitudau[64];
printf("Enter the data type name (or 'all' to display all):  ");
gets(kieu);
strncpy(kitudau, kieu+0, 1 ); //Tách lấy kí tự đầu trong chuỗi 
kitudau[1] = '\0';
if(strcmp(kitudau,"i")==0 || strcmp(kitudau,"I")==0){ 
        printf("Size of %s: %d bytes\n",kieu,sizeof(int));
        printf("Value range of %s: %d to %d\n",kieu,LONG_MIN,LONG_MAX);
        return 1;
}
if(strcmp(kitudau,"f")==0 || strcmp(kitudau,"F")==0){      
        printf("Size of %s: %d bytes\n",kieu,sizeof(float));
        printf("Value range of %s: %g to %g\n",kieu,FLT_MIN,FLT_MAX);
        return 1;
}
if(strcmp(kitudau,"d")==0 || strcmp(kitudau,"D")==0){ 
        printf("Size of %s: %d bytes\n",kieu,sizeof(double));
        printf("Value range of %s: %g to %g\n",kieu,DBL_MIN,DBL_MAX);
        return 1;
}
if(strcmp(kitudau,"c")==0 || strcmp(kitudau,"C")==0){      
        printf("Size of %s: %d bytes\n",kieu,sizeof(char));
        printf("Value range of %s: %d to %d\n",kieu,SCHAR_MIN,SCHAR_MAX);
        return 1;
}       
if(strcmp(kitudau,"a")==0 || strcmp(kitudau,"A")==0){
        printf("Size of int: %d bytes\n",sizeof(int));
        printf("Value range of int: %d to %d\n",LONG_MIN,LONG_MAX);
        printf("Size of float: %d bytes\n",sizeof(float));
        printf("Value range of float: %g to %g\n",FLT_MIN,FLT_MAX);
        printf("Size of double: %d bytes\n",sizeof(double));
        printf("Value range of double: %g to %g\n",DBL_MIN,DBL_MAX);
        printf("Size of char: %d bytes\n",sizeof(char));
        printf("Value range of char: %d to %d\n",SCHAR_MIN,SCHAR_MAX);
        return 1;
}      
return 0; 
}