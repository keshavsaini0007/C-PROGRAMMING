# include <stdio.h>
int main (){
    // int f[3][3] = {{2,3,4},{2,3,4},{2,3,4}};
    int x,y;
    printf("enter the number of rows : ");
    scanf("%d",&x);
    printf("enter the number of columns : ");
    scanf("%d",&y);

    int f[x][y];
    for(int i = 0; i<=x-1; i++){
        for(int j = 0; j<=y-1; j++){
            printf("enter the value of (%d,%d)",i,j);
            scanf("%d",&f[i][j]);  }  }

    for(int i = 0; i<=x-1; i++){
        for (int j = 0; j<=x-1; j++){
        printf("%d ",f[i][j]);  }
        printf("\n");  }
    return 0 ;
}
