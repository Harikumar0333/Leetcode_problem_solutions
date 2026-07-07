You are given two arrays A and B of size n.

Both arrays are permutations from 1 to n.

For every index i, find how many numbers are common in:

A[0...i] and B[0...i]

Return the prefix common array.

We use a frequency array to track how many times a number appears.

Since both arrays are permutations:

when a number appears twice,
it means it appeared in both arrays.
