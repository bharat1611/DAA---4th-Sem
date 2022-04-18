int i = 0, j = n - 1;
    while(i < j)
    {
        if(arr[i] + arr[j] == target)
        {
            flag = 1;
            cout<<arr[i]<< " "<<arr[j]<<" "<<endl;
        }
        if(arr[i] + arr[j] < target)
            i++;
        else
            j--;
    }
    if(!flag)
        cout<<"No Such pairs exist";
