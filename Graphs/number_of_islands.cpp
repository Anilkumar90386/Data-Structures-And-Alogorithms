#include <bits/stdc++.h>
using namespace std;
void bfs(int i, int j, vector<vector<int>> &vis, vector<vector<char>> &grid)
{
    vis[i][j] = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    int n = grid.size();
    int m = grid[0].size();
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int delrow = -1; delrow <= 1; delrow++)
        {
            for (int delcol = -1; delcol <= 1; delcol++)
            {
                int nbrow = row + delrow;
                int nbcol = col + delcol;
                if (nbrow < n && nbcol < m && nbrow >= 0 && nbcol >= 0 && grid[nbrow][nbcol] == '1' && !vis[nbrow][nbcol])
                {
                    vis[nbrow][nbcol] = 1;
                    q.push({nbrow, nbcol});
                }
            }
        }
    }
}
void number_of_islands(vector<vector<char>> &grid, int n, int m)
{
    int cnt = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == 'X')
            {
                bfs(i, j, vis, grid);
                cnt++;
            }
        }
    }
    cout << cnt;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    number_of_islands(grid, n, m);
}