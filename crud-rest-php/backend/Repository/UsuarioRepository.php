<?php
namespace App\Repository;

use App\Database\Database;
use App\Model\Usuario;
use PDO;

class UsuarioRepository {
    private $conn;

    public function __construct() {
        $this->conn = Database::getInstance();
    }
    public function getUsuarioByEmail($email) {
        var_dump("Chegou no getUsuarioByEmail");
        $query = "SELECT * FROM usuarios WHERE email = :email";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":email", $email);
        $stmt->execute();
    
        return $stmt->fetch(PDO::FETCH_ASSOC);
    }
    
    public function insertUsuario(Usuario $usuario) {
        var_dump("Chegou no insertUsuario");
        $nome = $usuario->getNome();
        $email = $usuario->getEmail();
        $senha = $usuario->getSenha();
        $query = "INSERT INTO usuarios (nome, email, senha) VALUES (:nome, :email, :senha)";

        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":nome", $nome);
        $stmt->bindParam(":email", $email);
        $stmt->bindParam(":senha", $senha);

        return $stmt->execute();
    }

    public function getAllUsuarios() {
        var_dump("Chegou no getAllUsuarios");
        $query = "SELECT * FROM usuarios";
        $stmt = $this->conn->prepare($query);
        $stmt->execute();

        return $stmt->fetchAll(PDO::FETCH_ASSOC);
    }

    public function getUsuarioById($usuario_id) {
        var_dump("Chegou no getUsuarioById");
        var_dump($this->conn);
        $query = "SELECT * FROM usuarios WHERE usuario_id = :usuario_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":usuario_id", $usuario_id, PDO::PARAM_INT);
        $stmt->execute();

        return $stmt->fetch(PDO::FETCH_ASSOC);
    }

    public function updateUsuario(Usuario $usuario) {
        var_dump("Chegou no updateUsuario");
        $usuario_id = $usuario->getUsuarioId();
        $nome = $usuario->getNome();
        $email = $usuario->getEmail();
        $senha = $usuario->getSenha();
        $query = "UPDATE usuarios SET nome = :nome, email = :email, senha = :senha WHERE usuario_id = :usuario_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":nome", $nome);
        $stmt->bindParam(":email", $email);
        $stmt->bindParam(":senha", $senha);
        $stmt->bindParam(":usuario_id", $usuario_id);
    
        return $stmt->execute();
    }
    
    public function deleteUsuario($usuario_id) {
        var_dump("Chegou no deleteUsuario");
        $query = "DELETE FROM usuarios WHERE usuario_id = :usuario_id";
        $stmt = $this->conn->prepare($query);
        $stmt->bindParam(":usuario_id", $usuario_id, PDO::PARAM_INT);
    
        return $stmt->execute();
    }
}    
