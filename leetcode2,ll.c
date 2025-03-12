/*Problem Link
https://leetcode.com/problems/add-two-numbers/description/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *add(struct ListNode *head,int data){
  struct ListNode *current=malloc(sizeof(struct ListNode));
   current->val=data;
   current->next=NULL;
   if(head==NULL){
      return current;
   }
   else{
      struct ListNode *ptr=head;
      while(ptr->next!=NULL){
          ptr=ptr->next;
      }
      ptr->next=current;
      return head;
   }
   }
  struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
      struct ListNode* ptr1=l1;
      struct ListNode* ptr2=l2;
      struct ListNode* ptr3=NULL;
      int sum=0,carry=0;
  
  while(ptr1!=NULL||ptr2!=NULL){
    if(ptr1!=NULL && ptr2!=NULL){
      sum=ptr1->val+ptr2->val+carry;
     
      
    }
    else if(ptr1!=NULL &&ptr2==NULL){
     sum=ptr1->val+carry;
     
    }
    else if(ptr1==NULL &&ptr2!=NULL){
     sum=ptr2->val+carry;
       
    }
     if(sum>=10){
        carry=1;
        sum=sum-10;
       ptr3= add(ptr3,sum);
        sum=0;
      }
      else{
       carry=0; 
       ptr3=add(ptr3,sum);
       sum=0;
      }
    if(ptr1!=NULL){
     ptr1=ptr1->next;
     }
       if(ptr2!=NULL){
      ptr2=ptr2->next;
      }
  }
  if(carry!=0){
  ptr3=add(ptr3,carry);
  }
  return ptr3;
  }