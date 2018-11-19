#include <iostream>
#include <stdlib.h>

int compare (const void * a, const void * b){
  return ( *(long int*)a - *(long int*)b );
}
int main(int argc, char**argv){
    
    int n;  // length array
    long int *A; //array
    
    std::cin>>n; // read length array
    
    A=(long int*)malloc(sizeof(long int)*n);
    
    for(int i=0;i<n;i++){
        
        std::cin>>A[i];
    }
    
    
    qsort(A, n, sizeof(long int), compare);
    
    for(int i=0;i<n;i++){
        
        std::cout<<A[i]<<" ";
    }
    
    std::cout<<std::endl;
    
   
    
    
    
    return 0;
}