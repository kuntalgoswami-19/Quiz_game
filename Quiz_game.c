#include <stdio.h>

struct Question {
    char question[256];
    char options[4][128];
    char correctOption;
};

int main() {
    struct Question quiz[] = {
        {"What is the capital of Canada?", {"a) Toronto", "b) Ottawa", "c) Vancouver", "d) Montreal"}, 'b'},
        {"Who is the current President of the United States (2025)?", {"a) Joe Biden", "b) Donald Trump", "c) Barack Obama", "d) Kamala Harris"}, 'b'},
        {"What is the currency of Japan?", {"a) Won", "b) Yen", "c) Yuan", "d) Dollar"}, 'b'},
        {"Which planet is known as the Red Planet?", {"a) Venus", "b) Mars", "c) Jupiter", "d) Mercury"}, 'b'},
        {"Who wrote the national anthem of India?", {"a) Rabindranath Tagore", "b) Bankim Chandra", "c) Sarojini Naidu", "d) Subhas Chandra Bose"}, 'a'},
        {"What is the largest ocean in the world?", {"a) Atlantic Ocean", "b) Indian Ocean", "c) Arctic Ocean", "d) Pacific Ocean"}, 'd'},
        {"Which day is celebrated as World Environment Day?", {"a) 22 April", "b) 5 June", "c) 8 March", "d) 1 July"}, 'b'},
        {"Who discovered penicillin?", {"a) Louis Pasteur", "b) Alexander Fleming", "c) Marie Curie", "d) Edward Jenner"}, 'b'},
        {"What is the chemical symbol for gold?", {"a) Go", "b) Au", "c) Gd", "d) Ag"}, 'b'},
        {"Who is the current Prime Minister of the UK (2025)?", {"a) Boris Johnson", "b) Keir Starmer", "c) Rishi Sunak", "d) David Cameron"}, 'b'},
        {"What is the smallest bone in the human body?", {"a) Femur", "b) Stapes", "c) Radius", "d) Ulna"}, 'b'},
        {"Which is the longest river in the world?", {"a) Amazon", "b) Nile", "c) Yangtze", "d) Mississippi"}, 'b'},
        {"What is the full form of NASA?", {"a) National Aeronautics and Space Agency", "b) National Aeronautics and Space Administration", "c) North American Space Association", "d) New Aeronautics Safety Agency"}, 'b'},
        {"Who was the first woman in space?", {"a) Sally Ride", "b) Kalpana Chawla", "c) Valentina Tereshkova", "d) Sunita Williams"}, 'c'},
        {"Which element has the atomic number 1?", {"a) Helium", "b) Hydrogen", "c) Oxygen", "d) Carbon"}, 'b'},
        {"Who is the Chief Minister of West Bengal (2025)?", {"a) Mamata Banerjee", "b) Suvendu Adhikari", "c) Babul Supriyo", "d) Abhishek Banerjee"}, 'a'},
        {"Which country will host the 2032 Summer Olympics?", {"a) India", "b) USA", "c) Australia", "d) Japan"}, 'c'},
        {"Which Indian cricketer has scored the most international runs?", {"a) MS Dhoni", "b) Sachin Tendulkar", "c) Virat Kohli", "d) Rohit Sharma"}, 'b'},
        {"What is the boiling point of water at sea level?", {"a) 90°C", "b) 100°C", "c) 120°C", "d) 80°C"}, 'b'},
        {"Who invented the telephone?", {"a) Thomas Edison", "b) Alexander Graham Bell", "c) Nikola Tesla", "d) Marconi"}, 'b'},
        
        // Extra Questions
        {"Which planet has the most moons?", {"a) Mars", "b) Earth", "c) Jupiter", "d) Saturn"}, 'd'},
        {"Which Indian state is known as the 'Spice Garden of India'?", {"a) Kerala", "b) Assam", "c) Tamil Nadu", "d) Karnataka"}, 'a'},
        {"What does CPU stand for?", {"a) Central Process Unit", "b) Central Processing Unit", "c) Computer Personal Unit", "d) Central Processor Utility"}, 'b'},
        {"Which organ purifies our blood?", {"a) Heart", "b) Liver", "c) Kidney", "d) Lungs"}, 'c'},
        {"Which instrument is used to measure earthquakes?", {"a) Seismograph", "b) Barometer", "c) Thermometer", "d) Anemometer"}, 'a'}
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;
    char answer;

    printf("🎯 Welcome to the General Knowledge Quiz Game! 🎯\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("Q%d: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }
        printf("Enter your answer (a/b/c/d): ");
        scanf(" %c", &answer);

        if (answer == quiz[i].correctOption) {
            printf("✅ Correct!\n\n");
            score++;
        } else {
            printf("❌ Wrong! Correct answer: %c\n\n", quiz[i].correctOption);
        }
    }

    printf("🎉 Quiz Completed! Your Score: %d/%d\n", score, totalQuestions);
    if(score == totalQuestions) {
        printf("🏆 Excellent! Full marks!\n");
    } else if(score >= totalQuestions * 0.7) {
        printf("👍 Good job! You have good general knowledge.\n");
    } else {
        printf("📘 Keep learning! Practice makes perfect.\n");
    }

    return 0;
}
