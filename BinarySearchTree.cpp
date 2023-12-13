#include<iostream>
#include<queue>
using namespace std ;

class Node{
    public:
    int data;
    Node*left ;
    Node*right ;

    Node(int data){
        this-> data =data;
        this-> left =NULL;
        this-> right=NULL;
    }
};

Node*InsertToBST(Node*root , int data){
    if(root==NULL){
        root = new Node(data);
        return root ;
    }

    if(data> root->data){
        root->right = InsertToBST(root->right,data);
    }
    else{
        root->left =InsertToBST(root->left,data);
    }
    return root ;
}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}


void Takeinput(Node*&root){
    int data ;
    cin>>data ;
    while(data!= -1){
        root = InsertToBST(root,data);
        cin>>data;
    }
}

int main(){
    Node*root=NULL;
    cout<<"Enter data to Create BST :"<<endl ;
    Takeinput(root);

    cout<<"Printing BST"<<endl ;
    levelOrderTraversal(root);

    cout<<"Printing inorder"<<endl ;
    inorder(root);

    cout<<"Printing preorder"<<endl ;
    preorder(root);

    cout<<"Printing postorder"<<endl ;
    postorder(root);
    return 0 ;
}
