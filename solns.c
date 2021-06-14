/* Enter your solutions in this file */
#include <stdio.h>
#include <math.h>


int max(int ar[], int n){
    int _cmax = ar[0];
    for (int i=0 ; i<n ; i++){
        if (ar[i] > _cmax){
            _cmax = ar[i];
        }
    }
    return _cmax;
}

int min(int ar[], int n){
    int _cmin = ar[0];
    for (int i=0 ; i<n ; i++){
        if (ar[i] < _cmin){
            _cmin = ar[i];
        }
    }
    return _cmin;
}

float average(int ar[], int n){
    int _sum = 0;
    for (int i=0 ; i<n ; i++){
        _sum += ar[i];
    }
    return (float) _sum/n;
}

int maxIndex(int ar[], int n){
    int _cmax = ar[0];
    int _imax = 0;
    for (int i=0 ; i<n ; i++){
        if (ar[i] > _cmax){
            _cmax = ar[i];
            _imax = i;
        }
    }
    return _imax;
}

int mode(int ar[], int n){
    int m = max(ar, n);
    int counts[m+1];
    for (int i=0 ; i<=m ; i++){
        counts[i] = 0;
    }
    for (int i=0 ; i<n ; i++){
        counts[ar[i]] += 1;
    }

    return maxIndex(counts, m+1);
}

int factors(int n,int ar[])
{
    int c = 0;
    while (n%2 == 0)
    {
        ar[c] = 2;
        n = n/2;
        c++;
    }

    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            ar[c] = i;
            n = n/i;
            c++;
        }
    }

    if (n > 2){
        ar[c] = n;
        c++;
    }
    return c;
}