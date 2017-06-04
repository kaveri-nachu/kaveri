class WhileLoop1{
	public static void main(String ar[]){
		int a=Integer.parseInt(ar[0]);
		int b;
		while(a!=0){
			b=a%10;
			System.out.print(b);
			a=a/10;
		}
	}
}