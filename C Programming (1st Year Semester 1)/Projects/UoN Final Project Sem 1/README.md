# Group Members (All members are in the Group 1 in the first years computer science class)
    Name                            Registration Number
    - Odhiambo Richard Onyango      P15/1910/2022
    - Wesonga Ashton Walutsachi     P15/144684/2022
    - Okelo David Omondi            P15/144891/2022
# Problem
    - Some adults may not know appropriate books to give to their children. 
    - Some researchers may write challenging project proposals that sponsors may not easily comprehend; hence they lose their funding. 
    - Some teachers may create problem sets that may have a challenging language for their students; hence the student struggles to 
      address the challenge. Some businesses may also have complicated language in their reports, making their clients lose interest 
      in their work. People write essays, news, and other text files in our day-to-day activities without assurance that their 
      intended audience may understand their work.
# Description of how the program solves the problem
    - Our program solves this issue. First, the program takes a text file name as a command line argument. 
    - Next, the program opens the given text file, reads through all the characters, and determines the number of words, sentences, 
      and syllables. Finally, the program determines how easy it is to read the text file using the Flesch Reading Ease algorithm.
    - The program outputs the number of words and sentences. It also shows the intended audience of the text file.
# List of assumptions in the program
    - The language in the text file is in English and the text follows correct punctuation rules. English is used in counting syllables.
    - A sentence ends with only the following punctations: ?, ! and . This includes abbreviated words such as Mr. which will be 
      counted as a sentence.
    - A word is counted as so when character(s) has a space at the end (works even if there is a fullstop/question mark/exclamation 
      mark since grammar rules ensure a blank space between two sentences) and the last character of the text file and it is not a space.
    - Vowels are the letters: a, e, i, o, u, y
    - A syllable is counted as so when the first letter is a vowel, when two consecutive letters are such that a vowel is followed 
      by a consonant. When a word ends with the character 'e', one syllable is deducted. However, when a word ends with 'le' and the length of the word is more than two characters and the thirdlast character is not a vowel, a syllable is added. If no syllables have been added in a word, atleast one syllable will be added.
# Usage of the program
    - In the terminal, run ./final_project.exe test.txt
    The program will use a text file called test.txt
