void getTime(int &h,int &m)
{
  cout<<"Input hour & min: ";
  cin>>h>>m;
}

int subtract(int h1,int m1,int h2,int m2)
{
  if(h1>h2 && m1<m2)
  {
    return (h2+24)-h1;
  }
  else if(h1>h2 && m1>m2)
  {
   return (h2+23)-h1;
  }
  else if(h1<h2 && m1<m2)
  {
    return h2-h1;
  }
  else if(h1<h2 && m1>m2)
  {
    return (h2-1)-h1;
  }
  
}

int subtract(int m1,int m2)
{
  if(m1>m2)
  {
    return (60+m2)-m1;
  }
  else
    return m2-m1;
}