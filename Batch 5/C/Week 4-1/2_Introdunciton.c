/**
 * What is Funtion?
 * Ans:
 * -Basic building blocks of a C program. 
 * -A set of statements enclosed within curly brackets ({}) that
 *            i)   Take inputs, 
 *            ii)  Do the computation, and 
 *            iii) Provide the resultant output.  
 * 
 * How to Declear?
 * 
                  return_type function_name( parameter list ) {
                    body of the function
                  }
 * 
 * */
void sum(int a,int b){
    int sum;
    sum = a+b;
    printf("%d\n",sum);
}

int main()
{
    // int a=5,b=10;
    // int sum = a +b ;
    // printf("%d\n",sum);

    // int c = 15,d = 20;
    // int sum1 = c +d ;
    // printf("%d\n",sum1);

    sum(5,10);
    sum(15,20);
   
    return 0;
}
