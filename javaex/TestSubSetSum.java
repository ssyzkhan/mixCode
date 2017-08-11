public class TestSubSetSum{
	public static void main(String args[]){
		int a[]={1,2,3,4};
		SpecialProblem p=new SubsetSum(a,6);
		General.backtrack(p);
	}
}