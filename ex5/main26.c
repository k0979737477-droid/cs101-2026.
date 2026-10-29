int multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%d\n", i, j, i*j);
        return 0;
    } else {
        multi(i, j-1);
        printf("%d*%d=%d\n", i, j, i*j);
    }
}
