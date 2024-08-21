int n = arr.size();
        
        // Adjust d if it's greater than n
        d = d % n;

        // Reverse the first d elements
        reverse(arr.begin(), arr.begin() + d);
        
        // Reverse the remaining n - d elements
        reverse(arr.begin() + d, arr.end());
        
        // Reverse the entire array
        reverse(arr.begin(), arr.end());
