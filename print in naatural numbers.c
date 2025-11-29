#include<stdio.h>
void print_n(int);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    print_n(n);
    return 0;

}
void print_n(){
 if(n>=0){
       return;
       
    }
    else{
         print_n(n-1);
         printf("%d ",n);
        return;
    }
}
