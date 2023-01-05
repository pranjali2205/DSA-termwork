/*NAME- PRANJALI SRIVASTAVA
  SEC - A
  ROLL NO- 05
  */
  #include<iostream>
  using namespace std;
  void towerofhanoi(int n,char from,char to,char aux)
{
    if(n==0)
        return;
    towerofhanoi(n-1,from,aux,to);
    cout<<"moving rod from  "<<from<<"  to "<<to<<endl;
    towerofhanoi(n-1,aux,to,from);
}
  int main()
  {
      int n;
      cout<<"enter number of rods:";
      cin>>n;
      char from='s',to='d',aux='a';
      towerofhanoi(n,from,to,aux);
  }
