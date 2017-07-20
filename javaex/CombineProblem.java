import java.util.Vector;
public abstract class CombineProblem{
	public Object a;
	public int n;
	public Comparable[] x;
	public boolean flag;
	public abstract boolean isComplete(int k);
	public abstract void printSolution(int k);
	public abstract Vector<Comparable>makeIterms(int k);
	public abstract boolean isPartial(int k);
}