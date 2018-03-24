# Wordlist

This repo features a C++ 11 program to create wordLists out of text files and already includes wordLists of:

* [x] The entire web2 dictionary seperated into wordlists by length
* [x] Proper names
* [x] Hypenated nouns and abbreviated phrases
* [x] Connective words for sentences

## Using wordlist.cpp

Compile wordList with g++

```console
g++ wordList.cpp -o wordlist
```

Run executable and pass in text file as a parameter

```console
./wordList words.txt
```

After the run you are presented a summary of the programs execution

```console
Created 24 seperate wordLists out of 235886 words
```

## Credits

All wordlists come from the Websters 2nd International Dictionary, whose 1934 copyright has lapsed.

## LICENSE

[MIT LICENSE](LICENSE.md)