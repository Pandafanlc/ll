public class aa{
public static void main(String args[]){
int i;
aa t=new aa();
int c=t.b(12);
System.out.println(c);
}
int n=1,count=1;
int b(int n)
{
for(int i=2;i<n;i++)
 {if((n%i)==0)
count++;
b(n/i);
}
return count;
}}
