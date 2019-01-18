#include "cc_rules.h"
#include <stdlib.h>

/*
  Rule 1: The first digit must be a 4
*/
int check_rule_1 (creditcard* cc) {
   if (cc == NULL){
       return -1;
   }
   if (cc -> number[0] == 4 ){
       return 1;
   }
  return -1;
}

/*
  Rule 2: If the third digit is even, the fourth digit must be odd
  If the third digit is odd, the fourth digit must be even
*/
int check_rule_2 (creditcard* cc) {
    if ( cc->number[2] %2 == 0 ){
        if(cc->number[3] %2 == 1 ){
            return 1;
        }
    }
        if ( cc->number[2] %2 == 1 ){
        if(cc->number[3] %2 == 0 ){
            return 1;
        }
    }
  return -1;
}
  

/*
  Rule 3: The fourth digit must be one greater than the fifth digit  
*/
int check_rule_3 (creditcard* cc) {
    if(cc-> number[3] - cc-> number[4] == 1){
        return 1;
    }
  return -1;
}


/* 
   Rule 4: The second digit must either be a zero or equal to the sum of the
   ninth and tenth digits
 */  
int check_rule_4 (creditcard* cc) {
    if(cc->number[1] == 0 || cc->number[1] == cc->number[8]+ cc->number[9] ){
        return 1;
    }
  return -1;
}



/*
  Rule 5: The product of the first, fifth, and ninth digits must be 24  
*/
int check_rule_5 (creditcard* cc) {
    if (cc->number[0] * cc->number[4] * cc->number[8] ==24){
        return 1;
    }
  return -1;
}


/*
  Rule 6: The sum of all digits must be evenly divisible by 4   
*/
int check_rule_6 (creditcard* cc) {
    int count = 0;
    int i = 0;
    for(;i<12 ; i++){
        count += cc-> number[i];
    }
    if (count %4 ==0){
       return 1;
    }
  return 0;
}


/* 
   Rule 7: If you treat the first two digits as a two-digit number, and 
   the seventh and eighth digits as a two digit number, their sum must be 100
 */  
int check_rule_7 (creditcard* cc) {
    if((cc->number[0]+cc->number[6])*10 + cc->number[1]+ cc->number[7]){
        return 1;
    }
  return -1;
}

/*
  All the rules above must be satisfied to be a valid card number
*/
int check_credit_card (creditcard* cc) {
  return check_rule_1(cc) &&
    check_rule_2(cc) &&
    check_rule_3(cc) &&
    check_rule_4(cc) &&
    check_rule_5(cc) &&
    check_rule_6(cc) &&
    check_rule_7(cc) ;
}
  

