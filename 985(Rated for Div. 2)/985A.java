import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
public class P985A {
	public static void main(String[] args)
	{
		int n;
		Scanner src=new Scanner(System.in);
		n=src.nextInt();
		int p[]=new int[n/2];
		for(int i=0;i<n/2;i++)
		{
			p[i]=src.nextInt();
		}
		Arrays.sort(p);
		/*for(int i=0;i<n/2;i++)
		{
			System.out.print(p[i]+" ");
		}*/
		int o=0;
		int e=0;
		int t;
		for(int i=0;i<n/2;i++)
		{
			t=(i+1)*2;
			e+=java.lang.Math.abs(p[i]-t);
			o+=java.lang.Math.abs(p[i]-t+1);
		}
		System.out.println(java.lang.Math.min(e,o));
	}
}
