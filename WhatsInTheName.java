import java.*;
import java.util.*;
public class Test{
	
	public static void main(String[] args){
	Scanner sc= new Scanner(System.in);
	int n=sc.nextInt();
	sc.nextLine();
	
		for(int i=0;i<n;i++){
			String name=sc.nextLine();
			char[] ar=new char[name.length()+10];
			int k=0;int ln=1;int mn=0;int fn=0;
			for(int j=(name.length())-1;j>=0;j--){
				char ch=name.charAt(j);
				//System.out.println(j);
				if(j!=0 && (name.charAt(j-1)!=' ') && ln==1)
				{	
					ar[k]=Character.toLowerCase(name.charAt(j));
					k++;
					ln=1;
				}
				else if(j==0)
				{
					ar[k]=Character.toUpperCase(name.charAt(j));
				
				
				}
				else if(name.charAt(j-1)==' '){
					ar[k]=Character.toUpperCase(name.charAt(j));
					k++;
					ar[k]=' ';
					k++;
					ar[k]='.';
					k++;
					j--;
					ln=0;
					
					
				}
				
			}
			for(int s=(ar.length)-1;s>=0;s--){
				//if(Character.isLetter(ar[s])==true)
				if(ar[s]!='\0')	
					System.out.print(ar[s]);
			}
			System.out.println();
		}
	
	/*
		for(int i=0;i<n;i++){
			String name=sc.nextLine();
			int num=0;
			int P=0;int extra=0;
			for(int j=0;j<name.length();j++){
				if(name.charAt(j)=='<'){
					num++;
					if(num>P)
						P=num;
					if(j+1<name.length() && name.charAt(j+1)=='>')
						num=P;
					
				}
				
				else if(name.charAt(j)=='='){
					continue;
				}
				else{
					if((j+1)<name.length() && name.charAt(j+1)=='>'){
						num-=1;
						if(num<0){
							extra+=1;
							num=0;
						}
					}
					else
						num=0;
					
					
					
				}
			}
			System.out.println(P+1+extra);
		}
		*/
	
	
	}
}