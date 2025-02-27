#include <iostream>
#include <string>
#include <stack>
using namespace std;

int precedence(char op);
int performOperation(char op, int a, int b);
int solve(string equation, int start, int end);

int main()
{
    string equation;
    cout << "Enter an equation in infix notation: ";
    getline(cin, equation);

    int result = solve(equation, 0, equation.length() - 1);

    cout << "Result: " << result << endl;

    return 0;
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int performOperation(char op, int a, int b)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
    if (op == '/')
        return a / b;
    if (op == '^')
        return pow(a, b);
    return 0;
}

int solve(string equation, int start, int end)
{
    stack<char> operators;
    stack<int> operands;

    for (int i = start; i <= end; i++)
    {
        if (equation[i] == '(')
        {
            int j = i;
            int count = 1;
            while (count != 0)
            {
                j++;
                if (equation[j] == '(')
                    count++;
                else if (equation[j] == ')')
                    count--;
            }
            int subresult = solve(equation, i + 1, j - 1);
            operands.push(subresult);
            i = j;
        }
        else if (isdigit(equation[i]))
        {
            int j = i;
            int value = 0;
            while (j <= end && isdigit(equation[j]))
            {
                value = value * 10 + (equation[j] - '0');
                j++;
            }
            operands.push(value);
            i = j - 1;
        }
        else if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/' || equation[i] == '^')
        {
            while (!operators.empty() && precedence(operators.top()) >= precedence(equation[i]))
            {
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                char op = operators.top();
                operators.pop();
                int result = performOperation(op, a, b);
                operands.push(result);
            }
            operators.push(equation[i]);
        }
    }

    while (!operators.empty())
    {
        int b = operands.top();
        operands.pop();
        int a = operands.top();
        operands.pop();
        char op = operators.top();
        operators.pop();
        int result = performOperation(op, a, b);
        operands.push(result);
    }

    return operands.top();
}
