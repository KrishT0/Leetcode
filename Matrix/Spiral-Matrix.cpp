class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &A)
    {
        int top, bottom, left, right, dir;
        top = 0;
        bottom = A.size() - 1;
        left = 0;
        right = A[0].size() - 1;
        dir = 0;
        int i;
        vector<int> ans;

        while (top <= bottom && left <= right)
        {
            if (dir == 0)
            {
                for (i = left; i <= right; i++)
                    ans.push_back(A[top][i]);
                top++;
            }
            else if (dir == 1)
            {
                for (i = top; i <= bottom; i++)
                    ans.push_back(A[i][right]);
                right--;
            }
            else if (dir == 2)
            {
                for (i = right; i >= left; i--)
                    ans.push_back(A[bottom][i]);
                bottom--;
            }
            else if (dir == 3)
            {
                for (i = bottom; i >= top; i--)
                    ans.push_back(A[i][left]);
                left++;
            }
            dir = (dir + 1) % 4;
        }
        return ans;
    }
};