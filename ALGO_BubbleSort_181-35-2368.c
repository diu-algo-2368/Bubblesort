#include<stdio.h>
int main(){
int n,c,d,x,swap,sorted[100], val[]={55,32,22,23,32,76,26,81,39,62,68,12,14,45,52,99,58,84,37,69,98,94,5,55,30,44,22,84,16,62,44,73,97,31,62,44,1,57,17,13,72,83,97,79,17,50,98,64,81,31,67,11,62,76,88,15,4,1,78,41,52,48,12,0,80,82,63,55,70,90,9,33,13,44,9,36,89,22,21,54,53,71,20,49,2,80,97,74,63,96,63,13,43,11,46,87,29,71,72,12};



  for (c = 0 ; c < 100 - 1; c++)
  {
    for (d = 0 ; d < 100 - c - 1; d++)
    {
      if (val[d] > val[d+1])
      {
        swap       = val[d];
        val[d]   = val[d+1];
        val[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < 100; c++)
     printf("%d\n", val[c]);



  printf("enter the data wants to search: ");
  scanf("%d",&n);

for(c=0;c<100;c++){
    if (val[c]==n){
      printf("location: %d",c);
        break;
    }
    else{
        d=0;
    }
}
if(x==d)
printf("\nnot found");

return 0;
}
