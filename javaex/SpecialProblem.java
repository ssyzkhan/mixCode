import java.util.Vector;
public abstract class SpecialProblem{
	public Object a;
	public int n;
	public int[] x;
	public boolean flag;
	public abstract boolean isComplete(int k);
	public abstract void printSolution(int k);
	public abstract boolean isPartial(int k);
}