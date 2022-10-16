# include <stdio.h>
void main()
{
    int num1=10, num2=20;
    // int *p=&num1, *q=&num2;
    // *p++=*q++;
    // printf(" %d %d ",num1,num2);
    // printf("%d %d\n", ++num1,num1++);
    // num1=10;
    // printf("%d %d", num1++,num1++);


     int *ptr=&num1;
    // // *ptr=11;
    // ptr=&num2;
     *ptr+=1;
    // printf("%d\n",*ptr);
    // printf("%p",ptr);
    //int n=2;
    //int a[n];
    //a[0]=10;
    //a[1]=20;
    //int *ptr;
    //ptr=a;
    //ptr++;
    printf("%d\n",*ptr);
    printf("%p",ptr);

}
