public static int find(int num, int number)
{
    int n=num,seed;
    int temp,another=1;
    while(n>0){
        temp=n%10;
        another=another*temp;
        n=n/10;
    }
                 another=another*num;
    if(another==number)
        seed=1;
    else 
        seed=0;
                     return seed;
}
 public static void main (String[] args) throws java.lang.Exception
{
    Scanner sc = new Scanner(System.in);
    int number=sc.nextInt();
                       TreeSet ts=new TreeSet();
    for(int i=1;i<number/2;i++){
        if((number%i)==0)
            ts.add(i);
    }
                      Iterator it=ts.iterator();
    while(it.hasNext()){
        int num=(int)it.next();
        int seed=find(num,number);
        if(seed==1)
             System.out.println(Integer.toString(num));
                      }
}
