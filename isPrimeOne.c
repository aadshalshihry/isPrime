/*
 * =====================================================================================
 *
 *       Filename:  problem.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/03/2015 19:05:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri (), aalshehri08@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int rec(int num, int i)
{
    if(i == 1){
        return 1;
    }else{
        if(num % i == 0 || num == 1){
            return 0;
        }else{
            return num /  rec(num, i - 1);
        }
    }
}

int main(){
    int loop = 0;
    while(1){
        int input = 0;
        printf("Enter num: ");
        scanf("%d", &input); 

        printf("%d\n", rec(input, input/2));

        printf("Loop (0 = for exit): ");
        scanf("%d", &loop);
        if(loop == 0){
            break;
        }
   
    }
        return 0;
}
