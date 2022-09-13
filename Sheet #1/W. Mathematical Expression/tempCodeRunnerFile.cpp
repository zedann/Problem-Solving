(int i = 0 ; i < 3 ; i ++)
      cin >> arr[i];
    
    sort(arr,arr+3);

    cout<<arr[0];
    for(int i = 0 ; i < 3 ; i ++)
      cout <<  arr[i] << " ";