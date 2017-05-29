import java.util.*;
public class LinearList{
	public static void merge(Comparable[] a,int p,int q,int r){
		int i,j,k;
		int n1,n2;
		n1=q-p+1;
		n2=r-q;
		Comparabe[] L=Arrays.copyOfRange(a,p,q+1),R=Arrays.copyOfRange(a,q+1,r+1);
		i=j=0;
		k=p;
		while(i<n1&&j<n2)
			if(L[i].compareTo(R[j])<0)
				a.set(k++,L[i++]);
			else
				a.set(k++,R[j++]);
		if(i<n1)
			for(;i<n1;i++)
				a.set(k++,L[i]);
		if(j<n2)
			for(;j<n2;j++)
				a.set(k++,R[j]);
	}
	public static void merge(List<Comparable> a, int p, int q, int r){
		int i,j,k,
		int n1,n2;
		n1=q-p+1,
		n2=r-q;
		Comparable[] L=new Comparable[n1],R=new Comparable[n2];
		for(i=0;i<n1;i++)
			L[i]=a.get(p+i);
		for(j=0;j<n2;j++)
			R[j]=a.get(q+1+j);
		i=j=0;
		k=p;
		while(i<n1&&j<n2)
			if(L[i].compareTo(R[j])<0)
				a.set(k++,L[i++]);
			else
				a.set(k++,R[j++]);
		if(i<n1)
			for(;i<n1;i++)
				a.set(k++,L[i]);
		if(j<n2)
			for(;j<n2;j++)
				a.set(k++,R[j]);
	}
	public static void merge(List<Comparable> a, int p, int q, int r,Comparator comp){
		int i,j,k,
		int n1,n2;
		n1=q-p+1,
		n2=r-q;
		Comparable[] L=new Comparable[n1],R=new Comparable[n2];
		for(i=0;i<n1;i++)
			L[i]=a.get(p+i);
		for(j=0;j<n2;j++)
			R[j]=a.get(q+1+j);
		i=j=0;
		k=p;
		while(i<n1&&j<n2)
			if(comp.compare(L[i],R[j])<0)
				a.set(k++,L[i++]);
			else
				a.set(k++,R[j++]);
		if(i<n1)
			for(;i<n1;i++)
				a.set(k++,L[i]);
		if(j<n2)
			for(;j<n2;j++)
				a.set(k++,R[j]);
	}
	public static int partition(List<Comparable> a,int p, int r, Comparator comp){
		Comparable x;
		int i,j;
		x=a.get(r);
		i=p-1;
		for(j=p;j<r;j++)
			if(comp.compare(a.get(j),x)<=0){
				i++;
				Collections.swap(a,i,j);
			}
		Collections.swap(a,i+1,r);
	}
}