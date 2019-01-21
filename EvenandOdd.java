import java.io.*;
import java.util.*;
public class EvenandOdd
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        int c[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
            c[i]=0;
        }
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {   
               if(arr[i]==arr[j])
               {
                  c[i]=c[i]+1;
               }
           }
        }
        for(int i=0;i<c.length;i++)
        {
            if(c[i]<2)
            {
                System.out.println(arr[i]);
            }
        }
    }
}
