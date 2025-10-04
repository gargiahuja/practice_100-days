class Question:
    def __init__(self, prompt, answer):
        self.prompt = prompt
        self.answer = answer


question_choice = [
    "1. Which is Gargi's favourite colour \n(a).Blue\n(b).Black\n(c).Pink",
    "2. Which is Gargi's favourite fruit \n(a).Mango\n(b).Banana\n(c).Lichi",
    "3. What type of a girl Gargi is \n(a).Kaleshi\n(b).Overdramatic\n(c)Clumpsy",
]
print("Hii!\n This is a simple quiz about how much are you aware of your friend Gargi")

question = [
    Question(question_choice[0],"b"),
    Question(question_choice[1],"a"),
    Question(question_choice[2],"b"),
]


def run(question):
    score=0
    for questions in question:
        solution = input(question.prompt)
        if solution == question.answer:
            score+=1
    print("You know Gargi "+str(score))


run(question)