/*
Matthew Deoraj 
June 2, 2026
Gemini 
*/

#include <iostream>
#include <string>
#include <algorithm> // Required for std::min
int main() {
    std::string new_word;
    // 1. Ask the user to type a word and save it
    std::cout << "Type a word: ";
    std::cin >> new_word;
    // 2. Print the 4th character of the word
    // Strings are 0-indexed, so the 4th character is at index 3.
    // Check if the word is long enough to have a 4th character.
    if (new_word.length() >= 4) {
        std::cout << "The 4th character is: " << new_word[3] << std::endl;
    } else {
        std::cout << "The word is too short to have a 4th character." << std::endl;
    }
    // 3. Find and print the length of the word
    std::cout << "The length of the word is: " << new_word.length() << " characters." << std::endl;
    // 4. Replace three characters from the second character with "-- $ --"
    // The second character is at index 1.
    // Ensure we don't go out of bounds when replacing.
    if (new_word.length() >= 2) {
        // Calculate how many characters to actually erase to prevent out-of-bounds access.
        // We want to replace 3 characters starting from index 1.
        // If the string is "t" (length 1), new_word.length() - 1 = 0, so erase_count = min(3, 0) = 0.
        // If the string is "te" (length 2), new_word.length() - 1 = 1, so erase_count = min(3, 1) = 1.
        // If the string is "ter" (length 3), new_word.length() - 1 = 2, so erase_count = min(3, 2) = 2.
        // If the string is "term" (length 4), new_word.length() - 1 = 3, so erase_count = min(3, 3) = 3.
        std::string replacement_string = "-- $ --";
        int erase_count = std::min(3, (int)new_word.length() - 1);
        if (erase_count >= 0) { // Only perform erase-insert if there's at least one character to start from the second position
            new_word.replace(1, erase_count, replacement_string);
        } else {
            // If the word has only 0 or 1 character, there's nothing to replace from the "second" character.
            // We can just append the replacement if the intent is to add it after the first char (if any).
            // For this specific problem's output "t-- $ --inal", it implies replacement starting at the second char
            // For "t", new_word.length() - 1 is 0. So erase_count is 0.
            // new_word.replace(1, 0, replacement_string); would insert at index 1.
            // Let's stick to the problem description: "replace three characters from the second character".
            // If there's no second character, there's nothing to replace *from*.
            // The example 'terminal' suggests that 'erm' is replaced.
            // If the word is 't', 'te', or 'ter', the problem implies to only replace what's available.
            // The original logic `std::min(3, (int)new_word.length() - 1)` correctly handles this
            // for words shorter than 4 characters, it will replace fewer than 3 characters,
            // or 0 characters if the word is length 1 or 0 (it will just insert in that case).
            // For example, if new_word was "t", erase_count would be std::min(3, 0) = 0.
            // new_word.replace(1, 0, replacement_string) would effectively become "t-- $ --".
            // The example output "t-- $ --inal" for "terminal" confirms the starting index for replacement is 1 (the 'e' in 'terminal').
            // The result "t-- $ --inal" means 'e', 'r', 'm' (3 chars) were replaced.
            // If new_word.length() < 2, the behavior is slightly ambiguous for 'replace *from* the second character'.
            // For now, assume if new_word.length() < 2, no actual "replacement" of existing characters happens,
            // but if there's at least one character, the replacement string could be inserted after the first.
            // The current code with `erase_count = std::min(3, (int)new_word.length() - 1);` handles insertion for very short strings correctly:
            // if new_word = "t", erase_count = 0, new_word.replace(1, 0, "-- $ --") -> "t-- $ --"
            // if new_word = "te", erase_count = 1, new_word.replace(1, 1, "-- $ --") -> "t-- $ --"
            // if new_word = "ter", erase_count = 2, new_word.replace(1, 2, "-- $ --") -> "t-- $ --r" - This differs from example.
            // Let's re-evaluate the replacement based on the example: 'terminal' -> 't-- $ --inal'
            // This means 3 characters *after* the first ('e', 'r', 'm') are replaced.
            // String.replace(pos, len, str)
            // pos = 1 (second character)
            // len = 3 (three characters)
            // str = "-- $ --"
            // The issue is if new_word.length() < (1 + 3) = 4.
            size_t replace_pos = 1;
            size_t replace_len = 3;
            // Adjust replace_len if the string is shorter than required
            if (new_word.length() <= replace_pos) {
                // If the word is too short to even have a second character, no replacement can occur.
                // Or, if the requirement is to insert starting at the end of the current word.
                // The example "terminal" implies needing at least 4 chars ('t' + 3 for replacement).
                // If it's shorter, perhaps it should just insert after first char if it exists.
                // Following the "replace three characters from the second character" literally:
                // if there are not 3 characters available from the second position, replace fewer.
                // std::min(how many to replace, how many are actually available)
                replace_len = 0; // nothing to replace as there's no second char
            } else {
                replace_len = std::min(replace_len, new_word.length() - replace_pos);
            }
            new_word.replace(replace_pos, replace_len, replacement_string);
        }
    }
    std::cout << "After replacement: " << new_word << std::endl;
    // 5. Remove two characters from the end of the message
    // Check if the word is long enough to remove two characters.
    if (new_word.length() >= 2) {
        new_word.pop_back(); // Removes the last character
        new_word.pop_back(); // Removes the new last character
    } else {
        new_word.clear(); // If less than 2 characters, clear the string to effectively remove them.
    }
    std::cout << "After removing two characters from the end: " << new_word << std::endl;
    return 0;
}

/*
1)the code was sorta correct it got most of it right except the last part
2)it was readable and there were comments that made it easy to understand, but when gemini gave it to me it was a mess of code.
3)definety was not able to explain any of the code it was a little advanced but also some of the codde was outdated like std.
4)it used some of the same functions and methods that we used in class but it also used some that we did not use in class so it was a little hard to understand.
5)Type a word: Terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: T-- $ --inal
After removing two characters from the end: T-- $ --in





*/