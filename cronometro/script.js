// Defina a data alvo
const dataAlvo = new Date('2024-05-26T11:30:00');

function atualizarContagem() {
    // Calcule a diferença entre a data alvo e a data atual
    const agora = new Date();
    const diferenca = dataAlvo - agora;

    // Calcule dias, horas, minutos e segundos
    const dias = Math.floor(diferenca / (1000 * 60 * 60 * 24));
    const horas = Math.floor((diferenca % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    const minutos = Math.floor((diferenca % (1000 * 60 * 60)) / (1000 * 60));
    const segundos = Math.floor((diferenca % (1000 * 60)) / 1000);

    // Exiba o resultado na página
    document.getElementById('countdown').innerHTML = `
    Faltam ${dias} dias, ${horas} horas, ${minutos} minutos e ${segundos} segundos até a data alvo.
    `;

    // Atualize a contagem a cada segundo
    setTimeout(atualizarContagem, 1000);
}

// Inicie a contagem
atualizarContagem();