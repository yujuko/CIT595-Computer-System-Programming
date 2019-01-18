#include "cc_rules.h"
#include <stdlib.h>
#include<string.h>
#include <stdio.h>

int main() {
    creditcard* cc = malloc(sizeof(creditcard));
    int newCard[12] ={4,8,0,7,6,0,5,2,1,7,6,6};
    memcpy(cc->number, newCard,sizeof(cc->number));
//     printf("%d\n",check_rule_1(cc));
//     printf("%d\n",check_rule_2(cc));
//     printf("%d\n",check_rule_3(cc));
//     printf("%d\n",check_rule_4(cc));
//     printf("%d\n",check_rule_5(cc));
//     printf("%d\n",check_rule_6(cc));
//     printf("%d\n",check_rule_7(cc));
    if(check_credit_card(cc) ==1)
        printf("%s\n", "Valid account number:)))");
    
    else        
        printf("%s\n", "Invalid account number!!!");

  return 0;
}
