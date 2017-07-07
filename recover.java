public class Rect 
{
	    int a1;
	    int b1;
	    int a2;
	    int b2;
	    int a3;
	    int b3;
	    int a4;
	    int b4;
	      Scanner sc = new Scanner(System.in);
	     public static void main(String arg[])
      {
 Rectangle r = new Rectangle();
	        r.checkIntersect();
	         }
 private void checkIntersect()
      {
	        System.out.println("Enter Left Top a and b of 1st Rectangle");
	        a1 = sc.nextInt();
	        b1 = sc.nextInt();
	        System.out.println("Enter right Bottom a and b of 1st Rectangle");
	        a2 = sc.nextInt();
	        b2 = sc.nextInt();
	        System.out.println("Enter Left Top a and b of 2nd Rectangle");
	        a3 = sc.nextInt();
	        b3 = sc.nextInt();
	        System.out.println("Enter Right Bottom a and b of 2nd Rectangle");
	        a4 = sc.nextInt();
	        b4 = sc.nextInt();
	          if(a3 > a2 || a4 < a1 || b3 > b2 || b4 < b1)
	            System.out.println("Does not intersect");
	        else
	            System.out.println("Intersect");
	    }
	}
