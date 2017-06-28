class BinaryToDecimal
{
     public static void main(String args[])
        {
            Scanner s=new Scanner(System.in);
            System.out.println("Enter a binary number:");
            String n=s.nextLine();
            System.out.println(Integer.parseInt(n,2));
        }
}
