

#include <stdio.h>

void fibonacci(n);

int main(void){

    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    fibonacci(n);


}
void fibonacci(n) {

    int a =0;
    int b = 1;
    int c = a + b;
    for (int i = 0; i <= n ; i++){
        if (i < 2){
            printf("%d\t", i);
            continue;
        }
        printf("%d\t", c);
        a = b;
        b = c;
        c = a+ b;
    }
}
