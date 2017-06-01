public class ForLoop5{
	public static void main(String ar[]){
		if(ar.length==0){
			System.out.println("Please enter an Integer number");
		}
		else{
			int a=Integer.parseInt(ar[0]);
			if(a==0 || a==1){
				System.out.println(a+" is neither prime nor composite");
			}
			else{
				int i;
				int flag=0;
				for(i=2;i<a/2;i++){
					if(a%i==0){
						flag=1;break;
					}
				}
				if(flag==0){
					System.out.println(a+" is a Prime Number");
				}
				else{
					System.out.println(a+" is not a Prime Number");
				}
			}			
		}	
	}
}