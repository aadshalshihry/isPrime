/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   conjecture.c
 * Author: Roman - Abdulrahman Alshehri <aalshehri08@hotmail.com>
 *
 * Created on November 12, 2015, 8:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define START 700
#define FINISH 1100

int isPrime(int num, int div){
    if(div == 1){
        return 1;
    }else {
        if(num % div == 0){
            return 0;
        } else {
            return isPrime(num, div-1);

        }
    }
}

int isGC(int n1, int n2)
{   int temp = 0;
    int result = 1;
    if(isPrime(n1,n1/2) && isPrime(n2,n2/2)){
        temp = n1-n2;
        
//        if(temp % 2 == 0)
            result = 1;
    }
    return result;
}

void conjecture(){
    int i = START;
    int j, temp;
    
    while (i <= FINISH) {
        
        for (j = 2; j <= i/2;j++) {
            temp = i - j;
            if(isPrime(j,j/2) && isPrime(temp,temp/2))
                if(i%2==0){
                    printf("%d = %d - %d\n",i, j, temp);
                    break;
                }
        }
        i++;
    }

}

int conjRec(int i, int j){
    static int result = 0;
    
    if(j > FINISH/2){
        return result;
    }
    
    if(isGC(i,j)){
        printf("========%d - %d\n",i, j);
        if((i - j) % 2 == 0){
            result = 1;
            return result;   
        }
    }
    
//    (j)++;
    printf("%d - %d\n",i, j);
    return conjRec(i, ++j);
    
    
}

int main(int argc, char** argv) {
    
    int i, j, result = 0, temp;
   
    for ( i = START;  i <= FINISH; i++) {
        j = 2;
        
        if(i % 2 == 0){
//            printf("[+] %d ", i);
            result = conjRec(i, j);
            temp = i - j;
//            printf("[+] %d>%d \n", result,j);
            if(result){
                printf("%d = %d - %d\n",i, temp, j);
            }
        }
        
    }


    
    
    return 0;
}

