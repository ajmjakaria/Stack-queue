#include<stdio.h>
#include <ctype.h>
#define SIZE 50            /* Size of Stack */
char stack[SIZE];
int top = -1; /* Global declarations */

push(char elem)   /* Function for PUSH operation */
{
    stack[++top] = elem;
}

char pop()   /* Function for POP operation */
{
    return (stack[top--]);
}

int priority(char elem)   /* Function for precedence */
{
    switch (elem)
    {
    case '0':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '^':
        return 4;
    }
}
void value(char exp[])
{
    exp[20];
    char tmp;
    int n1,n2,n3,num,i=0;
    //printf("Enter the expression :: ");
    //scanf("%s",exp);

    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]) || isalpha (exp[i]))
        {

            num = (exp[i]) - '0';
            push(num);
        }
        ///else if((exp[i] >= 65 && exp[i] <= 90) || (exp[i] >= 97 && exp[i] <= 122))
        /// push(exp[i]);
        else
        {
            n1 = pop();
            n2 = pop();
            switch((exp[i]))
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            case '^':
            {
                n3 = pow(n2, n1);
                break;
            }
            }
            push(n3);
        }
        //(exp[i++])++;
        i++;
    }
    printf("\nThe result of expression %s  =  %d\n", exp, pop());
    return;
}
main()   /* Main Program */
{
    char infix[50], postfix[50], ch, elem;
    int i = 0, k = 0;
    printf("Read the Infix Expression: ");
    scanf("%s", infix);
    push('0');
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
            postfix[k++] = ch;
        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[k++] = pop();
            elem = pop(); /* Remove ( */
        }
        else     /* Operator */
        {
            while (priority(stack[top]) >= priority(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }
    while (stack[top] != '0') /* Pop from stack till empty */
        postfix[k++] = pop();
    postfix[k] = '\0'; /* Make pofx as valid string */
    printf("Postfix Expression: %s\n", postfix);
    value(postfix);
}
