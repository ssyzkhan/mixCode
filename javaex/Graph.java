import java.util.LinkedList;
public class Graph{
	public LinkedList<Vertex>[] adj;
	public int n;
	public Graph(double[][] a){
		int i,j;
		this.n=a.length;
		this.adj=new LinkedList[n];
		for(i=0;i<n;i++)
			adj[i]=new LinkedList<Vertex>();
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]!=0.0)
					(adj[i]).add(new Vertex(a[i][j],j));
	}
}