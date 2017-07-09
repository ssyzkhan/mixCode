import java.util.*;
public class Sort{
	public static void insertionSort(List<Comparable> a,Comparator comp){
		int i,j,n=a.size();
		Comparable key;
		for(j=1;j<n;j++){
			key=a.get(j);
			i=j-1;
			while(i>=0&&comp.compare(a.get(i),key)>0)
				i--;
			Collections.rotate(a.subList(i+1,j+1),1);
		}
	}
	public static void insertionSort(List<Comparable> a){
		int i,j,n=a.size();
		Comparable key;
		for(j=1;j<n;j++){
			key=a.get(j);
			i=j-1;
			while(i>=0&&a.get(i).compareTo(key)>0){
				i--;
			}
			Collections.rotate(a.subList(i+1,j+1),1);
		}
	}
	public static void insertionSort(Comparable[] a){
		int i,j,n=a.length;
		Comparable key;
		for(j=1;j<n;j++){
			key=a[j];
			i=j-1;
			while(i>=0&&a[i].compareTo(key)>0){
				a[i+1]=a[i];
				i--;
			}
			a[i+1]=key;
		}
	}
	public static void insertionSort(int[] a){
		int i,j,key,n=a.length;
		for(j=1;j<n;j++){
			key=a[j];
			i=j-1;
			while(i>=0&&a[i]>key){
				a[i+1]=a[i];
				i--;
			}
			a[i+1]=key;
		}
	}
}