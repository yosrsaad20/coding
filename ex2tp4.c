#include<stdio.h>
void main(){
    int n;
    int tab[20];
    int i,m;
    do {
        printf("donner n");
        scanf("%d",&n);
    }hnbfvrnd,gv
    while (n>30);
      for ( i=0;i<n;i++){
        printf("donner case %d",i);
        scanf("%d",&tab[i]);

    }
    for (i=0;i<n;i++){
        printf("%d",tab[i]);
        printf("\t");


    }printf("\n");
    int s=0;
    for (i=0;i<n;i++){
        s=s+tab[i];
    }printf("la somme de tableau est : %d",s);
    printf("\n");
    m=tab[0];


    for (i=1;i<n;i++){
        if (tab[i]<tab[0]){
            tab[i]=m;
        }
    }printf("le plus petit element est %d",m);
    printf(("donner n");

}


