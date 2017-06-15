int main(){
    int x=0, i, j;
       for(i=2;i&lt;=100;i++){
        for(j=2;i%j!=0;j++);
        if(j==i){
            printf(&quot;%d &quot;,i);
            x=x+i;
        }
    }

printf(&quot;nSum is %d&quot;,x);
getch();
return 0;
}
About Latest Posts

Follow me
Ankit Wasankar
