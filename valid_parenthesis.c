typedef struct
{
    int top;
    char *arr;
}stack_h;


int push(stack_h* stack,char ch)
{
    if(ch == '(' || ch == '[' || ch == '{')
    {
        stack -> arr[stack->top] = ch;
        stack -> top++;
    }
    else 
    {
        if(stack->top == 0)
            return 0;

        if(stack -> arr[stack->top-1] == '(')
            {
                if(ch == ')')
                stack -> top--;
                else
                return 0;
            }
        else if(stack -> arr[stack->top-1] == '{')
        {
            if(ch == '}')
            stack -> top--;
            else return 0;
        }
        else if(stack -> arr[stack->top-1] == '[')
        {
            if(ch == ']')
            stack -> top--;
            else
            return 0;
        }
        
    }
    return 1;
}

bool isValid(char* s) {
    stack_h stack;
    stack.top = 0;

    int len = strlen(s);

    stack.arr = malloc(sizeof(int) * len);

    for(int i=0;i<len;i++)
    {
        if(!push(&stack,s[i]))
            return false;
    }

    if(stack.top == 0)
        return true;
    else
        return false;
}