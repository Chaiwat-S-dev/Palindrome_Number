#include <iostream>

#define ONE_DIGI(x) (x>=0 && x<10)

using namespace std;
int cmp_palin = 0;

bool is_palin(int x){
    
    cout << "Debug x : " << x << endl;
    //if(ONE_DIGI(x))
    if([](int x) -> bool {return (x >= 0 && x < 10);}(x))
      return (x == cmp_palin%10);

    if(!is_palin(x/10))
        return false;

    cmp_palin /= 10;
    cout << "Debug x1 : " << x << " cmp : " << cmp_palin << endl;
    return (x%10 == cmp_palin%10);
}

int main(){
    int x = 0;
    cout << "PLS enter number for check palindrome number : ";
    cin >> x;
    cmp_palin = x;
    if(is_palin(x))
        cout << "x is palindrome" << endl;
    else
        cout << "x is not palindrome" << endl;
    cout << "Enter somthing for exit : ";
    cin >> x;
    return 0;
}