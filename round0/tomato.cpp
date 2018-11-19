#include <iostream>
#include <stdlib.h>
/*
Statement

Mr. Little Z wants to live a healthy life, so he decided to eat exactly one tomato every day. The price of tomatoes changes every day, so Mr. Little Z went to a fortune teller to get predictions for the prices of tomatoes for the next n days. Mr. Little will buy tomatoes the most optimal way, because he wants to save some money. However, he must make sure that the tomatoes do not go bad. To be more accurate, if you buy a tomato on the i-th day it will be healthy until the (i+d-1)th day. So, the lifespan of a tomato is d. Important: Mr. Little Z can buy as many tomatoes as he wants in one day! For the given tomatoes' prices in the next n days and the lifespan of tomatoes d, calculate the minimum amount of money that Mr. Little Z has to spend in order to eat one tomato for each of the next n days.

Input:

The first line of the standard input contains two numbers, n and d. Each of the next n lines contains prices for tomatoes ci, where the maximum price for each tomato is 1000.

Output:

To the standard output write one number corresponding to the minimum amount of money Mr. Little Z has to spend in order to eat one tomato every day.

Constraints:

    1 <= n, d <= 200000
    d <= n
    1 <= i <= n

Example input:

8 3
1 ------------ 0<->2
2 ------------ 1<->3
3 ------------     4
2 ------------     5
4 ------------     6
1 ------------     7
3 ------------     *
2 ------------     *
	

1 1 1 2 2 1 1 1
	
Example output:

10
	*/



/* Svaki dan kupuje jedan paradjz. prorocica kaze cenu za narednih n dana. Hoce da ustedi, ali da bude sigurna da se paradjz nece pokvariti. kupim i-tog dana, bice zdrav do i+d-1 tog dana. minimum novca.  */
int main(int argc, char **argv){
    
    int n, d;
    int *A, sum=0;
    int *buy;
    
    
    
    std::cin>>n>>d;
    A=(int*)malloc(n*sizeof(int));
    buy=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        
        std::cin>>A[i];
        buy[i]=0;
    }
    
    /* ako je danas jeftinije kupi danas vise */
    for(int i=0;i<n;i++){
      //  std::cout<<i<<": Danas paradajz kosta: "<<A[i]<<std::endl;
        for(int j=0;(j<d) && (i+j<n);j++){
         //   std::cout<<"\t"<<i+j<<": paradajz kosta: "<<A[i+j]<<" vec kupljen? "<<buy[i+j]<<std::endl;
            if((buy[i+j]==0) || (buy[i+j]>A[i])){
                if(A[i]<=A[i+j]){
          //          std::cout<<"\t"<<"Kupujem paradajz za dan: "<<i+j<<std::endl;
                    sum-=buy[i+j];
                    buy[i+j]=A[i];
                    sum+=A[i];
                }
            }
            
            
            
        }
        
    }
    
    
    std::cout<<sum<<std::endl;
    
    return 0;
}