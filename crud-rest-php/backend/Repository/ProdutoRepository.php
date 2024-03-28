<?php
namespace App\Repository;

use App\Database\Database;
use App\Model\Produto;
use PDO;

class ProdutoRepository {
    private $conn;

    public function __construct() {
        $this->conn = Database::getInstance();
    }
    
    public function getAllProdutos() {
        var_dump("Chegou no getAllProdutos");
        $query = "SELECT * FROM produtos";
        $stmt = $this->conn->prepare($query);
        $stmt->execute();

        return $stmt->fetchAll(PDO::FETCH_ASSOC);
    }
    
    public function getProdutoById($produto_id) {
        var_dump("Chegou no getProdutoById");
        var_dump($this->conn);
        $query = "SELECT * FROM produtos WHERE produto_id = :produto_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":produto_id", $produto_id, PDO::PARAM_INT);
        $stmt->execute();

        return $stmt->fetch(PDO::FETCH_ASSOC);
    }

    public function insertProduto(Produto $produto) {
        var_dump("Chegou no insertProduto");
        $nome = $produto->getNome();
        $email = $produto->getEmail();
        $senha = $produto->getSenha();
        $query = "INSERT INTO produtos (nome, email, senha) VALUES (:nome, :email, :senha)";

        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":nome", $nome);
        $stmt->bindParam(":email", $email);
        $stmt->bindParam(":senha", $senha);

        return $stmt->execute();
    }

    public function updateProduto(Produto $produto) {
        var_dump("Chegou no updateProduto");
        $produto_id = $produto->getProdutoId();
        $nome = $produto->getNome();
        $email = $produto->getEmail();
        $senha = $produto->getSenha();
        $query = "UPDATE produtos SET nome = :nome, email = :email, senha = :senha WHERE produto_id = :produto_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":nome", $nome);
        $stmt->bindParam(":email", $email);
        $stmt->bindParam(":senha", $senha);
        $stmt->bindParam(":produto_id", $produto_id);
    
        return $stmt->execute();
    }
    
    public function deleteProduto($produto_id) {
        var_dump("Chegou no deleteProduto");
        $query = "DELETE FROM produtos WHERE produto_id = :produto_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":produto_id", $produto_id, PDO::PARAM_INT);
    
        return $stmt->execute();
    }
}    
