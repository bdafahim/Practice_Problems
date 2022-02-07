bool validMountainArray(int* arr, int arrSize){
    if(arrSize<3)
        {
            return false;
        }
        
    int i=1;
    while(i<arrSize && arr[i]>arr[i-1])
    {
        i++;
    }
    
    if(i==1 || i == arrSize) return false;
    
    while(i<arrSize && arr[i]<arr[i-1])
    {
        i++;
    }
    if(i==arrSize) return true;
    
    return false;

}