#include <iostream>
#include <time.h>

using namespace std;

int iNum[6]={0,0,0,0,0,0},iSecret[6],iHits(0),checkNum(0);

int main(){

    /**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/
    /**/printf(" _ __ ___   ___  __ _  __ _   ___  ___ _ __   __ _ \n");      /**/
    /**/printf("| '_ ` _ \\ / _ \\/ _` |/ _` |_/ __|/ _ | '_ \\ / _` |\n");   /**/
    /**/printf("| | | | | |  __| (_| | (_| |_\\__ |  __| | | | (_| |\n");     /**/
    /**/printf("|_| |_| |_|\\___|\\__, |\\__,_| |___/\\___|_| |_|\\__,_|\n"); /**/
    /**/printf("                |___/                              \n\n");    /**/
    /**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**//**/

    //table of numbers
    for(int numMax=1,c=1;c<=6;c++){
        for(int l=1;l<=10;l++){
        printf("%02d ",numMax);
        numMax++;
        }cout <<endl;
    }cout << endl;

    //add random numbers for mega-sena.
    srand( (unsigned)time(NULL) );
    for(int i=0;i<6;i++){
    iSecret[i]=1+(rand()%60);
        if((iSecret[i]>=1) && (iSecret[i]<=60)){
            for(int c=i;c>0;c--){
                while(iSecret[i]==iSecret[c-1]){
                iSecret[i]=1+(rand()%60);
                }
            }
        }
    }

    //check your numbers
    cout << "enter 6 numbers:\n";
    for(int i=0;i<6;i++){
    cin >> iNum[i];
        while(iNum[i]<1 || iNum[i]>60){
            cout<<"does not exist in the table\n";
            cin >> iNum[i];
        }
    }

    //prints the results
    cout << "your\n     ";
    for(int i=0;i<6;i++){
    printf("%02d ",iNum[i]);
    }cout << "\nmega\n     ";
    for(int i=0;i<6;i++){
    printf("%02d ",iSecret[i]);
    }

    //hits
    for(int i=0;i<6;i++){
        for(int c=0;c<6;c++){
            if(iNum[i]==iSecret[c]){
            iHits++;
            }
        }
    }cout << "\nhits "<<iHits<<"\n";

    return 0;
}
