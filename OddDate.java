public class OddDays
{
    public static void main(String[]args)
    {
		  Scanner s = new Scanner(System.in);
		  String day[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
		  System.out.println("Day");
		  String sday = s.next();
		  System.out.println("Year");
		  int y = s.nextInt();
		  int in = 0;
		   for (String ss : day)
       {
			   if (sday.equalsIgnoreCase(ss))
         {
				  in++;
			}
		}
		    if (in % 2 == 0)
        {
			    for (int i = 0; i < day.length; i += 2) 
          {
				    System.out.println(day[i]);
			}
		}
		if (in % 2 == 1) 
    {
			for (int i = 1; i < day.length; i += 2)
      {
				System.out.println(day[i]);
			}
		}
		if (y % 4 == 0)
    {
			System.out.println(day[in + 1]);
		}
		s.close();
}
