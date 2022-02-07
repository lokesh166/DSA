class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> ans;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if ((ch == '{') || (ch == '(') || (ch == '['))
            {
                ans.push(ch);
            }
            else
            {
                if (!ans.empty())
                {
                    int Top = ans.top();
                    if ((ch == '}' && Top == '{') ||
                        (ch == ']' && Top == '[') ||
                        (ch == ')' && Top == '('))
                    {
                        ans.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }

        if (ans.empty())
        {
            return true;
        }
        return false;
    }
};
