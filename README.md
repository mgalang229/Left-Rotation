# Left-Rotation
---
# Sample Input 0
5 4  
1 2 3 4 5
---
# Sample Output 0
5 1 2 3 4  
---
# Algorithm
<pre>
  i = 0
    j = 0               Current Array:
    temp = 1              [2, 1, 3, 4, 5]
    arr[j] = 2 
    arr[j+1] = 1
    
    j = 0               Current Array:
    temp = 1              [2, 3, 1, 4, 5]
    arr[j] = 3 
    arr[j+1] = 1
    
    j = 0               Current Array:
    temp = 1              [2, 3, 4, 1, 5]
    arr[j] = 4 
    arr[j+1] = 1
    
    j = 0               Current Array:
    temp = 1              [2, 3, 4, 5, 1]
    arr[j] = 5 
    arr[j+1] = 1
    
   i = 1
    j = 0               Current Array:
    temp = 2              [3 ,2, 4, 5, 1]
    arr[j] = 3 
    arr[j+1] = 2
    
    j = 0               Current Array:
    temp = 2              [3, 4, 2, 5, 1]
    arr[j] = 4 
    arr[j+1] = 2
    
    j = 0               Current Array:
    temp = 2              [3, 4, 5, 2, 1]
    arr[j] = 5 
    arr[j+1] = 2
    
    j = 0               Current Array:
    temp = 2              [3, 4, 5, 1, 2]
    arr[j] = 1 
    arr[j+1] = 2
    
   i = 2
    j = 0               Current Array:
    temp = 3              [4 ,3, 5, 1, 2]
    arr[j] = 4 
    arr[j+1] = 3
    
    j = 0               Current Array:
    temp = 3              [4, 5, 3, 1, 2]
    arr[j] = 5 
    arr[j+1] = 3
    
    j = 0               Current Array:
    temp = 3              [4, 5, 1, 3, 2]
    arr[j] = 1 
    arr[j+1] = 3
    
    j = 0               Current Array:
    temp = 3              [4, 5, 1, 2, 3]
    arr[j] = 2 
    arr[j+1] = 3
    
   i = 3
    j = 0               Current Array:
    temp = 4              [5, 4, 1, 2, 3]
    arr[j] = 5 
    arr[j+1] = 4
    
    j = 0               Current Array:
    temp = 4              [5, 1, 4, 2, 3]
    arr[j] = 1 
    arr[j+1] = 4
    
    j = 0               Current Array:
    temp = 4              [5, 1, 2, 4, 3]
    arr[j] = 2 
    arr[j+1] = 4
    
    j = 0               Current Array:
    temp = 4              [5, 1, 2, 3, 4]
    arr[j] = 3 
    arr[j+1] = 4
    
    i = 3
    d = 4
    3 < 4 NOT TRUE
    LOOP ENDS
    
    Final Array:
    [5, 1, 2, 3, 4,]
    
</pre>
