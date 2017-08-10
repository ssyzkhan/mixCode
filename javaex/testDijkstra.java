public class testDijkstra{
	public static void main(String[] args){
		Pair r=new Pair();
		double a[][]={{0,10,0,5,0},
			{0,0,1,2,0},
			{0,0,0,0,4},
			{0,3,9,0,2},
			{7,0,6,0,0}};
		int i,n=5,s=0;
		int[] pi;
		Vertex[] d;
		r=ShortestPath.dijkstra(a,s);
		d=(Vertex[])r.first;
		pi=(int[])r.second;
		for(i=0;i<n;i++){
			if(i!=s){
				ShortestPath.printPath(pi,s,i);
				System.out.println();
				System.out.println(d[i].weight);
			}
		}
	}
}