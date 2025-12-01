 #include <stdio.h>

#include <stdlib.h>

int main () {

int n;

printf("Enter the number of prodects:");

scanf("%d",&n);

if (n<0){

printf("This is negative number");

}

int i;

int sum;

sum = 0;

int num;

num = 0;

for (i = 1; i <=n;i++){

printf("What's the price of products %d\n",i);

scanf("%d",&sum);

num = num+sum;

}


int cat;

printf("What's your category[1-A][2-B][3-C]:");

scanf("%d",&cat);

switch(cat){

case 1:

printf("A:hight category\n");

break;

case 2:

printf("B:medium category\n");

break;

case 3:

printf("C:basic category\n");

break;

}

if (cat==1){

int test;

int res;

test = (10*num)/100;

res = num-test;


printf("The price before discount:%d after:%d",num,res);


}

else if (cat==2){

int res2;

int test2;

test2 = (5*num)/100;

res2 = num-test2;

printf("The price before discount:%d after:%d", num, res2);

}

else {

printf("The final price:%d\n", num);

}


}
