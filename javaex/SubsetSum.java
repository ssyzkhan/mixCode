public class SubsetSum extends SpecialProblem{
	private int c;
	public SubsetSum(int[] a, int c){
		this.a=a;
		this.c=c;
		this.n=a.length;
		this.flag=false;
		this.x=new int[n];
	}
	public boolean isPartial(int k){
		int sum=0,i;
		for(i=0;i<k;i++)
			sum+=((int[])(a))[i]*x[i];
		return sum<=c;
	}
	public boolean isComplete(int k){
		int sum=0,i;
		if(k>=n){
			for(i=0;i<n;i++)
				sum+=((int[])(a))[i]*x[i];
		}
		return sum==c;
	}
	public void printSolution(int k){
		for(int i=0;i<n;i++)
			if(x[i]==1)
				System.out.print(((int[])(a))[i]+" ");
		System.out.println();
	}
}