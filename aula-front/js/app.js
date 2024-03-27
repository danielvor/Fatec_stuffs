async function buscarCep(cep){
    alert(cep);
    let response = await fetch(`https://viacep.com.br/ws/${cep}/json/`, {method: 'GET'});
    console.log(response);
    if(response.status == 200){
        let data = await response.json();
        return data;
    } else {
        alert("CEP não encontrado");
    }

}

const containerv = document.createElement('div');
containerv.id = 'main';
containerv.style.backgroundColor = 'red';
containerv.style.width = '200px';

const entradaText = document.createElement('input');
entradaText.id = 'entradaText';
entradaText.setAttribute('type', 'text');
entradaText.setAttribute('placeholder', 'Digite algo');

const btnv = document.createElement('button');
btnv.id = 'nome';
btnv.innerText = 'Clique aqui';

containerv.appendChild(entradaText);
containerv.appendChild(btnv);

const ul = document.createElement('ul');
ul.id = 'lista';
containerv.appendChild(ul);

btnv.addEventListener('click', async function(e){
    const tarefas = document.querySelector('#nome');
    const lista = document.querySelector('#lista');
    const li = document.createElement('li');
    const listacep = await buscarCep(tarefas.value);
    li.innerHTML = `
        CEP: ${listacep.cep} <br>
        Logradouro: ${listacep.logradouro} <br>
        Bairro: ${listacep.bairro} <br>
        Cidade: ${listacep.localidade} <br>
        UF: ${listacep.uf} <br>
    `;
    lista.appendChild(li);
    tarefas.value = '';
    li.addEventListener('click', function(e){
        ul.remove(li)});
});

document.body.appendChild(containerv);