void selection_sort(vector<int>&nums){
  int n = nums.size();
  for(int i=0;i<n;i++){
    int mini = i;
    for(int j=i+1;j<n;j++){
      if(nums[mini] > nums[j]){
       mini = j;
      }
  }
     int temp = nums[mini];
      nums[mini] = nums[i];
      nums[i] = temp;
}
}
int main(){
  int size;
cout<<"Enter the size of the array : ";
cin>>size;
vector<int>nums(size);
for(int i=0;i<size;i++){
cout<<"Enter the element : "<<i+1;
cin>>nums[i];
}
selection_sort(nums);
for(int i=0;i<size;i++){
cout<<nums[i]<<" ";
}
}
