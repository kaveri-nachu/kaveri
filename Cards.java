public double b()
{
	return (p/(h * h))*703;
}
}
public class Card
{
static String s[]=new String[]{"a","b","c","d","e","h","t","r","y","k"};
        static double p[]={10,20,30,40,50,90,80,70,65,54};
        static double h[]={12,23,34,45,65,44,33,77,66,88};
            public static void main(String[] args) {
		for(int i=0; i<s.length;i++) {
			Try obj = new Try(s[i], p[i], h[i]);
				      if(obj.b()>25.0){
		 System.out.println("pnam \t"+ s[i]+"\n" + "Pht" + h[i] +"\n"+ " Pwt" + p[i] +"\n" +"BMI"+obj.b());
	         }
		 else
	      {
	    	  System.out.println("it is less than 25.0");
	      }
	}
		 }
}
