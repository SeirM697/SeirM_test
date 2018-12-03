
public class ArrayUtils{
    public static int arrayMaxElement(int[] data){
         int max = 0;
        for(int i = 0;i <data.length;i++){
            if(max<data[i]){
               max=data[i];
            }
        }
        return max;
    }
    public  static int  arrayMinElement(int[] data){
        int min =data[1];
        for(int i = 0;i < data.length; i++ ){
            if(min>=data[i]){
                min=data[i];
            }
        }
        return min;
    }
    public static int arrayElementSum(int[] data){
        int sum=0;
        for(int i = 0;i < data.length; i++){
            sum=sum+data[i];
        }

        return sum;
    }
    public static void printArray(int[] data){
        for(int i = 0;i <data.length;i++){
            System.out.print(data[i]+" ");
        }
    }
    public static int[] arrayJoin(int[] a, int[] b){
        int[] c = new int[a.length+b.length];
        for(int i = 0; i < a.length;i++){
            c[i]=a[i];
        }
        for(int i = 0; i <b.length;i++){
            c[i+a.length]=b[i];
        }
        return c;
    }
    public static void printReversal(int[] data){
        int i = 0;
        int a=0;
        int b = data.length-1;
        while(i<b){
            int tmp = data[i];
            data[i]=data[b];
            data[b]=tmp;
            i++;
            b--;
        }
    }
    public static int[] arraySub(int[] data, int start , int end){
          int[] b = new int[end-start-1];
          int sum = 0;
          int temp = 0;
          for(int i = 0;i<data.length; i++){
              if(data[i]==start)
              break;
              sum += 1;
          }
        for(int i=0;i<(end-start-1);i++){
            b[i] = data[sum];
            sum++;
        }
        return b;
    }
    public static void main(String[] args){
        int[] data = new int[]{1,3,5,7,9};
        arraySub(data, 3, 7);
        int[] arr = new int[]{2,4,6,8,10};
        int b=arrayMaxElement(data);
        int a= arrayMinElement(data);
        int c=arrayElementSum(data);
        arrayJoin(data,arr);
        printReversal(data);
        System.out.println(b);
        System.out.println(a);
        System.out.println(c);
        printArray(arraySub(data, 3, 7));
    }
}