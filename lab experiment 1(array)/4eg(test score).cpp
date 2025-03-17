#include <stdio.h>

// Function to calculate the average score and find the highest score
void calculateAverageAndHighest(int scores[], int size, float *average, int *highest) {
    int sum = 0;
    *highest = scores[0];

    for (int i = 0; i < size; i++) {
        sum += scores[i];

        if (scores[i] > *highest) {
            *highest = scores[i];
        }
    }

    *average = (float)sum / size;
}

// Function to count the number of students who passed and failed
void countPassedFailed(int scores[], int size, int passingThreshold, int *passed, int *failed) {
    *passed = *failed = 0;

    for (int i = 0; i < size; i++) {
        if (scores[i] >= passingThreshold) {
            (*passed)++;
        } else {
            (*failed)++;
        }
    }
}

// Function to determine the grade distribution
void determineGradeDistribution(int scores[], int size, int gradeRanges[5]) {
    for (int i = 0; i < 5; i++) {
        gradeRanges[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (scores[i] >= 90) {
            gradeRanges[0]++; // O (Outstanding)
        } else if (scores[i] >= 80) {
            gradeRanges[1]++; // E (Excellent)
        } else if (scores[i] >= 70) {
            gradeRanges[2]++; // A (Average)
        } else if (scores[i] >= 60) {
            gradeRanges[3]++; // B (Below Average)
        } else {
            gradeRanges[4]++; // F (Fail)
        }
    }
}

int main() {
    int test_scores[] = {85, 78, 92, 65, 89, 76, 94, 81, 87, 90, 72, 88, 95, 79, 83, 91, 70, 84, 86, 93};
    int size = sizeof(test_scores) / sizeof(test_scores[0]);

    // A. Calculate the average score and find the highest score
    float average;
    int highest;
    calculateAverageAndHighest(test_scores, size, &average, &highest);
    printf("A. Average score: %.2f\n", average);
    printf("   Highest score: %d\n", highest);

    // B. Count the number of students who passed and failed
    int passingThreshold = 60;
    int passed, failed;
    countPassedFailed(test_scores, size, passingThreshold, &passed, &failed);
    printf("B. Number of students passed: %d\n", passed);
    printf("   Number of students failed: %d\n", failed);

    // C. Determine the grade distribution
    int gradeRanges[5];
    determineGradeDistribution(test_scores, size, gradeRanges);
    printf("C. Grade distribution:\n");
    printf("   O (Outstanding): %d\n", gradeRanges[0]);
    printf("   E (Excellent): %d\n", gradeRanges[1]);
    printf("   A (Average): %d\n", gradeRanges[2]);
    printf("   B (Below Average): %d\n", gradeRanges[3]);
    printf("   F (Fail): %d\n", gradeRanges[4]);

    return 0;
}
