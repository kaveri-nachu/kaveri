class WhileLoop2{
	public static void main(String ar[]){
		int a=Integer.parseInt(ar[0]);
		int b;
		b=a;
		int temp;
		int ans=0;
		while(b!=0){
			temp=b%10;
			ans=ans*10+temp;
			b=b/10;
		}
		if(a==ans){
			System.out.println(a+" is a palindrome");
		}
		else{
			System.out.println(a+" is not a palindrome");
		}
	}
}