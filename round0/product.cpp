// Statement
// 
// Let P be the product of all numbers from 1 to N. Write a program that calculates the last non-zero digit of number P.
// 
// Input:
// 
// The first and only line of standard input contains the number N.
// 
// Output:
// 
// The standard output should contains the last non-zero digit of number P.
// 
// Constraints:
// 
//     1 ≤ N ≤ 104
// 
// Example input:
// 
// 10
// 		
// 
// Example output:
// 
// 8
// 		
// 
// Time and memory limit:
// 
//     0.1 seconds
//     16MB
// 
// Explanation:
// 
// 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 = 3628800 and the last non-zero digit is 8. 

#include <iostream>
#include <stdlib.h>

// poslednja ne nula cifra proizvoda prvih n brojeva
//ideja: mnozim brojeve i cim je deljivo sa 10 izbrisem nulu
// umjesto da pomnozim sa 5 podelim sa dva ako je neparan, iskuliram ako je paran

int main(int argc, char **argv){
    
    int n;
    int p=1;
    std::cin>>n;
    
    for(int i=2;i<=n;i++){
        
        if(i%5==0){
            if(i%2==0) continue;
            p=p/2;
            
        }
        
        else p*=i;
        
        
    }
    
    std::cout<<p%10<<std::endl;
  
    
    return 0;
}