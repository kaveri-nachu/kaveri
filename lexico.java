public class lex 
{
  public static void main(String[] args)
{
		Scanner s=new Scanner(System.in);
		int i=0,j=0;
		int b=0,c=0;	
		int start=0,end=0;
	  String a=s.next();
	  for(i=0;i<a.length();i++)
    {
		for(j=a.length();j>i;j--)
    {
		b=a.compareTo(a.substring(i,j)); 
  	if(b>a.length())
     {
				 if(b>c)
         {
					 start=i;
					 end=j;
					 c=b;
				 }
         else
					 if(b==c)
           {
			       start=i;
						 end=j;
						 c=b;
					 }
		  } 
			 }
		  }
		  System.out.println(a.substring(start,end));
      }
      }
