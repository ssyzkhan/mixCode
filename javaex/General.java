import java.util.Vector;
public class General{
	public static void backtrack(CombineProblem p){
		explore(p,0);
		if(!p.flag)
			System.out.println("no solution!");
	}
	public static void backtrack(SpecialProblem p){
		explore(p,0);
		if(!p.flag)
			System.out.println("no solution!");
	}
	private static void explore(CombineProblem p, int k){
		if(k>=p.n){
			if(p.isComplete(k)){
				p.flag=true;
				p.printSolution(k);
			}
			return;
		}
		Vector<Comparable> iterms=p.makeIterms(k);
		for(int i=0;i<iterms.size();i++){
			p.x[k]=iterms.get(i);
			if(p.isPartial(k))
				explore(p,k+1);
		}
	}
	private static void explore(SpecialProblem p, int k){
		if(k>=p.n){
			if(p.isComplete(k)){
				p.flag=true;
				p.printSolution(k);
			}
			return;
		}
		for(int i=0;i<2;i++){
			p.x[k]=i;
			if(p.isPartial(k))
				explore(p,k+1);
		}
	}
}