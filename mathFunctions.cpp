//================================================================
// Nicole McDermott (Adib Khondoker too) - CPE 390 LA - Summer Session 2
// Lab assignment 2
//I pledge my honor that I have abided by the Stevens Honor System
//================================================================

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


int gcd(int a,int b){
    if(b==0){
        return a;}
    else {return gcd(b, a % b);
    }

}

bool isPrime(int a){
    if(a<=1)
        return false;
    for(int i=2; i<a;i++){
        if (a%i==0)
            return false;
    }
        return true;
    
}

int countPrimes(int a,int b){
    int count=0;
    for(int i=a; i<=b; i++){
        if(isPrime(i)==1){
            count++;
        }
    }
    return count;
}


void collatz(int n){
    cout<< n << " ";
    while(n!= 1){
        if(n%2==1){
            n=(n*3)+1;
            cout<< n <<" ";
        }else{
            if(n%2==0)
                n=n/2;
                cout<< n << " ";
        }
        
    }
    cout << endl;
}

double mean(double x[],int n){
    double sum=0;
    for(int i = 0; i < n; i++){
        sum = sum + x[i];
    }
    return(sum/n);
}

int prod(int x[],int n){
    double product=1;
    for(int i = 0; i < n; i++){
        product = product * x[i];
    }
    return(product);
}

void demean(double x[],int n){
    double sum=0;
    double mean;
    for(int i = 0; i < n; i++){
        sum = sum + x[i];
    }
    mean=sum/n;
    for(int j=0; j < n; j++){
        x[j] = x[j] - mean;
    }

}

// int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     range_reverse(c, 9, 2, 4); // should print 1 2 5 4 3 6 7 8 9
void range_reverse(int x[],int n,int a,int b){
    int k;
    int temp[n-1];
    for (int m=0; m<n;m++){
        temp[m]=x[m];
    }
    
    while (a < b){
        k=x[a];
        x[a]=x[b];
        x[b]=k;

        a++;
        b--;
    }
}


double hypot(int a,int b){
    double sum = ((a*a)+(b*b));
    double sum1 = pow(sum, 0.5);
    return sum1;

    
    
}

double mean(float a, float b){
    double sum = a+b;
    double avg = sum/2;
    return avg;
}

bool pythagTriple(double a,double b){
    double sum = hypot(a, b);
    if (floor(sum)==sum){
    return true;
    }
    else {
        return false;
        }
    
}

double areaOfTriangle(float x1,float y1,float x2,float y2,float x3,float y3){
    double sum1 = (y2-y3);
    double sum2 = sum1*x1;
    double sum3 = y3-y1;
    double sum4 = x2*sum3;
    double sum5 = y1-y2;
    double sum6 = x3*sum5;
    double sum7 = sum6+sum4+sum2;
    double sum8 = 0.5*sum7;
    return sum8;
}

int main(){
    cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
    cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
    cout << "isPrime(5)=" << isPrime(5) << '\n';
    cout << "isPrime(9)=" << isPrime(9) << '\n';
    cout << "isPrime(1001)=" << isPrime(1001) << '\n';
    cout << "isPrime(2601)=" << isPrime(2601) << '\n';
    cout << "isPrime(1013)=" << isPrime(1013) << '\n';

    cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
    cout << "countPrimes(1,10000): " << countPrimes(1, 10000) << '\n';

    collatz(5); // should print out 5 16 8 4 2 1
    collatz(40); // should print out 40 20 10 5 16 8 4 2 1
    collatz(17);

    double x[] = {10, 20, 30, 40, 50, 60};
    constexpr int n = sizeof(x)/sizeof(double);
    cout << mean(x, n) << '\n'; // should print 35

    double y[] = {1.0, 2.0, 3.0, 4.0};
    cout << mean(y, sizeof(y)/sizeof(double)) << '\n'; // should print 2.5

    int a[] = {3, 4, 1, 2, -2};
    cout << prod(a, sizeof(a)/sizeof(int)) << '\n';

    int b[] = {2, 4, 8, -2, -4};
    cout << prod(b, sizeof(b)/sizeof(int)) << '\n';

    demean(x, n); // should subtract the mean from each element
    for (int i = 0; i < n; i++)
        cout << x[i] << ' ';
    cout << '\n';

    int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    range_reverse(c, 9, 2, 4);
    //you should print out the array c
    for (int i = 0; i < sizeof(c)/sizeof(int); i++)
        cout << c[i] << ' '; // should print 1 2 5 4 3 6 7 8 9
    cout << '\n';

    cout << "hypot(3,4)=" << hypot(3, 4) << '\n'; // should print 5
    cout << "hypot(4,5)=" << hypot(4, 5) << '\n';
    cout << "mean(3.0,sqrt(8.0)) = " << mean(3.0,sqrt(8.0)) << '\n';

    cout << "mean(1,4)=" << mean(1, 4) << '\n';

    cout << "if sqrt(3**2 +4**2) is a whole number?: " << pythagTriple(3, 4)
       << endl;
    cout << "if sqrt(2**2 +3**2) is a whole number?: " << pythagTriple(2, 3)
       << endl;

    cout << areaOfTriangle(0,0, 10,0, 10,5) << '\n'; // should be approx 25
    cout << areaOfTriangle(0,0, 5,3, 2,6) << '\n';

    return 0;


}
