#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char[]);

int main(){
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playerName[20];
    time_t t;

    time(&t);
    
    //Registering Player Name
    printf("=============================== REGISTER NAME: ===============================\n\t\t\t\t");
    fgets(playerName,20, stdin);

    mainhome:
    system("clear");
    for(i=1; i<80; i++){
        printf("=");
    }

    //Creating the main game screen
    printf("\n\t\t\t             << QUIZ GAME >>\n");
    printf("\n\t\t***************************************************");
    printf("\n\n\t\t\t\t         WELCOME\n ");
    printf("\n\t\t\t\t           TO\n ");
    printf("\n\t\t\t\t      THE QUIZ GAME ");
    printf("\n\t\t");
    printf("\n\t\t****************************************************");
    printf("\n\t\t    Model Institute of Engineering and Technology");
    printf("\n\t\t****************************************************");

    printf("\n\t\t > Press S to start the game.");
    printf("\n\t\t > Press V to view the highest score.");
    printf("\n\t\t > Press R to reset score.");
    printf("\n\t\t > Press H for help.");
    printf("\n\t\t > Press Q to quit.");
    printf("\n\t\t____________________________________________________\n\n");

    for(i=0; i<80; i++){
        printf("=");
    }

    printf("\nCurrent date and time : %s", ctime(&t));//Printing the current time on the screen

    for(i =0; i<80; i++){
        printf("=");
    }

    printf("\n");

    choice = toupper(getchar());
    getchar();

    //Start of the game
    if (choice == 'S'){

        system("clear");
        printf("\nWELCOME %s      TO THE QUIZ GAME...", playerName);
        printf("\n\n Here are some tips that will help you get started:\n");
        printf("*************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game, WARMUP ROUND & CHALLENGE ROUND");
        printf("\n >> In the warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give ateast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with the Challenge Round. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points");
        printf("\n    By this way you can score upto 100 points.");
        printf("\n >> You will be given 4 options and you have to press 1, 2, 3, or 4 for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marks for the answers.");
        printf("\n\n\t ************** ALL THE BEST **************");
        printf("\n\n\n Press Y to start the game! \n");
        printf("\n Press any other key to return to the main menu!\n\n>>> ");

        if (toupper(getchar()) == 'Y'){
            goto home;
        }

        else{
            goto mainhome;
        }
    }

    //Help Window
    if(choice == 'H'){
        help();
        getchar();
        goto mainhome;

    }

    //Record holding window
    else if(choice == 'V'){
        show_record();
        goto mainhome;

    }

    //Resetting the score
    else if(choice == 'R'){
        reset_score();
        getchar();
        goto mainhome;

    }

    //Quitting the game
    else if(choice == 'Q'){
        system("clear");
        printf("================================= THANKS FOR PLAYING =================================");
        exit(1);
    }

    else{
        printf("Please choose anything : ");
        goto mainhome;
    }

    home:
    system("clear");
    count=0;
    for(i=1;i<=6;i++){
        getchar();
        system("clear");
        r1=i;
        

        //WARMUP ROUND
        switch(r1){
            case 1:
            system("clear");
            printf("\n\nWhich of the following is not a correct variable type?");
                printf("\n\nA. float\t\tB. real\n\nC. int\t\t\tD. char\n\n>>> ");
                if(toupper(getchar())=='B'){
                    printf("\n\nCORRECT !!!");
                    getchar();
                    count++;
                }
                else{
                    printf("\n\nWRONG!!! The correct answer is B.real\n");
                    getchar();
                }
            
            case 2:
            system("clear");
            printf("\n\nWhich of the following is a logical NOT operator?");
                printf("\n\nA.&&\t\tB.&\n\nC.!\t\tD.ALL OF THE ABOVE\n\n>>> ");
                if(toupper(getchar())=='C'){
                    printf("\n\nCORRECT !!!");
                    getchar();
                    count++;
                }  

                else{
                    printf("\n\nWRONG!!! The correct answer is C.!\n");
                    getchar();
                }

            case 3:
            system("clear");
            printf("\n\nWho is Father of C Language?");
                printf("\n\nA.Dennis Ritchie\t\tB.Bjarne Stroustrup\n\nC.Dr. E.F. Codd\t\t\tD.James A. Gosling\n\n>>> ");
                if(toupper(getchar())=='A'){
                    printf("\n\nCORRECT !!!");
                    getchar();
                    count++;
                }  

                else{
                    printf("\n\nWRONG!!! The correct answer is A.Dennis Ritchie!\n");
                    getchar();
                }
            
            case 4:
            system("clear");
            printf("\n\nWhat keyword covers unhandled possibilities?");
                printf("\n\nA.contiigency\t\tB.Default\n\nC.all\t\t\tD.other\n\n>>> ");
                if(toupper(getchar())=='B'){
                    printf("\n\nCORRECT !!!");
                    getchar();
                    count++;
                }  

                else{
                    printf("\n\nWRONG!!! The correct answer is B.Default!\n");
                    getchar();
                }

            case 5:
            system("clear");
            printf("\n\nWhich follows the case statement?");
                printf("\n\nA.:\t\tB.;\n\nC.new line\tD.{}\n\n>>> ");
                if(toupper(getchar())=='A'){
                    printf("\n\nCORRECT !!!");
                    getchar();
                    count++;
                } 

                else{
                    printf("\n\nWRONG!!! The correct answer is A. :!\n");
                    getchar();
                }
                

    }

    //Checking if you're eligible to play the game
    printf("\nThe number of correct answer = %d", count);
    if(count>=2){
        goto test;
    }

    else{
        printf("\n\nSORRY YOU ARE NOT SMART ENOUGH. GO HOME KID!");
        getchar();

        goto mainhome;
    }

    test:
    system("clear");
    printf("\n\n\t\t\tCONGRATULATIONS %s \t\tYou are eligible for this round!\n", playerName);
    printf("******************************************************************");
    printf("\n\n\n\nPress P to start the game ! \n>>> ");
    
    if(toupper(getchar()) == 'P'){
        goto game;
    }

    else{
        goto mainhome;
    }

    //Initializing the challenge round
    game:
    system("clear");
    countr = 0;
    for(i=1;i<=23;i++){
        getchar();
        system("clear");
        r = i;
        switch(r){
            case 1:
            system("clear");
            printf("\n\nTo print a float value which format specifier can be used?");
            printf("\n\nA.%%lf\t\tB.%%LF\t\tC.%%d\t\tD.%%f\n\n>>> ");
            if (toupper(getchar()) =='D'){
                printf("\n\nCORRECT!!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG!!! The correct answer is D.%%f");
                getchar();
                goto score;
            }

            case 2:
            system("clear");
            printf("\n\n\nWhich one of the following is not a valid identifier?");
            printf("\n\nA.1integer\t\tB._integer\t\tC. int_ger\t\tD.integer1\n\n>>> ");
            if (toupper(getchar()) =='A'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG!!! The correct answer is A.1integer");
                getchar();
                goto score;

            }

            case 3:
            system("clear");
            printf("\n\n\n Which of the following is the proper keyword to deallocate memory?");
            printf("\n\nA.delete\t\tB.free\t\tC.remove\t\tD.create\n\n>>> ");
            if (toupper(getchar())=='B'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is B.free");
                getchar();
                goto score;
            }

            case 4:
            system("clear");
            printf("\n\n\nWhich of the following is the proper declaration of a pointer?");
            printf("\n\nA.int *x;\t\tB.ptr x;\t\tC.int&x;\t\tD.int x;\n\n>>> ");
            if (toupper(getchar()) == 'A'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is A.int *x;");
                getchar();
                goto score;
            }

            case 5:
            system("clear");
            printf("\n\n\nWhich properly declares a variable of struct foo?");
            printf("\n\nA.struct foo var;\t\tB.foo;\t\tC.int foo;\t\tD.struct foo;\n\n>>> ");
            if (toupper(getchar()) == 'A'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is A.struct foo var");
                getchar();
                goto score;
            }

            case 6:
            system("clear");
            printf("\n\n\nWhat is the index number of the last element of an array with 29 elements?");
            printf("\n\nA.29\t\tB.0\t\tC.28\t\tD.Programmer-defined\n\n>>> ");
            if (toupper(getchar()) == 'C'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is C.28");
                getchar();
                goto score;
            }

            case 7:
            system("clear");
            printf("\n\n\nWhich of the following adds one string to the end of another?");
            printf("\n\nA.stringadd();\t\tB.stradd();\t\tC.append();\t\tD.strcat();\n\n>>> ");
            if (toupper(getchar()) == 'D'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is D.strcat();");
                getchar();
                goto score;
            } 
            
            case 8:
            system("clear");
            printf("\n\n\nWhich is the only function all C programs must contain?");
            printf("\n\nA.main\t\tB.print\t\tC.system\t\tD.start\n\n>>> ");
            if (toupper(getchar()) == 'A'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is A.start");
                getchar();
                goto score;
            }

            case 9:
            system("clear");
            printf("\n\n\nWhich of the following is the correct operator to compare two variables?");
            printf("\n\nA.=\t\tB.==\t\tC.equal\t\tD.!=\n\n>>> ");
            if (getchar() == 'B'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is B.==");
                getchar();
                goto score;
            } 

            case 10:
            system("clear");
            printf("\n\n\nHow many times is a do while loop guaranteed to loop?");
            printf("\n\nA.1\t\tB.infinity\t\tC.variable\t\tD.0\n\n>>> ");
            if (toupper(getchar()) == 'A'){
                printf("\n\nCORRECT !!!");
                countr++;
                getchar();
            }

            else{
                printf("\n\nWRONG !!! The correct answer is A.1");
                getchar();
                goto score;
                } 
            }
        }
    }

    score:
    system("clear");
    //Updating the score
    score = countr*10;

    if(score>0 && score<100){
        printf("\n\n\n\t******************************* CONGRATULATIONS *******************************");
        printf("\n\tYou won %.2f points", score);
        goto go;
    }

    else if(score==100){
        printf("\n\n\n\t\t******************************* CONGRATULATIONS *******************************");
        printf("\n\t\tYOU CAME FIRST!!!");
        printf("\n\t\t You won %.2f points", score);
        printf("\t\tTHANK YOU FOR PLAYING");
    }

    else{
        printf("\n\n\t************ SORRY YOU SUCK AT THIS, YOU DIDN'T WIN ANYTHING ************");
        printf("\n\t\tTHANK YOU FOR PLAYING");
        printf("\n\t\tTRY AGAIN ");
        goto go;
    }

    go:
    puts("\n\nPress Y if you want to play next game");
    puts("Press any key if you want to go to the main menu\n");
    if(toupper(getchar()) =='Y'){
        goto home;
    }

    else{
        edit_score(score, playerName);
        goto mainhome;
    }

}

//Making the help window
void help(){
        system("clear");
        printf("\n\n                                       HELP");
        printf("\n_________________________________________________________________________________________");
        printf("\n.................................. C PROGRAM QUIZ GAME ..................................");
        printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLENGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
        printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
        printf("\n    right answers otherwise you can't play the game...");
        printf("\n >> Your game starts with the Challenge Round, In this round you will be asked");
        printf("\n    total 10 questions each right answer will be awarded 10 points");
        printf("\n    You will be given 4 options and you have to press 1, 2, 3, or 4 for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
        printf("\n >> No negative making for the wrong answers");
        printf("\n\n****************************** BEST OF LUCK ******************************");
    }

//Making the edit score window
void edit_score(float score, char plnm[20]){
    system("clear");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "w");
    fscanf(f, "%s%f", nm, &sc);
    if(score>=sc){
        sc = score;
        fclose(f);
        f = fopen("score.txt", "w");
        fprintf(f, "%s%f", plnm, sc);
        fclose(f);
    }
}

//Making the reset score window
void reset_score(){
    system("clear");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "w");
    sc=0;
    fprintf(f,"%s,%f", nm, sc);
    fclose(f);
}

//Making the record holding window
void show_record(){
    system("clear");
    FILE *f;
    f = fopen("score.txt", "r");

    //checking for the file
    if (f==NULL){
        perror("Error while opening the file.\n"); 
        exit(EXIT_FAILURE);
    }

    else {do
        {
            //geting the name
            char name = fgetc(f);
    
            if (feof(f))
                break ;
    
            printf("%c", name);
        }  while(1);
        getchar();
    }
    
}
