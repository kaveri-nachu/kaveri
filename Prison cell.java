public class Prison
{
    public static void main(String[] args)
    {
        int i,count,m,n,z=0,s=0,x=0;
        Scanner sd=new Scanner(System.in);
        int num=sd.nextInt();
        int[]ar=new int[num+1];
        for(n=1,m=0;n<=num;n++,m++)
        {
            count=0;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0&&n!=1)
            {
               ar[m]=n;
            }
        }
        for(int j=0;j<num;j++)
        {
                 if(ar[j]!=0)
                 {
                z=z+ar[j];      
               for(int f=1;f<num;f++)
                {
                if(z==ar[f+1])
                {
                       x++;
               }
            }
               }  
        }
         System.out.print(""+x);
        }
        }
    
