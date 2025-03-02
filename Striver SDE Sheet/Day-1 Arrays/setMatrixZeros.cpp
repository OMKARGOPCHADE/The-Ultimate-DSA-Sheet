#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    vector<vector<int>> matrix;
    int n, m;

public:
    Solution(int n, int m)
    {
        this->n = n;
        this->m = m;
        this->matrix.resize(m, vector<int>(n));
    }
    void setZeroes()
    {
        int m = this->matrix.size();
        int n = this->matrix[0].size();
        int col = -1; // col0
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (this->matrix[i][j] == 0)
                {
                    if (i == 0 && j == 0)
                    {
                        col = 0;                // colarray
                        this->matrix[i][j] = 0; // rowarray
                    }
                    else
                    {
                        if (j == 0)
                        {
                            col = 0;                // col array
                            this->matrix[i][0] = 0; // row array
                        }
                        else
                        {
                            this->matrix[0][j] = 0; // colarray
                            this->matrix[i][0] = 0; // rowarray
                        }
                    }
                }
            }
        }
        // for column
        for (int i = 1; i < n; i++)
        {
            if (this->matrix[0][i] == 0)
            {
                for (int j = 0; j < m; j++)
                {
                    this->matrix[j][i] = 0;
                }
            }
        }
        // for row
        for (int i = 0; i < m; i++)
        {
            if (this->matrix[i][0] == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    this->matrix[i][j] = 0;
                }
            }
        }
        if (col == 0)
        {
            for (int i = 0; i < m; i++)
                this->matrix[i][0] = 0;
        }
    }
    void initilize_Matrix()
    {
        srand(time(0));
        for (int i = 0; i < this->m; i++)
        {
            for (int j = 0; j < this->n; j++)
            {
                this->matrix[i][j] = rand() % (n+m);
            }
        }
    }
    void display_matrix()
    {
        for (int i = 0; i < this->m; i++)
        {
            for (int j = 0; j < this->n; j++)
            {
                cout << this->matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Solution s = Solution(5, 5);
    s.initilize_Matrix();
    s.display_matrix();
    s.setZeroes();
    cout<<endl;
    s.display_matrix();
    return 0;
}