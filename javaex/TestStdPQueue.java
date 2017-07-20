import java.util.*;
public class TestStdPQueue{
	public static void main(String[] args){
		Integer a[]={5,1,9,4,6,2,0,3,8,7},i;
		String b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
		Double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
		
		PriorityQueue q=new PriorityQueue(10,new Less());
		PriorityQueue q1=new PriorityQueue();
		for(i=0;i<10;i++){
			q.add(a[i]);
			q1.add(a[i]);
		}
		while(!q.isEmpty())
			System.out.print(q.poll()+" ");
		System.out.println();
		while(!q1.isEmpty())
			System.out.print(q1.poll()+" ");
		System.out.println();
	}
}