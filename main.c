#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    // считаю все варинты, когда 0 лягушек между хомяками
    int k = n+1;
    // если кого-то ноль, то может быть только одна комбинация 
    if (m==0 && n==0){
        k = 0;
    }
    else if (m==0|| n==0){
        k = 1;
    }
    // если хомяков больше, то может быть только одна дополнительная комбинация, если хоямяков больше на 1( иначе никак)
    else if (m==n+1){
        k+=1;
    }
    else if (n>=m && m !=1){
        //выясняю, сколько лягушек может быть между хомяками
        int fm = (int) n/(m-1);
        for (int i = 1;i<fm+1;i++){
            //нахожу количество лягушек, не тронутых хомяками, напримре,2 хомяка, 3 лягушки(  хлх лл - в этом случае 2 лягушки свободны)
            int sf = n - (m-1)*i;
            k+=sf+1;
        }
        
        
    }
    
    printf("%d",k);
    return 0;
}