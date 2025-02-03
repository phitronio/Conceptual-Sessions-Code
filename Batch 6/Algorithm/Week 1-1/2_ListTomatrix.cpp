/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2025-02-03   12:56:16
 * Source:
 */

/*
Problem 1: Convert Adjacency List To Adjacency Matrix

Problem Statement:
Given an adjacency list, convert it into an n × n adjacency matrix representation.

Example:
Input:
3 2
0 1
0 2

Output:
0 1 1
1 0 0
1 0 0

*/

#include <bits/stdc++.h>
using namespace std;

void matrixToList(int mat[][100], int n)
{
    vector<int> adjList[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                adjList[i].push_back(j);
            }
        }
    }

    cout << "output" << endl;
    int matrix[n][n];
    memset(matrix, -1, sizeof(matrix));
    for (int i = 0; i < n; i++)
    {
        for (int val : adjList[i])
        {
            matrix[i][val] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    int mat[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    matrixToList(mat, n);

    return 0;
}
