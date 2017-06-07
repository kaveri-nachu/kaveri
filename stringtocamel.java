public class CamelCase 
{
  public static void main(String[] args) 
  {
        System.out.print("Enter a string: ");
        String result = "";
        char firstChar = input.charAt(0);
        result = result + Character.toUpperCase(firstChar);
        for (int i = 1; i < input.length(); i++)
        {
            char currentChar = input.charAt(i);
            char previousChar = input.charAt(i - 1);
            if (previousChar == ' ') 
            {
                result = result + Character.toUpperCase(currentChar);
            } 
         else
         {
                result = result + currentChar;
            }
        }
        System.out.println(result);
    }
}
