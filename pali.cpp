/*Name: Malcolm M.
 *Date: 3/21/2021
 */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

//reverses the given number and returns it as an integer so that we can add it.
long long int reverseNum(long long int n){
    int rev = 0, cpy = n;

    string revstr;
    while(n > 0){
        rev = n%10;
        revstr += to_string(rev);
        n /= 10;
    }
    if(cpy <= 1794102595)
        rev = stoi(revstr);
    else{
        cerr << "No palindrome exists";
        exit(1);
    }
    return rev;
}

int main(){
    long long int count = 0, number = 1712; // declare count for number of iterations required to get a palindrome

    while(number != reverseNum(number)){
        int reverse = reverseNum(number);
        number = number + reverse;
        count++;
    }

    cout << count << " " << number << endl;

    return 0;
}