for (int i = 0; i < n; i++)
{
    int imax = a[0][i];
    for (int j = 1; j < n; j++)
        if (a[j][i] > imax)
            imax = a[j][i];
    cout << imax << ' ';
}

for (int i = 0; i < n; i++)
{
    int imin = a[i][0];
    for (int j = 1; j < n; j++)
        if (a[i][j] < imin)
            imin = a[i][j];
    cout << imin << ' ';
}