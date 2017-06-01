public class IfStat5{
	public static void main(String args[]){
		char ch=args[0].charAt(0);
		if(Character.isLetter(ch))
			System.out.println("Alphabet");
		else if(Character.isDigit(ch))
			System.out.println("Digit");
		else	
			System.out.println("Special Character");			
	}
}