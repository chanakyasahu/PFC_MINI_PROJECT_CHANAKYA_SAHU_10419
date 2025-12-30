#include<stdio.h>
int main() {
    //MINI Project: Number Classification System
    //Chanakya sahu
    //ERP - 10419

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    //Check Positive, Negative or Zero

    if(num>0){
        printf("%d is positive number\n", num);
    }

    else if(num==0){
        printf("%d is negative number\n", num);
    }
    else{
        printf("%d is negative number\n", num);
    }

    //Check Even or Odd

    if(num%2==0){
        printf("%d is even number\n", num);
    }
    else{
        printf("%d is odd number\n", num);
    }

   // Check Prime or Not

   int flag = 0;

   if(num<=1){
    printf("Not prime number\n");
    return 0;
   }

   for(int i=2; i<=num-1; i++){
    if(num % i == 0){
        flag = 1;
        break;
    }
}
if(flag == 0){
    printf("%d is a prime number", num);
}
else{
    printf("%d is not a prime number", num);
}
   
    return 0;

}

//Output
/*PS C:\Users\chana\OneDrive\Desktop\C Project> cd "c:\Users\chana\OneDrive\Desktop\C Project\" ; if ($?) { gcc MINI_Project.c -o MINI_Project } ; if ($?) { .\MINI_Project }
Enter a number : 11
11 is positive number
11 is odd number
11 is a prime number
PS C:\Users\chana\OneDrive\Desktop\C Project>*/ 
