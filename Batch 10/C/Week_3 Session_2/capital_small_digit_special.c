#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int str_l = strlen(str);

    int cnt_arr[4]={0};
    // int cap_cnt=0, sma_cnt=0, dig_cnt=0, special_char_cnt=0;
    for(int i=0;i<str_l;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            // cap_cnt++;
            cnt_arr[0]++;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            // sma_cnt++;
            cnt_arr[1]++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            // dig_cnt++;
            cnt_arr[2]++;
        }
        else{
            // special_char_cnt++;
            cnt_arr[3]++;
        }
    }
    printf("Capital letter: %d\n", cnt_arr[0]);
    printf("Small letter: %d\n", cnt_arr[1]);
    printf("Digit: %d\n", cnt_arr[2]);
    printf("Special letter: %d\n",cnt_arr[3]);
    // printf("Capital letter: %d\n", cap_cnt);
    // printf("Small letter: %d\n", sma_cnt);
    // printf("Digit: %d\n", dig_cnt);
    // printf("Special letter: %d\n",special_char_cnt);
    return 0;
}