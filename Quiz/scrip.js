const questions = [
    //Primeira pergunta
    {
        question: "Qual dessas opções melhor descreve seu atual nível de satisfação com seu corpo?",
        answers: [
            {text: "a) Satisfeita, mas sempre buscando melhorar.", correct: false},
            {text: "b) Não muito satisfeita, gostaria de fazer algumas mudanças.", correct: true},
            {text: "c) Muito insatisfeita, preciso de uma mudança significativa.", correct: false},
        ]
    },
    //Segunda pergunta
    {
        question: "Pergunta 1",
        answers: [
            {text: "Resposta 01", correct: false},
            {text: "Resposta 02", correct: true},
            {text: "Resposta 03", correct: false},
            {text: "Resposta 04", correct: false},
        ]
    },
    //Terceira pergunta
    {
        question: "Pergunta 1",
        answers: [
            {text: "Resposta 01", correct: false},
            {text: "Resposta 02", correct: true},
            {text: "Resposta 03", correct: false},
            {text: "Resposta 04", correct: false},
        ]
    },
    //Quarta pergunta
    {
        question: "Pergunta 1",
        answers: [
            {text: "Resposta 01", correct: false},
            {text: "Resposta 02", correct: true},
            {text: "Resposta 03", correct: false},
            {text: "Resposta 04", correct: false},
        ]
    }

];

const questionElement = document.querySelector('#question');
const answerButtons = document.querySelector('#answer-buttons');
const nextButton = document.querySelector('#next-btn');

let currentQuestionIndex = 0;
let score = 0;

function startQuiz() {
    currentQuestionIndex = 0;
    score = 0;
    nextButton.innerHTML = "Next";
    showQuestion();
}

function showQuestion() {
    resetState();
    let currentQuestion = questions[currentQuestionIndex];
    let questionNo = currentQuestionIndex + 1;
    questionElement.innerHTML = questionNo + ". " + currentQuestion.question;

    currentQuestion.answers.forEach(answer => {
        const button = document.createElement("button");
        button.innerHTML = answer.text;
        button.classList.add("btn");
        answerButtons.appendChild(button);
        if(answer.correct){
            button.dataset.correct = answer.correct;
        }
        button.addEventListener("click", selectAnswer);
    });
}

function resetState() {
    nextButton.style.display = "none";
    while (answerButtons.firstChild) {
        answerButtons.removeChild(answerButtons.firstChild);
    }
}
function selectAnswer(e){
    const selectedBtn = e.target;
    const isCorrect = selectedBtn.dataset.correct === "true";
    if(isCorrect){
        selectedBtn.classList.add("correct");
    }else{
        selectedBtn.classList.add("incorrect");
    }
    Array.from(answerButtons.children).forEach(button => {
        if(button.dataset.correct === "true"){
            button.classList.add("correct");
        }
        button.disabled = true;
    });
    nextButton.style.display = "block";
}


startQuiz();