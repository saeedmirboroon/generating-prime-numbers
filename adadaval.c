#include <stdio.h>
int main(){
int q;
while(q<1849){
ss:
  q++;
if (q%2 ==0){
  goto ss;
}
if (q%3==0 ){
  goto ss;

}
if (q%5==0){
  goto ss;
}
if (q%7==0){
  goto ss;
}
if (q%11==0){
  goto ss;
}
if(q%13==0){
  goto ss;
}
if(q%17==0){
  goto ss;
}
if (q%19==0){
  goto ss;
}
if (q%23==0){
  goto ss;
}
if (q%29==0){
  goto ss;
}
if (q%31==0){
  goto ss;
}
if (q%37==0){
  goto ss;
}
if (q%41==0){
  goto ss;
}
if (q%43==0){
  goto ss;
}
if(q%47==0){
  goto ss;
}
if(q%53==0){
  goto ss;
}
if(q%59==0){
  goto ss;
}
if(q%61==0){
  goto ss;
}
if(q%67==0){
  goto ss;
}
printf("%d>>\n",q);

}
}
