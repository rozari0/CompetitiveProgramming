public class SecondLargest{
  public static void main(String[] args) {
    int [] array = {1,2,3,8,5,6,7,8};
    int max = Integer.MIN_VALUE;
    int secondMax = Integer.MIN_VALUE;

    for (int element: array){
      if (element > max){
        secondMax = max;
        max = element;
      } else if (element > secondMax && element < max){
        secondMax = element;
      }
    }

    System.out.println(secondMax);
  }
}
