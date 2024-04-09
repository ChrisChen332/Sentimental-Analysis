
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

struct sentence {
    char text[MAX_LINE_LENGTH];
    float score;
};

int main() {
    // Sample sentences and scores
    struct sentence samples[] = {
        {"VADER is smart, handsome, and funny.", 0.97},
        {"VADER is smart, handsome, and funny!", 0.97},
        {"VADER is very smart, handsome, and funny.", 0.83},
        {"VADER is VERY SMART, handsome, and FUNNY.", 0.31},
        {"VADER is VERY SMART, handsome, and FUNNY!!!", 0.31},
        {"VADER is VERY SMART, uber handsome, and FRIGGIN FUNNY!!!", 0.24},
        {"VADER is not smart, handsome, nor funny.", 0.83},
        {"The book was good.", 0.47},
        {"At least it isn't a horrible book.", -0.36},
        {"The book was only kind of good.", 0.61},
        {"The plot was good, but the characters are uncompelling and the dialog is not great.", 0.27},
        {"Today SUX!", 0.0},
        {"Today only kinda sux! But I'll get by, lol", 0.16},
        {"Make sure you :) or :D today!", 0.80},
        {"Not bad at all", -0.62}
    };

    // Find the length of the longest sentence
    size_t max_length = 0;
    for (size_t i = 0; i < sizeof(samples) / sizeof(samples[0]); i++) {
        size_t length = strlen(samples[i].text);
        if (length > max_length) {
            max_length = length;
        }
    }

    // Print the sentences and scores with aligned spacing
    printf("string%s score\n", "                                           ");
    printf("------------------------------------------------------------\n");
    for (size_t i = 0; i < sizeof(samples) / sizeof(samples[0]); i++) {
        printf("%s%s %.2f\n", samples[i].text, "                                           ", samples[i].score);
    }

    return 0;
}