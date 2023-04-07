#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++){
        //S
        for(int j=1;j<=4;j++){
            if(i==1||i==3||i==5||(i==2 && j==1)||(i==4 && j==4)){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //U
        for(int j=1; j<=4; j++){
            if (j == 1 || i == 5 || j == 4){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //B
        for(int j=1; j<=4; j++){
            if (i==1 || i==5 || j == 1 || (i==3 && j!=4) ||(j==4 && i!=3)){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //H
        for(int j=1; j<=4; j++){
            if (j==1 || j==4 || i==3){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //A        
        for(int j=1; j<=4; j++){
            if ((i==1 && j==2) || (i==1 && j==3) || (j==1 && i>=2) || (j==4 && i>=2) || i==3){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //D
        for(int j=1; j<=4; j++){
            if (j==1 || (i==1 && j!=4) || (i==5 && j!=4) || (i==2 && j==4) || (i==3 && j==4) || (i==4 && j==4)){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }
        //E
        for(int j=1; j<=4; j++){
            if (i==1 || i==3 || i==5 || j==1){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }                         
        //E
        for(int j=1; j<=4; j++){
            if (i==1 || i==3 || i==5 || j==1){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }                         
        //P
        for(int j=1; j<=4; j++){
            if (j==1 || (i==1 && j<4) || (i==3 && j<4) || (i==2 && j==4)){
                printf("$ ");
            }else{
                printf("  ");
            }
        }
        for(int i=1;i<=1;i++){
            printf("  ");
        }                         
        printf("\n");
    }
    return 0;
}