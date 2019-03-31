public static int FindSmallest (int [] arr1){//start method

       int index = 0;
       int min = arra1[index];
       for (int i=1; i<arr1.length; i++){

           if (arr1[i] < min ){
               min = arr1[i];
               index = i;
           }


       }
       return index ;

}
