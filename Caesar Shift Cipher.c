#include <stdio.h>
#include <string.h>
int main() {
        char conheo[235];
        scanf("%[^\n]",conheo);
//      char conheo[236]= {"KVCY, SP IYE RKFO K COXDOXMO DRKD IYE VYFO PBYW K ZKBDSMEVKB KEDRYB, KXN IYE DRSXU SD'C K LODDOB COXDOXMO DRKX DRO YXO S'FO AEYD$
//      printf("%d\n", strlen(conheo));

// because there are 232 letter in the char
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z this is before
// Q R S T U V W X Y Z A B C D E F G H I J K L M N O P this is after
// 65 66 67 68 69 70 71 72 73 74 75  76 77 78 79 80
        for(int i=0; i<232; i++){
                if(conheo[i]>=65 && conheo[i] <=90){//65 is A, 90 is Z in ASCII
                        conheo[i] -= 10;
                        if(conheo[i]<65) {conheo[i]+=26;}
                }
        }
        printf("%s\n", conheo);
//      printf("%s\n", strlen(conheo));
}
