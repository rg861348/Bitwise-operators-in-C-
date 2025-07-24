// RISHITA GOSWAMI 
// 24070123086
// B1
#include <iostream>
using namespace std;

int main() {
    int a=230, bit_to_reset, set,reset,bit_to_set;

    cout << "Enter the bit to be set: ";
    cin>>bit_to_set;
    set=a|(1<<bit_to_set);


    cout << "Enter the bit to be reset: ";
    cin>>bit_to_reset;

    reset=a&(~(1<<bit_to_reset));

    cout<<"set bit "<<set<<endl;
    cout<<"rest bit "<<reset<<endl;
    return 0;
}

/*
output:
Enter the bit to be set: 8
Enter the bit to be reset: 4
set bit 486
rest bit 230
*/
