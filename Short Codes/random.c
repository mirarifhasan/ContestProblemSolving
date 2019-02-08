#include<stdio.h>
#include<time.h>
int main(){

int generate_random(int lower,int higher){


srand(time(NULL));//main function er 1st line

   return lower+ rand()%(higher-lower+1);
}


}
