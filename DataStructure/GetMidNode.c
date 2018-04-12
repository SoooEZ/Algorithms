Status GetMidNode(LinkList L, ElemType *e){
  LinkList search, mid;
  mid = search = L;
  while (search->next != NULL) {
    // search 移动的速度是mid的2倍
    if (search->next->next != NULL) {
      search = search->next->next;
      mid = mid->next;
    }else{
      search = search->next;
    }
  }

  *e = mid->data;

  return OK;
}
