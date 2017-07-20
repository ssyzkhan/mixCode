public class TestHamilton{
	public static void main(String args[]){
		int a[][]={{0,1,1,1,0},
			{1,0,1,0,1},
			{1,1,0,1,0},
			{1,0,1,0,1},
			{0,1,0,1,0}};
		CombineProblem p;
		p=new Hamilton(a,5,1);
		General.backtrack(p);
	}
}