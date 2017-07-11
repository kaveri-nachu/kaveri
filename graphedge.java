public class GraphEdge
{
	    public static void main(String[]args)
      {
	        System.out.println("enter the number sum and difference");
	        Scanner sc=new Scanner(System.in);
	        int a,b;
	        int sum=sc.nextInt();
	        int dif=sc.nextInt();
	        int add=sum+dif;
	        a=add/2;
	        b=sum-a;
	        System.out.println("a value is "+a);
	        System.out.println("b value is "+b);
      }
}

