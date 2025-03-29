//problem link
// https://leetcode.com/problems/determine-color-of-a-chessboard-square/description/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool squareIsWhite(char* coordinates) {
    if(coordinates[0]=='a'|| coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g'){
        if((coordinates[1]-'0')%2==0) return true;
        else return false;
    }
    if((coordinates[1]-'0')%2==0) return false;
    else return true;
}
int main(){
    char *str=malloc(sizeof(char)*2);
    str[0]='a';
    str[1]='1';
    if(squareIsWhite(str)) printf("true");
    else printf("false");
}