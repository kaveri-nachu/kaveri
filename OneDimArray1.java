class OneDimArray1{
	public static void main(String arg[]){
		int a[]={1,2,3,4,5};
		int i;
		int sum=0;
		float average;
		for(i=0;i<a.length;i++){
			sum=sum+a[i];
		}
		average=sum/a.length;
		System.out.println("Sum="+sum);
		System.out.println("Average="+average);
	}
}