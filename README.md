# coding
acomputer science student
#include<stdio.h>
void main(){
    int tab[50],tab1[50],tab2[50];
    int i,j,n,p,s,d,f;
    for (i=0;i<=50;i++){
        tab1[i]=0;
    }
    for (i=0;i<=50;i++){
        tab2[i]=0;
    }
    do {
        printf("donner n");
        scanf("%d",&n);
    }while((5>n) && (n>50));
    do {
      for (i=0;i<n;i++){
        printf("donner case %d",i);
        scanf("%d",&tab[i]);
    }

    }while(tab[i]<0);

    for (i=0;i<n;i++){
        printf("%d",tab[i]);
        printf("\t");
    }
    printf("\n");
    do{
        printf("choisir p");
        scanf("%d",&p);
        printf("choisir s");
        scanf("%d",&s);
    }while ((p<0) && (s<0));
    printf("\n");

     for (i=0;i<n;i++){
        if (tab[i]==p) {
            tab1[i]=1;
        }
        }
    for (i=0;i<n;i++){
        printf("%d",tab1[i]);
    }
printf("\n");

    for (j=0;j<n;j++){
        if (tab[j]==s) {
            tab2[j]=1;
        }
    }
    for (j=0;j<n;j++){
        printf("%d",tab2[j]);
}printf("\n");

   do {
    for (i=0;i<n;i++){
            if (tab1[i]==1){
                d=i;
            }if (tab2[i]==1){
                f=i;
            }
    }
        for (j=d+1;j<f;j++){
                printf("%d",tab[j]);
                printf("\t");

            }
            printf("\n");
            f++;
            d++;
   }while(d>f);
}
