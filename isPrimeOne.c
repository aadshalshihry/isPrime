/*
 * =====================================================================================
 *
 *       Filename:  way.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/07/2015 21:51:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Roman - Abdulrahman Alshehri (), aalshehri08@hotmail.com
 *   Organization:  way2(m - coins(n), n)
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int coins(int d){

    switch ( d ) {
        case 1:	
            return 1;

        case 2:
            return 5;

        case 3:	
            return 10;

        
        case 4:	
            return 25;
    }				/* -----  end switch  ----- */
    return 0;
}

int way(int a, int d){
    static int count = 0;
    if(d == 1){
        count += 1;
//        return 1;
    }
    if(a==0){
        count += 1;
    } else if(coins(d) <= a){
//        printf("d = %d \\\\ ", d);
        if(coins(d) <= a){
            int temp = 0;
//            temp = a - coins(d);
            a -= coins(d);
            printf("a -= coins(%d) = %d   coins = %d\n",d, a, coins(d));
            count += way(a, d-1)- coins(d-1);
            
//            count += way(a - coins(--d), d);
        }

    }
    return count;
}

int way2(int m, int n){
//    static int a = 0;
    if(n == 1){
        return 1;
    }
    if(m == 0)
        return 1;
    if(m < 0)
        return 0;
    return way2(m, n-1);
    
    
}

int main(int argc, char *argv[]){
    int input = atoi(argv[1]);
    int d = atoi(argv[2]);
    int i;
    for(i = 4; i != 0; i--){
//        printf("%d\n", way(input, i));
    }
    printf("%d\n", way(input, d));
    printf("%d\n", way2(input, d));

}


