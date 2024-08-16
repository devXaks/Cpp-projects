        int numcnt = 0;
        int cnt = 0;
        int arr1[1000];
        for (int j = 0; j < arr.size(); j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[j] == arr[k]) {
                    cout << arr[j];
                    numcnt+=1;
                }

            }
                arr1[cnt] = numcnt;
                cnt++;

        }

        for(int l = 0;l<arr.size();l++){
        for(int m = l+1;m<arr.size();m++){
               if (arr1[l] == arr1[m]){
                cout<<arr1[l];
                return false;
            }
            
        }
    }
    return true;        