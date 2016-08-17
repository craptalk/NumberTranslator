#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CheckNum(int a){

  if(a == 0){
    printf("0 is Zero\n");
  }else if(a == 1){
    printf("1 is One\n");
  }else if(a == 2){
    printf("2 is Two\n");
  }else if(a == 3){
    printf("3 is Three\n");
  }else if(a == 4){
    printf("4 is Four\n");
  }else if(a == 5){
    printf("5 is Five\n");
  }else if(a == 6){
    printf("6 is Six\n");
  }else if(a == 7){
    printf("7 is Seven\n");
  }else if(a == 8){
    printf("8 is Eight\n");
  }else if(a == 9){
    printf("9 is Nine\n");
  } else{
    printf("\nError!\n");
  }
}

int main(){
  int y;
  int menu;
  printf("\n\n\n\n\n\t\t\t\tZERO-TO-NINE\n");
  printf("\t\t\tEnglish translation number\n");
  printf("\t\tPlease Enter Single digit number started from [0-9]\n\n");

  do{
    printf("1. Play\n");
    printf("2. Exit\n\n");
    printf("Enter:");
    scanf("%d", &menu);fflush(stdin);
    switch (menu) {
      case 1:
        printf("\n\nEnter a number: ");
        scanf("%d",&y);fflush(stdin);
        CheckNum(y);
        printf("\n\n");
      case 2:
        break;
    }

  }while(menu != 2);



  printf("\n\n\n\t\t\tThanks for using this program.\n\n\n");

  getchar();
  return 0;
}
