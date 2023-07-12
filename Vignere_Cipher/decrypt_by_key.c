#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "kg fcwd qh vin pnzy hjcocnt, cjjwg ku wnth nnyvng kxa cjjwg.urfjm xwy yjg rbbufqwi \"vjg_djxn_ofs_dg_rmncbgi\" yq iq uqtxwlm.oca zxw qcaj vjg tctnplyj hqs cjn pjcv ejbvdnt. yt hkpe cjn gcnv,aqv okauy bknn ongm vt zvvgs vcpkh bqtft cjntj.*";
    char key[10];
    for(int i=0;i<10;i++){
        scanf("%c",&key[i]);
    }
    int i=0,k=0;
    while(str[i]!='*'){
        if(str[i]>='a'&&str[i]<='z'){
            int d1=str[i];
            int d2=key[k%10];
            printf("%c",(d1-d2+26)%26+'a');
            k++;
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }

}