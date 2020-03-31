int main(){
     //declaring array
      int array[5];
      cout<<"Enter 5 numbers randomly : "<<endl;
      for(int i=0; i<5; i++)
      {
     //Taking input in array  
       cin>>array[i];        
      }  
      cout<<endl; 
      cout<<"Input array is: "<<endl;
      
      for(int j=0; j<5; j++)
      {
       //Displaying Array 
       cout<<"\t\t\tValue at "<<j<<" Index: "<<array[j]<<endl;        
      }   
      cout<<endl;
   
   // Displaying Sorted array
      cout<<"  Sorted Array is: "<<endl;
     for(int i3=0; i3<5; i3++)
   {
    cout<<"\t\t\tValue at "<<i3<<" Index: "<<array[i3]<<endl; 
   }  
return 0;
}
