#include <chrono>
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 

struct TreeNode {
    TreeNode *pLeft;
    TreeNode *pRight;
    int iValue;
    int iDepth;
};

typedef TreeNode *TreeHead;
const TreeHead emptyTree = 0;

void InsertNode(int iValue, TreeHead &pTree, int iDepth = 0) {
    if (pTree == emptyTree) {
        pTree = new TreeNode;
        pTree->iValue = iValue;
        pTree->pLeft = pTree->pRight = emptyTree;
        pTree->iDepth = iDepth;
        return;
    }

    if (iValue < pTree->iValue) {
        InsertNode(iValue, pTree->pLeft, iDepth + 1);
    } else {
        InsertNode(iValue, pTree->pRight, iDepth + 1);
    }
}

// Função para leitura em ordem (in-order)
void InOrderTraversal(TreeHead pTree) {
    if (pTree == emptyTree) return;
    InOrderTraversal(pTree->pLeft);
    std::cout << pTree->iValue << " ";
    InOrderTraversal(pTree->pRight);
}

// Função para leitura pré-ordem (pre-order)
void PreOrderTraversal(TreeHead pTree) {
    if (pTree == emptyTree) return;
    std::cout << pTree->iValue << " ";
    PreOrderTraversal(pTree->pLeft);
    PreOrderTraversal(pTree->pRight);
}

// Função para leitura pós-ordem (post-order)
void PostOrderTraversal(TreeHead pTree) {
    if (pTree == emptyTree) return;
    PostOrderTraversal(pTree->pLeft);
    PostOrderTraversal(pTree->pRight);
    std::cout << pTree->iValue << " ";
}

int main() {

    std::srand(std::time(0));

    std::vector<int> sizes = {1000, 3000, 5000};
    for (int size : sizes) {
        TreeHead tree = emptyTree;
        std::cout<< "Aperta qualquer tecla para continuar para a árvore de "<< size << " elementos";    
        std::string fds;
        std::getline(std::cin, fds);
        for (int i = 0; i < size; ++i) {
            int randomValue = std::rand();
            auto startInsert = std::chrono::high_resolution_clock::now();
            InsertNode(randomValue, tree);
            auto endInsert = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diffInsert = endInsert - startInsert;
            std::cout << "Tempo para inserir o elemento " << i << " de valor "<< randomValue<<": " << diffInsert.count() << " s\n";
        }

        auto startInOrder = std::chrono::high_resolution_clock::now();
        std::cout<<"\n\n\n\n\nLeitura em ordem:";
        InOrderTraversal(tree); // Realiza a leitura em ordem
        auto endInOrder = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diffInOrder = endInOrder - startInOrder;
        std::cout << "Tempo para leitura em ordem: " << diffInOrder.count() << " s\n";


        auto startPreOrder = std::chrono::high_resolution_clock::now();
        std::cout<<"\n\n\n\n\nLeitura em pré-ordem:";
        PreOrderTraversal(tree); // Realiza a leitura pré-ordem
        auto endPreOrder = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diffPreOrder = endPreOrder - startPreOrder;
        std::cout << "Tempo para leitura pré-ordem: " << diffPreOrder.count() << " s\n";

        auto startPostOrder = std::chrono::high_resolution_clock::now();
        std::cout<<"\n\n\n\n\nLeitura em pós-ordem:";
        PostOrderTraversal(tree); // Realiza a leitura pós-ordem
        auto endPostOrder = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diffPostOrder = endPostOrder - startPostOrder;
        std::cout << "Tempo para leitura pós-ordem: " << diffPostOrder.count() << " s\n";
    }
    return 0;
}
