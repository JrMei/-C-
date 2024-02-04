bool ListInsert(SqList &L, int i, ElemType e){
  if(i<1 || i>L.length+1)  //判断i的范围是否有效
    return false;
  for(int j=L.length;j>=i;j--)  //将第i个元素及之后的元素后移
    L.data[j]=L.data[j-1];
  L.data[i-1]=e;  //在位置i处放置e
  L.length++;  //线性表长度增加1
  return true;
}
