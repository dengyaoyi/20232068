#include"fibo.h"
long fibo(int n){
    if(n<2)
	    return 1L;
    else
	    return fibo(n-1)+fibo(n-2);
}
