int i=0,count=0;
        if(n==1){
            return 0;
        }
        while(i<=n){
            if(arr[i]==0){
                return -1;
            }
            i+=arr[i];
            if(i<n)
            count++;
            else{
                count++;
            }
        }
        return count;