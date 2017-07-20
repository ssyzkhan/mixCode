import java.util.Vector;
public class Hamilton extends CombineProblem{
	int start;
	public Hamilton(int[][] a, int n, int start){
		this.a=a;
		this.n=n;
		this.flag=false;
		this.x=new Integer[n];
		this.start=start-1;
	}
	public boolean isComplete(int k){
		if(k>=n)
			return ((int[][])a)[(Integer)(x[k-1])][(Integer)(x[0])]==1;
		return false;
	}
	public void printSolution(int k){
		System.out.print(((Integer)(x[0])+1));
		for(int i=1;i<n;i++)
			System.out.print("->"+((Integer)(x[i])+1));
		System.out.println("->"+((Integer)(x[0])+1));
	}
	public Vector<Comparable> makeIterms(int k){
		Vector<Comparable> iterms=new Vector<Comparable>();
		if(k==0){
			iterms.add(new Integer(start));
		}else{
			for(int i=0;i<n;i++)
				if(((int[][])a)[(Integer)(x[k-1])][i]==1)
					iterms.add(new Integer(i));
		}
		return iterms;
	}
	public boolean isPartial(int k){
		for(int i=0;i<k;i++)
			if(x[i].compareTo(x[k])==0)
				return false;
		return true;
	}
}