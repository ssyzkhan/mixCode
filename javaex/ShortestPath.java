import java.util.Arrays;

public class ShortestPath{
	public static Pair dijkstra(double[][] w, int s){
		int n=w.length,i;
		Vertex[] d=new Vertex[n];
		int[] pi=new int[n];
		boolean[] poped=new boolean[n];
		Arrays.fill(poped, false);
		for(i=0;i<n;i++)
			d[i]=new Vertex(Double.POSITIVE_INFINITY,i);
		d[s].weight=0.0;
		PrioQueue Q=new PrioQueue(new Less());
		for(i=0;i<n;i++)
			Q.enQueue(d[i]);
		while(!Q.empty()){
			int u=((Vertex)(Q.deQueue())).index;
			poped[u]=true;
			for(int v=0;v<n;v++){
				if(w[u][v]>0.0)
					if(!poped[v])
						if(d[v].weight>d[u].weight+w[u][v]){
							pi[v]=u;
							d[v].weight=d[u].weight+w[u][v];
						}
			}
			Q.fix();
		}
		return Pair.make(d,pi);
	}
	public static void printPath(int[] pi, int s, int i){
		if(i==s){
			System.out.print((i+1)+" ");
			return;
		}
		if(pi[i]==-1)
			System.out.println("no path from " + (s+1) + " to " + (i+1));
		else{
			printPath(pi,s,pi[i]);
			System.out.print((i+1)+" ");
		}
	}
}