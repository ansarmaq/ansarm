#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}

float mul (float x, float y)
{
    return x * y;
}

float sub (float x, float y)
{
    return x - y;
}

float div_ (float x, float y)
{
    return x / y;
}

float min (float x, float y)
{
    return (x<=y)?x:y;
}

float max (float x, float y)
{
    return (x>=y)?x:y;
}

//max & min
int i, max=0, min=0;
for (i=1;i<=5;i++){
	printf("Enter number #%d: ", i);
	scanf("%d", &x);
	if(x>max)
		max = x;
	if(x<min || i==1)
		min = x;
}
printf("Max = %d, Min = %d\n", max, min);

int main()
{
    float a, b, r;
    char op;

    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
            break;
           case '*' : r = mul(a,b);
            break;
           case '-' : r = sub(a,b);
            break;
           case '/' : r = div_(a,b);
            break;
           case 'm' : r = min(a,b);
            break;
           case 'M' : r = max(a,b);
            break;
           case 'q' : break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');

    return 0;
}
