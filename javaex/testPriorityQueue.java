import java.util.*;
public class testPriorityQueue{
	public static void main(String[] args){
		Integer a[]={5,1,9,4,6,2,0,3,8,7};
		String b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
		Double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
		
		PrioQueue q=new PrioQueue();
		
		for(i=0;i<10;i++){
			q.enQueue(a[i]);
		}
		while(!q.empty())
			System.out.print(q.deQueue()+" ");
		System.out.println();
	}
}