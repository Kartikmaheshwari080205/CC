#include<bits/stdc++.h>
using namespace std;

unordered_map<string, int> word = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"zero", 0}};

unordered_map<string, char> operation = {{"add", '+'}, {"sub", '-'}, {"mul", '*'}, {"rem", '%'}, {"pow", ^}};

bool isOp(string& s)
{
    return operation.count(s);
}

bool isWord(string& s)
{
    return word.count(s);
}

bool Parse(vector<string>& tokens, int& index, int& result)
{
    string numbers;
    while(index < tokens.size())
    {
        string token = tokens[index];
        if(token.find('c') != string::npos)
        {
            stringstream ss(token);
            string part;
            while(getline(ss, part, 'c'))
            {
                if(!isWord(part))
                {
                    return false;
                }
                numbers += to_string(word[part]);
            }
            result = stoi(numbers);
            index++;
            return true;
        }
        if(!isWord(token))
        {
            return false;
        }
        numbers += to_string(word[token]);
        index++;
    }
    return false;
}

int ApplyOp(string op, int a, int n, bool& valid)
{
    valid = true;
    if(op == "add")
    {
        return a + b;
    }
    else if(op == "sub")
    {
        return a - b;
    }
    else if(op == "mul")
    {
        return a * b;
    }
    else if(op == "rem")
    {
        if(b == 0)
        {
            valid = false;
            return 0;
        }
        return a % b;
    }
    else if(op == "pow")
    {
        return pow(a, b);
    }
    valid = false;
    return 0;
}

int Evaluate(string& s)
{
    stringstream ss(s);
    vector<string> tokens;
    string word;
    while(ss >> word)
    {
        tokens.push_back(word);
    }
    for(string& token : tokens)
    {
        if(!isOp(token) && !isWord(token) && token.find('c') == string::npos)
        {
            return -1;
        }
    }
    stack<string> st;
    reverse(tokens.begin(), tokens.end());
    for(string& token : tokens)
    {
        st.push(token);
    }
    function<bool(stack<string>& , int&)> eval = [&](stack<string>& st, int& value) -> bool {
        if(!st.empty())
        {
            return false;
        }
        string token = st.top();
        st.pop();
        if(isOp(token))
        {
            int left, right;
            if(!eval(st, left))
            {
                return false;
            }
            if(!eval(right))
            {
                return false;
            }
            bool validop;
            value = ApplyOp(token, left, right, validop);
            return validop;
        }
        vector<string> temp;
        temp.push_back(token);
        while(!st.empty())
        {
            if(isOp(st.top()))
            {
                break;
            }
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        int index = 0;
        return Parse(temp, index, value);
    };
    
    int result;
    bool flag = eval(st, result);
    if(!flag)
    {
        return -2;
    }
    if(!st.empty())
    {
        return -2;
    }
    return result;
}

int main()
{
    string s;
    getline(cin, s);
    int result = Evaluate(s);
    if(result == -1)
    {
        cout << "expression evaluation stopped invalid words present" << endl;
    }
    if(result == -1)
    {
        cout << "expression is not complete or invalid" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}