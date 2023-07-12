#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[]="mewa wa mey twsam iepjoys gt mey ipbya.pa xgn iph ayy, meysy wa hgmewhr gt whmysyam wh mey iepjoys. agjy gt mey kpmys iepjoysa vwkk oy jgsy whmysyamwhr meph mewa ghy! mey iguy nayu tgs mewa jyaapry wa p awjfky anoamwmnmwgh iwfeys wh vewie uwrwma epby oyyh aewtmyu ox 8 fkpiya.mey fpaavgsu wa \"mxsrn03uwdd\" vwmegnm mey dngmya.*";
    float freq[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i=0,d,k=0;
    while(str[i]!='*'){
        if(str[i]>='a' && str[i]<='z'){
            d=str[i]-'a';
            freq[d]++;
            k++;
        }
        i++;
    }
    for(int j=0;j<26;j++){
        freq[j]=freq[j]/k*(1.0);
        printf("%c=%0.6f\n ",97+j,freq[j]);
    }
    i=0;
    while(str[i]!='*'){
            if(str[i]=='p'){
                printf("a");
            }
            else if(str[i]=='o'){
                printf("b");
            }
            else if(str[i]=='i'){
                printf("c");
            }
            else if(str[i]=='u'){
                printf("d");
            }
            else if(str[i]=='y'){
                printf("e");
            }
            else if(str[i]=='t'){
                printf("f");
            }
            else if(str[i]=='r'){
                printf("g");
            }
            else if(str[i]=='e'){
                printf("h");
            }
            else if(str[i]=='w'){
                printf("i");
            }
            else if(str[i]=='k'){
                printf("l");
            }
            else if(str[i]=='j'){
                printf("m");
            }
            else if(str[i]=='h'){
                printf("n");
            }
            else if(str[i]=='g'){
                printf("o");
            }
            else if(str[i]=='f'){
                printf("p");
            }
            else if(str[i]=='d'){
                printf("q");
            }
            else if(str[i]=='s'){
                printf("r");
            }
            else if(str[i]=='a'){
                printf("s");
            }
            else if(str[i]=='m'){
                printf("t");
            }
            else if(str[i]=='n'){
                printf("u");
            }
            else if(str[i]=='b'){
                printf("v");
            }
            else if(str[i]=='v'){
                printf("w");
            }
            else if(str[i]=='x'){
                printf("y");
            }
            else{
                printf("%c",str[i]);
            }
        i++;
    }

    return 0;
}