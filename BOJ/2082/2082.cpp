#include <bits/stdc++.h>
using namespace std;
char mat[20][20];
int num[10][5][3]={
    {
        {1,1,1},
        {1,0,1},
        {1,0,1},
        {1,0,1},
        {1,1,1}
    },
    {
        {0,0,1},
        {0,0,1},
        {0,0,1},
        {0,0,1},
        {0,0,1}
    },
    {
        {1,1,1},
        {0,0,1},
        {1,1,1},
        {1,0,0},
        {1,1,1}
    },
    {
        {1,1,1},
        {0,0,1},
        {1,1,1},
        {0,0,1},
        {1,1,1}
    },
    {
        {1,0,1},
        {1,0,1},
        {1,1,1},
        {0,0,1},
        {0,0,1},
    },
    {
        {1,1,1},
        {1,0,0},
        {1,1,1},
        {0,0,1},
        {1,1,1}
    },
    {
        {1,1,1},
        {1,0,0},
        {1,1,1},
        {1,0,1},
        {1,1,1}
    },
    {
        {1,1,1},
        {0,0,1},
        {0,0,1},
        {0,0,1},
        {0,0,1}
    },
    {
        {1,1,1},
        {1,0,1},
        {1,1,1},
        {1,0,1},
        {1,1,1}
    },
    {
        {1,1,1},
        {1,0,1},
        {1,1,1},
        {0,0,1},
        {1,1,1}
    }
};
int calc(int y){
    for(int d=0;d<10;d++){
        bool flag=false;
        for(int i=0;i<5;i++){
            for(int j=y;j<y+3;j++){
                if(mat[i][j]=='#'&&!num[d][i][j%4])
                    flag=true;
            }
        }
        if(!flag)
            return d;
    }
    return -1;
}
int main(){
    for(int i=0;i<5;i++)
        fgets(mat[i],20,stdin);
    for(int i=0;i<4;i++){
        int now=calc(i*4);
        printf("%d",now);
        if(i==1)
            printf(":");
    }    
    printf("\n");
    return 0;
}