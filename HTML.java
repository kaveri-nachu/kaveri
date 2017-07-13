public class Html
{
  private String name;
	private  String sym;
	private double pre_price;
	private double crr_price;
	double Percentage;
  Html(String name,String sym,double pre_price,double crr_price)
{
	this.name=name;
	this.sym=sym;
	this.pre_price=pre_price;
	this.crr_price=crr_price;
}
public double getChangePercentage()
{
	double Percentage=(crr_price/pre_price)*100;
	return Percentage; 
}  
public static void main(String[]args)
  {
	Html h1=new Html("ggg","$",500,700);
	h1.getChangePercentage();
	System.out.println(s1.getChangePercentage());
	}
}
