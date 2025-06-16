# cards
# C. BALATRO

**time limit per test:** 1 second
**memory limit per test:** 256 megabytes

Consider a deck of $n$ cards, arranged in a specific order. Each card is either of the form `+ a` or `× a`. The score of the deck is defined as follows:

There is a number $x$ (initially $x = 1$). The cards in the deck are considered in their arranged order. If the current card being considered is of the form `+ a`, we add $a$ to $x$ (in other words, perform the operation $x = x + a$). Conversely, if the card is of the form `× a`, we multiply $x$ by $a$ (in other words, perform the operation $x = x \times a$). The score of the deck is the final value of $x$ after considering all the cards.

**Request:** Given $n$ cards, reorder them to create a deck with the highest possible score.

## Input

The first line consists of a positive integer $n$ ($1 \le n \le 500$) representing the number of cards given.

The $i$-th of the next $n$ lines is of the form `c a`, representing the $i$-th card ($a$ is an integer, $2 \le a \le 10^9$).

## Output

Consists of a single line with $n$ distinct positive integers from $1$ to $n$, separated by spaces. The $i$-th number is the original index of the card placed at the $i$-th position.

## Example

**Input**
5 
x 2 
+ 5
x 7
+ 8
x 9

**Output**
2 4 1 3 5
## Note

The arrangement 2, 4, 1, 3, 5 represents arranging the 5 cards from the input as follows:

First card: + 5
Second card: + 8
Third card: x 2
Fourth card: + 7
Fifth card: x 9
