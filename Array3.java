import java.util.*;
public class Array3
{
public static void main(String[] args)
{
	Scanner s=new Scanner(System.in);
	System.out.println("enter the size of the array");
	int n=s.nextInt();
	int[] a=new int[n];
	for(int i=0;i<n;i++)
	{
		a[i]=s.nextInt();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(a[i]+a[j]==a[k])
				{
					System.out.println(a[i]+" "+a[j]+" "+a[k]);
				}
			}
		}
	}
	
}
}
