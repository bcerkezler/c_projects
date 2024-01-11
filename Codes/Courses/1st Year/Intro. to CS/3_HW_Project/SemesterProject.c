#include <stdio.h> //BBG SEMESTER PROJECT 2048 GAME
#include <stdlib.h>  //CAFER BERK CERKEZLER 17011050
#include <time.h>

//Function declarations
int up(int **board,int **tmp,int score);
int left(int **board,int **tmp,int score);
int down(int **board,int **tmp,int score);
int right(int **board,int **tmp,int score);
void restart(int **board,int **tmp,int *score,int *highscore);
void printboard(int **board,int **tmp,int *score,int *highscore);

//main function
int main(){

//for rand() function
  srand(time(NULL));

//Variable declaration and initialization
  int **board;
  int **tmp;
  int i,j,m,n,f,g,counter=0,flag1=0,flag2=0;
  int score = 0,highscore = 0;
  char command;

//Dynamic memory allocation of board and tmp
  board = malloc(sizeof(int*) * 4);

  for(i=0; i<4; i++)
    board[i] = malloc(sizeof(int) * 4);

  tmp = malloc(sizeof(int*) * 4);

  for(i=0; i<4; i++)
    tmp[i] = malloc(sizeof(int) * 4);

//Set all board elements 0
 for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++)
         board[i][j] = 0;
 }

 //First random 2 or 4
       f = rand() % 4;
       g = rand() % 4;

       board[f][g] =  ((rand() % 2) + 1) * 2;

//Second random 2 or 4
        do {
          m = rand() % 4;
          n = rand() % 4;
        } while(board[m][n] != 0);

        board[m][n] =  ((rand() % 2) + 1) * 2;

//Show score and board when enter
  printf("\n  WELCOME TO THE 2048 GAME!!\n");
  printf("  CONTROLS : W-UP , A-LEFT , S-DOWN , D-RIGHT , E-EXIT , X-RESTART\n");

  printf("\n  SCORE: %d",score);
  printf("\n  HIGHEST SCORE: %d\n\n",highscore);


  for(i=0 ; i<4 ; i++){
      printf("    ");
      for(j=0 ; j<4 ;j++){
          printf("-----");
      }
      printf("-\n    ");
      for(j=0 ; j<4 ;j++){
          if (board[i][j] != 0) {
            if( ((i==m) && (j==n)) || ((i==f) && (j==g)) )
                  printf("|%3d*",board[i][j]);
            else
                  printf("|%3d ",board[i][j]);
          }
          else{
                printf("|    ");
          }
        tmp[i][j] = board[i][j];
     }
      printf("|\n");

  }

    printf("    ");
    for(i=0 ; i<4 ; i++){
        printf("-----");
    }
    printf("-\n");

//Main loop
do {
  printf("\n\nPlease enter a valid command: ");
  scanf(" %c",&command);

//Choosing command
    switch(command){
       case 'w':
       case 'W': score = up(board,tmp,score);
        printboard(board,tmp,&score,&highscore); break;
       case 'a':
       case 'A': score = left(board,tmp,score);
        printboard(board,tmp,&score,&highscore); break;
       case 's':
       case 'S':  score = down(board,tmp,score);
        printboard(board,tmp,&score,&highscore);break;
       case 'd':
       case 'D': score = right(board,tmp,score);
        printboard(board,tmp,&score,&highscore); break;
       case 'e':
       case 'E': exit(0); break;
       case 'x':
       case 'X': restart(board,tmp,&score,&highscore); break;
       default: printf("wrong command"); break;
      }



//Ending control
 for(i=0; i<4; i++) {
   for(j=0; j<4; j++) {
    if(board[i][j] == 2048){
      flag1 = 1;
    }
   else if(board[i][j] == 0){
     counter++;
   }
  }
 }

 if(counter == 0){
    flag2 = 1;
 }

} while((flag1 == 0) && (flag2 == 0));

//Free allocated memory
for(i=0 ; i<4; i++){
  free(board[i]);
  free(tmp[i]);
}
 free(board);
 free(tmp);

printf("\nGAME OVER!!\n");
exit(0);
}

//Functions
int up(int** board,int** tmp,int score){

int i,j,k,ctrl = 0;
//First slide
for(i=0; i<4; i++) {
   j = 0;
   ctrl = 0;
  while((j<3)&&(ctrl != 4)) {
    if(board[j][i] == 0) {
      for(k=j; k<3; k++) {
        board[k][i] = board[k+1][i];
       }
      board[3][i] = 0;
      ctrl++;
     }
    else {
      j++;
    }

  }
}
//Add
for(i=0; i<4; i++) {
  j = 0;
  while(j<3) {
    if((board[j][i] == board[j+1][i])) {
      board[j][i] += board[j][i];
      score = score + board[j][i];
      board[j+1][i] = 0;
      j++;
    }
    j++;
  }
}

//Second slide
for(i=0; i<4; i++) {
  j = 0;
  ctrl = 0;
  while((j<3)&&(ctrl != 4)) {
    if(board[j][i] == 0) {
      for(k=j; k<3; k++) {
        board[k][i] = board[k+1][i];
      }
      board[3][i] = 0;
      ctrl++;
    }
    j++;
   }
  }

return score;
}

int left(int** board,int** tmp,int score){

int i,j,k,ctrl = 0;
//First slide
for(i=0; i<4; i++) {
   j = 0;
   ctrl = 0;
  while((j<3)&&(ctrl != 4)) {
    if(board[i][j] == 0) {
      for(k=j; k<3; k++) {
        board[i][k] = board[i][k+1];
       }
      board[i][3] = 0;
      ctrl++;
     }
    else {
      j++;
    }

  }
}

//Add
for(i=0; i<4; i++) {
  j = 0;
  while(j<3) {
    if((board[i][j] == board[i][j+1])) {
      board[i][j] += board[i][j];
      score = score + board[i][j];
      board[i][j+1] = 0;
      j++;
    }
    j++;
  }
}

//Second slide
for(i=0; i<4; i++) {
  j = 0;
  ctrl = 0;
  while((j<3)&&(ctrl != 4)) {
    if(board[i][j] == 0) {
      for(k=j; k<3; k++) {
        board[i][k] = board[i][k+1];
      }
      board[i][3] = 0;
      ctrl++;
    }
    j++;
  }
 }

return score;
}

int right(int** board,int** tmp,int score){
 //First slide
int i,j,k,ctrl = 0;
for(i=0; i<4; i++) {
  j = 3;
  ctrl = 0;
  while((j>0)&&(ctrl != 4)) {
    if(board[i][j] == 0) {
      for(k=j; k>0; k--) {
        board[i][k] = board[i][k-1];
      }
      board[i][0] = 0;
      ctrl++;
    } else {
      j--;
    }

  }
}

//Add
for(i=0; i<4; i++) {
  j = 3;
  while(j>0) {
    if(board[i][j] == board[i][j-1]) {
      board[i][j] += board[i][j];
      score = score + board[i][j];
      board[i][j-1] = 0;
      j--;
    }
    j--;
  }
}

//Second slide
for(i=0; i<4; i++) {
  j = 3;
  ctrl = 0;
  while((j>0)&&(ctrl != 4)) {
    if(board[i][j] == 0) {
      for(k=j; k>0; k--) {
        board[i][k] = board[i][k-1];
      }
      board[i][0] = 0;
      ctrl++;
    }
    j--;
  }
}
 return score;
}

int down(int** board,int** tmp,int score){

   int i,j,k,ctrl = 0;
   //First slide
  for(i=0; i<4; i++) {
     j = 3;
     ctrl = 0;
    while((j>0)&&(ctrl != 4)) {
      if(board[j][i] == 0) {
        for(k=j; k>0; k--) {
          board[k][i] = board[k-1][i];
         }
        board[0][i] = 0;
        ctrl++;
       }
      else {
        j--;
      }

    }
  }
  //Add
  for(i=0; i<4; i++) {
    j = 3;
    while(j>0) {
      if((board[j][i] == board[j-1][i])) {
        board[j][i] += board[j][i];
        score = score + board[j][i];
        board[j-1][i] = 0;
        j--;
      }
      j--;
    }
  }

  //Second slide
  for(i=0; i<4; i++) {
    j = 3;
    ctrl = 0;
    while((j>0)&&(ctrl != 4)) {
      if(board[j][i] == 0) {
        for(k=j; k>0; k--) {
          board[k][i] = board[k-1][i];
        }
        board[0][i] = 0;
        ctrl++;
      }
       j--;
   }
  }
 return score;
}


void restart(int** board,int** tmp,int* score,int* highscore){
  system("CLS");
int i,j,m,n,f,g;
  *score = 0;
  //Set all board elements 0
   for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++)
           board[i][j] = 0;
   }
   //First random 2 or 4
         f = rand() % 4;
         g = rand() % 4;

         board[f][g] =  ((rand() % 2) + 1) * 2;

  //Second random 2 or 4
          do{
            m = rand() % 4;
            n = rand() % 4;
          }while(board[m][n] != 0);

          board[m][n] =  ((rand() % 2) + 1) * 2;

  //Show score and board when enter
  printf("\n  WELCOME TO THE 2048 GAME!!\n");
  printf("  CONTROLS : W-UP , A-LEFT , S-DOWN , D-RIGHT , E-EXIT , X-RESTART\n");

  printf("\n  SCORE: %d",*score);
  printf("\n  HIGHEST SCORE: %d\n\n",*highscore);


    for(i=0 ; i<4 ; i++){
         printf("    ");
         for(j=0 ; j<4 ;j++){
             printf("-----");
         }
         printf("-\n    ");
         for(j=0 ; j<4 ;j++){
             if (board[i][j] != 0) {
                 if( ((i==m) && (j==n)) || ((i==f) && (j==g)) )
                       printf("|%3d*",board[i][j]);
                 else
                       printf("|%3d ",board[i][j]);
           }
           else{
                 printf("|    ");
           }
           tmp[i][j] = board[i][j];
     }
       printf("|\n");

   }

     printf("    ");
     for(i=0 ; i<4 ; i++){
         printf("-----");
     }
     printf("-\n");

 }

void printboard(int **board,int **tmp,int *score,int *highscore){

int i,j,m,n,tmphigh;

//High score control
tmphigh = *score;
if(tmphigh > (*highscore)){
    *highscore = tmphigh;
}
  //new number pops
  do {

   m = rand()%4;
   n = rand()%4;

 } while(board[m][n] != 0);

  board[m][n] =  ((rand() % 2) + 1) * 2;


  //show previous stage
  system("CLS");

  printf("\n  SCORE: %d",*score);
  printf("\n  HIGHEST SCORE: %d\n\n",*highscore);


    for(i=0 ; i<4 ; i++){
         printf("    ");
         for(j=0 ; j<4 ;j++){
             printf("-----");
         }
         printf("-\n    ");
         for(j=0 ; j<4 ;j++){
             if (tmp[i][j] != 0) {
                 if((i==m) && (j==n))
                       printf("|%3d*",tmp[i][j]);
                 else
                       printf("|%3d ",tmp[i][j]);
           }
           else{
                 printf("|    ");
           }

     }
       printf("|\n");

   }

     printf("    ");
     for(i=0 ; i<4 ; i++){
         printf("-----");
     }
     printf("-\n");

//show current stage

  for(i=0 ; i<4 ; i++){
       printf("    ");
       for(j=0 ; j<4 ;j++){
           printf("-----");
       }
       printf("-\n    ");
       for(j=0 ; j<4 ;j++){
           if (board[i][j] != 0) {
               if((i==m) && (j==n))
                     printf("|%3d*",board[i][j]);
               else
                     printf("|%3d ",board[i][j]);
         }
         else{
               printf("|    ");
         }
         tmp[i][j] = board[i][j];
   }
     printf("|\n");

 }

   printf("    ");
   for(i=0 ; i<4 ; i++){
       printf("-----");
   }
   printf("-\n");
}
