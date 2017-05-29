import java.util.*;
public class test{
	public static void main(String args[]){
		int a[]={5,1,9,4,6,2,0,3,8,7};
		String[] b={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
		Double[] c={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
		int i;
		Sort.insertionSort(a);
		for(i=0;i<10;i++)
		    System.out.print(a[i]+" ");
		System.out.println();
		
		Sort.insertionSort(b);
		for(i=0;i<b.length;i++)
			System.out.print(b[i]+" ");
		System.out.println();
		
		Sort.insertionSort(c);
		for(i=0;i<c.length;i++)
			System.out.print(c[i]+" ");
		System.out.println();
		
		ArrayList<Integer> A=new ArrayList<Integer>();
		for(i=0;i<10;i++)
			A.add(a[i]);
		Vector<String> B = new Vector<String>();
		for(i=0;i<b.length;i++)
			B.add(new String(b[i]));
		LinkedList<Double> C = new LinkedList<Double>();
		for(i=0;i<c.length;i++)
			C.add(c[i]);
		/*
		Sort.insertionSort((List)A);
		System.out.println(A);
		Sort.insertionSort((List)B);
		System.out.println(B);
		Sort.insertionSort((List)C);
		System.out.println(C);
		
		Sort.insertionSort((List)A,new Greater());
		System.out.println(A);
		Sort.insertionSort((List)B, new Less());
		System.out.println(B);
		Sort.insertionSort((List)C, new Less());
		System.out.println(C);
		*/
		Sort.mergeSort((List)A, 0, 9, new Greater());
		System.out.println(A);
		Sort.mergeSort((List)B,0,5, new Less());
		System.out.println(B); 
		Sort.mergeSort((List)C,0,9, new Greater());
		System.out.println(C);
	}
}