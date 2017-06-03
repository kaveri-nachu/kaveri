public class IfStat7{
	public static void main(String arg[]){
		char ch=arg[0].charAt(0);
		if(ch>='a' && ch<='z'){
			System.out.println(ch+"->"+Character.toUpperCase(ch));
		}
		else{
			System.out.println(ch+"->"+Character.toLowerCase(ch));
		}
	}
}