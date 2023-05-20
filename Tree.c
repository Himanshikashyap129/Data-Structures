#include<stdio.h>
#include<stdlib.h>
struct node{
  int value;
  struct node* left;
  struct node* right;
};
struct node* create(int value){
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->value=value;
temp->left=NULL;
temp->right=NULL;
return temp;
}
void postorder(struct node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  printf("-%d",root->value);
  return ;
}
void inorder(struct node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  printf("-%d",root->value);
  inorder(root->right);
  return;
}
void preorder(struct node* root){
  if(root==NULL){
    return;
  }
  printf("-%d",root->value);
  preorder(root->left);
  preorder(root->right);
  return;
}
int main(){
  struct node* root=NULL;
  root=create(2);
  root->left=create(7);
  root->right=create(5);
  root->left->left=create(2);
  root->left->right=create(6);
  root->left->right->left=create(5);
  root->left->right->right=create(11);
  root->right->right=create(9);
  root->right->right->left=create(4);
  postorder(root);
  printf("\n______________\n");
  inorder(root);
  printf("\n_____________\n");
  preorder(root);
  printf("\n");
}