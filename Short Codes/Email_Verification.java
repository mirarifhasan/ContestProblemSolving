
public class Email_Verification {
    
    public static void main(String arg[]){
        
        String s = new String();
        s = "Arif.ishan05$@gmail.com" ; 
        char[] a = s.toCharArray();
        
        int flag = 1;
        
        if(s.endsWith("@gmail.com")){
            for(int i=0; i<s.length() ; i++)
            {
                if( a[i]=='$' && 'Z'>= a[i] && a[i]>='A' ){
                    flag = 1;
                    break;}
            }
        }
        
        if(flag == 1)
            System.out.println("verified :) ");
        else
            System.out.println("unvalied :( ");
    }
}