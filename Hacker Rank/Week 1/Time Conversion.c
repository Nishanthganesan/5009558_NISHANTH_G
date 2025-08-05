#include <stdio.h>
#include<stdlib.h>

int main(){
char input[11];
//printf("Enter a time:");
scanf("%s",input);
char hr[3];
hr[0]=input[0];hr[1]=input[1];hr[2]='\0';
char ms[6];
for(int i = 3;i<8;i++){
        ms[i-3]=input[i];
}
ms[5] = '\0';

char ap;
ap= input[8];
int ch = atoi(hr);

if(ap == 'A' && ch == 12 ){
    ch = 0;
}
else if(ap == 'P'){
    if (ch != 12){
        ch += 12;
    }
}
char res[9];

sprintf(res, "%02d:%s",ch,ms);
printf("%s \n",res);

// printf("Extracted hour %d",ch);

// printf("\n Extracted min sec %s",ms);
// printf("\n Extracted ap %c",ap);
}