//Libraries and predfines function
#include <iostream>
#include <cstdlib>
#include <ctime>
int GEN,INDENT_LENGTH=4;
typedef struct pointers{
    char alleles[2];
    struct pointers *parent[2];
}node;
using namespace std;
node *root=NULL;

//generating blood type for the buttom generation randomly
char random_allele();
//recursively create the family tree 
node *create_family(int generations){

    //creating a memorie feild to fill the tree branch 
    node *tree=(node *)malloc(sizeof(node));
    //memorie failures check!
    if (tree==NULL){
        cout<<"malloc failure!"<<endl;
        exit(-1);
    }

    if(generations>1){
        //creating family tree 
        tree->parent[0]=create_family(generations-1);
        tree->parent[1]=create_family(generations-1);

        //assign blood type based on recent generation
        tree->alleles[0]=tree->parent[0]->alleles[rand()%2];
        tree->alleles[1]=tree->parent[1]->alleles[rand()%2];
    }else{
        //assiging alleles to the button geneartions
        tree->parent[0]=tree->parent[1]=NULL; 
        
        tree->alleles[0]=random_allele();
        tree->alleles[1]=random_allele();
    }
    return tree;
}

//printing the family tree
void print_family(node *child,int generation){
    //if we touched the buttom of tree just exit
    if (child==NULL) return;
    
    for (int spaces = 0; spaces < generation*INDENT_LENGTH; spaces++) printf(" ");

    printf("Generation %i, blood type %c%c\n", generation, child->alleles[0],child->alleles[1]);
    print_family(child->parent[0],generation+1);
    print_family(child->parent[1],generation+1);
}
int main (void){
    //ganartion of random number based on time bits
    srand(time(0));
    
    //specify how many generations
    cout<<"number of generations:";
    do{
        cin>>GEN;
        if (GEN<=1) cout<<"generations number >1:";
    } while (GEN<=1);
    
    //create family function
    root=create_family(GEN);
    
    //print family function
    print_family(root,0);
    //eof
    return 0; 
}
char random_allele(){
    int number = rand() % 3;
    if (number== 0) return 'A';
    else if (number== 1) return 'B';
    return 'O';
    
}