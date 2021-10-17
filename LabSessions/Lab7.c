#include<stdio.h>

void merge(int records[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l +1;
    int n2 = r -m ;
    
    int Left[n1], Right[n2];
    
    for(int i=0;i<n1; i++)
        Left[i] = records[l+i];
    
    for(j=0;j<n2; j++)
        Right[j] = records[m+1+j];
        
    i=0, j=0, k=l;
    while(i<n1 && j<n2) {
        if(Left[i] <= Right[j]) {
            records[k] = Left[i];
            i++;
        }
        else {
            records[k] = Right[j];
            j++;
        }
        k++;
    }
    
    while(i < n1) {
        records[k] = Left[i];
        i++; k++;
    }
    
    while(j< n2) {
        records[k] = Right[j];
        j++;
        k++;
    }
}

void mergesort(int records[], int l, int r) {
    if(l < r) {
        int m = l + (r-l) / 2;
        mergesort(records, l, m);
        mergesort(records, m+1, r);
        
        merge(records,l, m, r);
    }
}

int main() {
    int n, temp;
    int records[10000];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++) {
        scanf("%d", &records[i]);
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(records[j] > records[j+1]) {
                temp = records[j];
                records[j] = records[j+1];
                records[j+1] = temp;
            }
        }
    }
    
    // mergesort(records, 0, n);
    
    for(int i=0; i<n;i++) {
        printf("%d ", records[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--) {
        printf("%d ", records[i]);
    }
}
