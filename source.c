/*
 * =====================================================================================
 *
 *       Filename:  source.c
 *
 *    Description:  famous conjecture, called the Goldbach conjecture,
 *                  says that every even integer n greater than 2 has 
 *                  the property that it is the sum of two prime numbers
 * 
 *
 *
 *        Version:  1.0
 *        Created:  11/07/2015 21:51:45
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri, aalshehri@umassd.edu
 *
 * =====================================================================================
 */

#include "source.h"


// return one if num is prime.
int isPrime(int num, int div)
{
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

// return one of bot n1 and n2 is prime numbers 
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

/*
 *
 * This is non recursive function, print all even number that is a sum of 
 * two prime numbers.
 * 
 * 
 */
void conjecture()
{
    int i = START;
    int j, temp;
    
    while (i <= FINISH) {
        
        for (j = 2; j <= i/2;j++) {
            temp = i - j;
            if(isPrime(j,j/2) && isPrime(temp,temp/2))
                if(i%2==0){
                    printf("%d = %d + %d\n",i, j, temp);
                    break;
                }
        }
        i++;
    }

}

int conjRec(int i, int j)
{
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