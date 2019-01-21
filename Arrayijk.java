import java.util.*;
import java.lang.*;


public class Arrayijk
{
	static void tofind(int[] arr)
	{
		int leng=arr.length;
		for(int i=0;i<leng-2;i++)
		{
			for(int j=i+1;j<leng-1;j++)
			{
				for(int k=j+1;k<leng;k++)
				{
					if(arr[i]+arr[j]==arr[k])
						System.out.println(arr[i]+" "+arr[j]+" "+arr[k]);
				}
			}
			
		}

	}
	public static void main(String[] args)
	{
		System.out.println("Enter number of digits");
		Scanner sn = new Scanner(System.in);
		int n = sn.nextInt();
		System.out.println("Please enter numbers");
		int[] arra= new int[n];
		for(int i=0;i<n;i++)
			arra[i]=sn.nextInt();
		tofind(arra);		
	}	
	}
