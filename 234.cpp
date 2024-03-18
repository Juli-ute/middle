#include "middle.h"


long long itc_len_num(long long ch){
    int colvo = 0;
while (ch != 0){
    ch = ch / 10;
    colvo += 1;
}
cout << colvo;
}
