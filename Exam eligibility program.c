#include <stdio.h>

int main()
{
    float attendance,average_marks;
    
    printf("Enter your attendance:\t");
    scanf("%f",& attendance);
    
    printf("Enter your average_marks:\t");
    scanf("%f",& average_marks);
    
    if(attendance  >= 75 && average_marks  >= 40)
    {
        printf("ELIGIBLE");
    }
    else
    {
        printf("NOT ELIGIBLE");
    }
    return 0 ;
}
