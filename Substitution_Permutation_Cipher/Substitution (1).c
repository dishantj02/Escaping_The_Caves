#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[]="jnvqmvnwsafclewpvrcttjvjtvllvpjxafvlidvqmxlhcncanvlcpcygcyafvfwtvgwqfvqpqypscypqrqxwsjnvqmcygafvlhvttwyfcueqlajxafvvbctkqssqnafvlhcncawsafveqbvuqyclqtrqxlrcafxwdscypafvuqgcerqypafqarctttvaxwdwdawsafveqbvlcarwdtpuqmvxwdquqgcecqyywtvllafqykqssqnlhvqmafvhqllrwnpafvuqgcewsrqypawgwafnwdgf*";
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
            if(str[i]=='a'){
                printf("t");
            }
            else if(str[i]=='b'){
                printf("v");
            }
            else if(str[i]=='c'){
                printf("i");
            }
            else if(str[i]=='d'){
                printf("u");
            }
            else if(str[i]=='e'){
                printf("c");
            }
            else if(str[i]=='f'){
                printf("h");
            }
            else if(str[i]=='g'){
                printf("g");
            }
            else if(str[i]=='h'){
                printf("p");
            }
            else if(str[i]=='i'){
                printf("q");
            }
            else if(str[i]=='j'){
                printf("b");
            }
            else if(str[i]=='l'){
                printf("s");
            }
            else if(str[i]=='m'){
                printf("k");
            }
            else if(str[i]=='n'){
                printf("r");
            }
            else if(str[i]=='p'){
                printf("d");
            }
            else if(str[i]=='q'){
                printf("a");
            }
            else if(str[i]=='r'){
                printf("w");
            }
            else if(str[i]=='s'){
                printf("f");
            }
            else if(str[i]=='t'){
                printf("l");
            }
            else if(str[i]=='u'){
                printf("m");
            }
            else if(str[i]=='v'){
                printf("e");
            }
            else if(str[i]=='w'){
                printf("o");
            }
            else if(str[i]=='x'){
                printf("y");
            }
            else if(str[i]=='y'){
                printf("n");
            }
        i++;
    }

    return 0;
}