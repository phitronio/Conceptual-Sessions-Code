/**
You are given a positive integer n.
Now print the sum of last digit and first digit of the given integers.
Implement it using function.
Note – It is guaranteed that all the integers will be a 4 digit value

Sample Input:
1234
Sample Output:
Sum = 5


*/
#include <stdio.h>

int extract_sum(int n)
{
    int firstNum = n / 1000;
    int lastNum = n % 10;
    return firstNum + lastNum;
}
int main()
{
    int num;
    scanf("%d", &num);
    int result = extract_sum(num);
    printf("%d",result);
    return 0;
}
