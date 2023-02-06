
#include <stdio.h>

char isPrimeOrNot(n);
void generate_all_prime(l, u);

int main(void){

    int n, u;
    printf("Enter a lower limit: ");
    scanf("%d", &n);
    printf("Enter a upper limit: ");
    scanf("%d", &u);

    generate_all_prime(n, u);


}
char isPrimeOrNot(n){

    int prime = 1;
    if (n !=2 && n !=3 && n!=5 && n!= 7){

        if (n %2 ==0 || n%3 == 0 || n%5 == 0 || n%7 == 0){
            return 'n';
        }else {

            return 'p';
        }
    }
    else {
        return 'p';
    }
}

void generate_all_prime(l, u){

    for (int i =l; i<= u; i++){
        if (isPrimeOrNot(i)=='p'){
            printf("%d\t", i);
        }
    }

}

