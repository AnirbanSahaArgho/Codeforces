int compare(const int *a, const int *b) {
    return (*a-*b);
}
 
int count_max(int arr[], int size) {
    if (size == 0 && size == 1) return 0;
 
    qsort(arr, size, sizeof(int), compare);
 
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (i<size-1 && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
    }
    return count;
}
 
int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++)
        {
            scanf("%f",&arr[i]);
        }
        printf("%d
",count_max(arr,size));
    }
 
    return 0;
}