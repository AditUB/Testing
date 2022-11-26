# include <stdio.h>
//testing pointer
void pointers()
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


// enum day{hi, hii, hu=0};
//enum dayy{c1=8, c2=3, c3=4};

void main()
{
    //Bounds
    // int a=-65;
    // char b='-a';
    // printf("%c",a);

    //values over int
    // int a=21474836489;
    // printf("%d",a);


    //Testing enums
    // for(int b=hii;b>=hu;b--)
    //  {
    //      printf("%d\n",b);
    //  }

    //pointer size
    // int *ptr;
    // printf("%d", sizeof(int));

}