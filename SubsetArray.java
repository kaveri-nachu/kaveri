import java.util.*;
public class SubsetArray {
	public static void main(String []args) {
		Scanner scan=new Scanner(System.in);
		int n=scan.nextInt();
		int m=scan.nextInt();
		int []arr=new int[n];
		int []arr1=new int[m];
		int temp=0;
		for(int loopVar=0;loopVar<n;loopVar++) {
			arr[loopVar]=scan.nextInt();
		}
		for(int loopVar=0;loopVar<m;loopVar++) {
			arr1[loopVar]=scan.nextInt();
		}
		for(int loopVar=0;loopVar<m;loopVar++) {
			for(int loopVar1=0;loopVar1<n;loopVar1++) {
				if(arr[loopVar1]==arr1[loopVar]) {
					temp=1;
					
				}
				else {
					break;
				}
			}
		}
		if(temp==0) {
			System.out.println("NO");
		}
		else {
			System.out.println("YES");
		}
		scan.close();
	}
}
