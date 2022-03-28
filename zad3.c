#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isnumber(char* number){
    for(int i = 0; i< strlen(number); i++){
        if(!isdigit(number[i])){
            return 0;
        }
    }
    return 1;
}

int digitToNumber(char d){
    return d - '0';
}

int main(){
    char number[501];
    char result[501];
    char map_even[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char map_odd[] = {'!', '#', '/', '~', '=', '\'','\\', '>', '.', ','};
    scanf("%s", number);
    if(!isnumber(number)){
        return 1;
    }
    int len = strlen(number);
    for(int i = 0; i < len; i++){
        int digit = digitToNumber( number[i]);
        if(i % 2 ==0){
            result[i] = map_even[digit];
        }
        else{
            result[i] = map_odd[digit];
        }
    }
    result[len] = number[len]; // copy EOS
    printf("%s", result);
    return 0;
}