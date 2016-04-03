typedef int *var_matrix;

int var_prod_ele(var_matrix A, var_matrix B, int i, int k, int n)
{
    int j;
    int result = 0;

    for (j = 0; j < n; j++)
    {
        result += A[i * n + j] * B[j * n + k];
    }

    return result;
}

int var_prod_ele2(var_matrix A, var_matrix B, int i, int k, int n)
{
    int *ptr = &A[i * n];
    int nTJPK = k;
    int cnt = n;
    int re= 0;

    do {
        re += (*ptr) * B[nTJPK];
        ptr++;
        nTJPK += n;
        cnt--;
    } while (cnt);

    return re;
}

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int re;

    re = var_prod_ele(&a[0][0], &a[0][0], 2, 2, 3); 
    printf("re: %d\n", re);
    re = var_prod_ele2(&a[0][0], &a[0][0], 2, 2, 3); 
    printf("re: %d\n", re);
}
