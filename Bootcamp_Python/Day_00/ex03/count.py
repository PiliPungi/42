import re


def text_analyser(text='', *args):
    '''
    This function counts the number of upper characters, lower characters,
    punctuation and spaces in a given text.
    '''

    textLen = len(text)
    upperLetters = 0
    lowerLetters = 0
    punctuations = 0
    spaces = 0

    if textLen == 0:
        text = input("What is the text to analyse?\n")
    for letter in text:
        if letter.isupper():
            upperLetters = upperLetters + 1
        elif letter.islower():
            lowerLetters = lowerLetters + 1

    spaces = text.count(' ')
    punctuations = text.count('. ') + text.count(',') + text.count(';')
    punctuations = punctuations + text.count(':') + text.count('!')
    punctuations = punctuations + text.count('?') + text.count('...')
    punctuations = punctuations + text.count('?') + text.count('"')
    punctuations = punctuations + text.count('(') + text.count('-')

    print("The text contains {} characters:\n".format(textLen))
    print("- {} upper letters\n".format(upperLetters))
    print("- {} lower letters\n".format(lowerLetters))
    print("- {} punctuation marks\n".format(punctuations))
    print("- {} space\n".format(spaces))

# lisTesRatures = input("What is the text to analyse?\n")
# text_analyser(lisTesRatures)
