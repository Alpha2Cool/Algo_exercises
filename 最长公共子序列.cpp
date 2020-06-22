#include<iostream>
#include<string>
#include<stack>

using  namespace std;

string fun(string str1, string str2)
{
    stack<char> stk;
    int len = str1.length();
    int hei = str2.length();
    int dp[hei+1][len+1];
    for (int i = 0; i < len+1; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i < hei+1; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 1; i < hei+1; i++)
    {
        for (int j = 1; j < len+1; j++)
        {
            if (str1[j-1]!=str2[i-1])
            {
                if (dp[i][j-1]<dp[i-1][j])
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i][j-1];
                }
            }
            else
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
        }
    }
    for (int i = 0; i < hei+1; i++)
    {
        for (int j = 0; j < len+1; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    
    //往回找
    int num = dp[hei][len];
    while (num>0)
    {
        if(dp[hei][len]==dp[hei-1][len])
        {
            hei--;
        }
        else if (dp[hei][len]==dp[hei][len-1])
        {
            len--;
        }
        else
        {
            //cout << len<< " "<< dp[hei-1][len-1] << " " << str1[len-1] << endl;
            stk.push(str1[len-1]);
            hei--;
            len--;
            num = dp[hei][len];
        }
    }
    
    string ret ="";
    while (!stk.empty())
    {
        ret+=stk.top();
        stk.pop();
    }
    return ret;
}



int main()
{
    string str1 = "BDCABA";
    string str2 = "ABCBDAB";
    string ret = fun(str1,str2);
    cout << ret << endl;
    return 0;
}